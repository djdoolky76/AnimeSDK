#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLAEOKIKLAA;
class NPEHFAHLDNM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DLAEOKIKLAA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1AEA50)
#define DLAEOKIKLAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1AECA0)
#define DLAEOKIKLAA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1AE3E0)
#define DLAEOKIKLAA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1AE390)
#define DLAEOKIKLAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1AE380)
#define DLAEOKIKLAA_DDBNPAPKCMA_OFFSET UNITYSDK_OFFSET(0x1E1AE440)
#define DLAEOKIKLAA_EMBDACAJHCG_OFFSET UNITYSDK_OFFSET(0x1E1AE450)
#define DLAEOKIKLAA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1AE5D0)
#define DLAEOKIKLAA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1AE460)
#define DLAEOKIKLAA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1AE8A0)
#define DLAEOKIKLAA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1AE340)
#define DLAEOKIKLAA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1AEB20)
#define DLAEOKIKLAA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1AEAB0)
#define DLAEOKIKLAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1AE370)
#define DLAEOKIKLAA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1AE960)
#define DLAEOKIKLAA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1AE9C0)

inline static constexpr unsigned int DLAEOKIKLAA_TypeDefinitionIndex = 30521;

	class DLAEOKIKLAA : public ::System::Object
	{
	public:
		::NPEHFAHLDNM* DIOPPNPPOLH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DLAEOKIKLAA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DLAEOKIKLAA*>**)UnitySDK::FromName("", "DLAEOKIKLAA")->GetStaticField(0x34590);
		}

		// static const ::System::Object OAMMBKNIIJL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAEOKIKLAA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DLAEOKIKLAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLAEOKIKLAA*))((::PBYTE)hIl2Cpp + DLAEOKIKLAA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLAEOKIKLAA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DLAEOKIKLAA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DLAEOKIKLAA*>*(*)())((::PBYTE)hIl2Cpp + DLAEOKIKLAA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAEOKIKLAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DLAEOKIKLAA* Clone()
		{
			return ((::DLAEOKIKLAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAEOKIKLAA_CLONE_OFFSET))(this);
		}

		::NPEHFAHLDNM* DDBNPAPKCMA()
		{
			return ((::NPEHFAHLDNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAEOKIKLAA_DDBNPAPKCMA_OFFSET))(this);
		}

		::System::Void EMBDACAJHCG(::NPEHFAHLDNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPEHFAHLDNM*))((::PBYTE)hIl2Cpp + DLAEOKIKLAA_EMBDACAJHCG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DLAEOKIKLAA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DLAEOKIKLAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DLAEOKIKLAA*))((::PBYTE)hIl2Cpp + DLAEOKIKLAA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAEOKIKLAA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAEOKIKLAA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DLAEOKIKLAA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAEOKIKLAA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DLAEOKIKLAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLAEOKIKLAA*))((::PBYTE)hIl2Cpp + DLAEOKIKLAA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DLAEOKIKLAA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
