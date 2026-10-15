#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPDCBDHANON;
class HODNCFNOPDA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GPDCBDHANON_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0x1E4C8380)
#define GPDCBDHANON_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4C8970)
#define GPDCBDHANON_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4C8C10)
#define GPDCBDHANON_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4C8300)
#define GPDCBDHANON_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4C8290)
#define GPDCBDHANON_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C8280)
#define GPDCBDHANON_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4C8510)
#define GPDCBDHANON_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4C83A0)
#define GPDCBDHANON_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4C87E0)
#define GPDCBDHANON_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4C8240)
#define GPDCBDHANON_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4C8A60)
#define GPDCBDHANON_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4C89D0)
#define GPDCBDHANON_OAJDGCDLFLL_OFFSET UNITYSDK_OFFSET(0x1E4C8390)
#define GPDCBDHANON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4C8270)
#define GPDCBDHANON_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4C8880)
#define GPDCBDHANON_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4C88E0)

inline static constexpr unsigned int GPDCBDHANON_TypeDefinitionIndex = 27855;

	class GPDCBDHANON : public ::System::Object
	{
	public:
		::HODNCFNOPDA* CMDGAIOLHKP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GPDCBDHANON*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GPDCBDHANON*>**)UnitySDK::FromName("", "GPDCBDHANON")->GetStaticField(0x23780);
		}

		// static const ::System::Object BFJOJJHJAIJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDCBDHANON_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GPDCBDHANON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPDCBDHANON*))((::PBYTE)hIl2Cpp + GPDCBDHANON_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPDCBDHANON_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GPDCBDHANON*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GPDCBDHANON*>*(*)())((::PBYTE)hIl2Cpp + GPDCBDHANON_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDCBDHANON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GPDCBDHANON* Clone()
		{
			return ((::GPDCBDHANON*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDCBDHANON_CLONE_OFFSET))(this);
		}

		::HODNCFNOPDA* ANALOEDDDHD()
		{
			return ((::HODNCFNOPDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDCBDHANON_ANALOEDDDHD_OFFSET))(this);
		}

		::System::Void OAJDGCDLFLL(::HODNCFNOPDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HODNCFNOPDA*))((::PBYTE)hIl2Cpp + GPDCBDHANON_OAJDGCDLFLL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GPDCBDHANON_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GPDCBDHANON* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GPDCBDHANON*))((::PBYTE)hIl2Cpp + GPDCBDHANON_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDCBDHANON_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDCBDHANON_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GPDCBDHANON_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDCBDHANON_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GPDCBDHANON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPDCBDHANON*))((::PBYTE)hIl2Cpp + GPDCBDHANON_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GPDCBDHANON_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
