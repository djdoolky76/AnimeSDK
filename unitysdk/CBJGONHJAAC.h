#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBJGONHJAAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CBJGONHJAAC_AABOOKNIJKN_OFFSET UNITYSDK_OFFSET(0x1E06D1D0)
#define CBJGONHJAAC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E06D670)
#define CBJGONHJAAC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E06D9A0)
#define CBJGONHJAAC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E06D170)
#define CBJGONHJAAC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E06D0E0)
#define CBJGONHJAAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E06D090)
#define CBJGONHJAAC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E06D320)
#define CBJGONHJAAC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E06D1F0)
#define CBJGONHJAAC_FEGIMNBKFHN_OFFSET UNITYSDK_OFFSET(0x1E06D1C0)
#define CBJGONHJAAC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E06D410)
#define CBJGONHJAAC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E06D020)
#define CBJGONHJAAC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E06D7D0)
#define CBJGONHJAAC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E06D780)
#define CBJGONHJAAC_MJMBNPOBAEG_OFFSET UNITYSDK_OFFSET(0x1E06D1E0)
#define CBJGONHJAAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E06D080)
#define CBJGONHJAAC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E06D510)
#define CBJGONHJAAC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E06D570)

inline static constexpr unsigned int CBJGONHJAAC_TypeDefinitionIndex = 34856;

	class CBJGONHJAAC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JFDKGKMNLIH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 MLCHFINKHHM; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CBJGONHJAAC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CBJGONHJAAC*>**)UnitySDK::FromName("", "CBJGONHJAAC")->GetStaticField(0xC800);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_ONFFGAGCDBJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CBJGONHJAAC")->GetStaticField(0xC808);
		}

		// static const ::System::Object HBIJBPKKMNN; // 0x0
		// static const ::System::Object BDBOPPOJIEA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJGONHJAAC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CBJGONHJAAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBJGONHJAAC*))((::PBYTE)hIl2Cpp + CBJGONHJAAC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBJGONHJAAC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CBJGONHJAAC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CBJGONHJAAC*>*(*)())((::PBYTE)hIl2Cpp + CBJGONHJAAC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJGONHJAAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CBJGONHJAAC* Clone()
		{
			return ((::CBJGONHJAAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJGONHJAAC_CLONE_OFFSET))(this);
		}

		::System::UInt32 FEGIMNBKFHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJGONHJAAC_FEGIMNBKFHN_OFFSET))(this);
		}

		::System::Void AABOOKNIJKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CBJGONHJAAC_AABOOKNIJKN_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MJMBNPOBAEG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJGONHJAAC_MJMBNPOBAEG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CBJGONHJAAC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CBJGONHJAAC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CBJGONHJAAC*))((::PBYTE)hIl2Cpp + CBJGONHJAAC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJGONHJAAC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJGONHJAAC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CBJGONHJAAC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJGONHJAAC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CBJGONHJAAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBJGONHJAAC*))((::PBYTE)hIl2Cpp + CBJGONHJAAC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CBJGONHJAAC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
