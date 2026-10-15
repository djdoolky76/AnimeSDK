#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCFHPBHFGLE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NCFHPBHFGLE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EADA8A0)
#define NCFHPBHFGLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EADAAC0)
#define NCFHPBHFGLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1EADA4F0)
#define NCFHPBHFGLE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EADA4C0)
#define NCFHPBHFGLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EADA4B0)
#define NCFHPBHFGLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EADA620)
#define NCFHPBHFGLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EADA550)
#define NCFHPBHFGLE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EADA540)
#define NCFHPBHFGLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EADA790)
#define NCFHPBHFGLE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EADA470)
#define NCFHPBHFGLE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EADA960)
#define NCFHPBHFGLE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EADA930)
#define NCFHPBHFGLE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EADA530)
#define NCFHPBHFGLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EADA4A0)
#define NCFHPBHFGLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EADA7C0)
#define NCFHPBHFGLE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EADA820)

inline static constexpr unsigned int NCFHPBHFGLE_TypeDefinitionIndex = 30230;

	class NCFHPBHFGLE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NCFHPBHFGLE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NCFHPBHFGLE*>**)UnitySDK::FromName("", "NCFHPBHFGLE")->GetStaticField(0x5D210);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFHPBHFGLE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NCFHPBHFGLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCFHPBHFGLE*))((::PBYTE)hIl2Cpp + NCFHPBHFGLE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCFHPBHFGLE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NCFHPBHFGLE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NCFHPBHFGLE*>*(*)())((::PBYTE)hIl2Cpp + NCFHPBHFGLE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFHPBHFGLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NCFHPBHFGLE* Clone()
		{
			return ((::NCFHPBHFGLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFHPBHFGLE_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFHPBHFGLE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NCFHPBHFGLE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCFHPBHFGLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NCFHPBHFGLE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NCFHPBHFGLE*))((::PBYTE)hIl2Cpp + NCFHPBHFGLE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFHPBHFGLE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFHPBHFGLE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NCFHPBHFGLE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFHPBHFGLE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NCFHPBHFGLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCFHPBHFGLE*))((::PBYTE)hIl2Cpp + NCFHPBHFGLE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NCFHPBHFGLE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
