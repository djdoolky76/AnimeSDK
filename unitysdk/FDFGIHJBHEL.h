#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDFGIHJBHEL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FDFGIHJBHEL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E355740)
#define FDFGIHJBHEL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E355A10)
#define FDFGIHJBHEL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E355340)
#define FDFGIHJBHEL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E355310)
#define FDFGIHJBHEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E355300)
#define FDFGIHJBHEL_ENDBLFECBCB_OFFSET UNITYSDK_OFFSET(0x1E3553B0)
#define FDFGIHJBHEL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E355500)
#define FDFGIHJBHEL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3553F0)
#define FDFGIHJBHEL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3555D0)
#define FDFGIHJBHEL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E355290)
#define FDFGIHJBHEL_JPBBKPPHDGB_OFFSET UNITYSDK_OFFSET(0x1E3553E0)
#define FDFGIHJBHEL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E355890)
#define FDFGIHJBHEL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E355850)
#define FDFGIHJBHEL_ODKKGJEDNKM_OFFSET UNITYSDK_OFFSET(0x1E3553D0)
#define FDFGIHJBHEL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3552F0)
#define FDFGIHJBHEL_PPCFBDNNBCC_OFFSET UNITYSDK_OFFSET(0x1E3553C0)
#define FDFGIHJBHEL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E355600)
#define FDFGIHJBHEL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E355660)

inline static constexpr unsigned int FDFGIHJBHEL_TypeDefinitionIndex = 25738;

	class FDFGIHJBHEL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PCHFGHIOMOL; // 0x18
		::System::UInt32 NECNCPDGBOO; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::FDFGIHJBHEL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FDFGIHJBHEL*>**)UnitySDK::FromName("", "FDFGIHJBHEL")->GetStaticField(0xE9E0);
		}

		// static const ::System::Object IOAMBHCDNBJ; // 0x0
		// static const ::System::Object HDLDFLFJMBF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFGIHJBHEL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FDFGIHJBHEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDFGIHJBHEL*))((::PBYTE)hIl2Cpp + FDFGIHJBHEL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDFGIHJBHEL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FDFGIHJBHEL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FDFGIHJBHEL*>*(*)())((::PBYTE)hIl2Cpp + FDFGIHJBHEL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFGIHJBHEL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FDFGIHJBHEL* Clone()
		{
			return ((::FDFGIHJBHEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFGIHJBHEL_CLONE_OFFSET))(this);
		}

		::System::UInt32 ENDBLFECBCB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFGIHJBHEL_ENDBLFECBCB_OFFSET))(this);
		}

		::System::Void PPCFBDNNBCC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FDFGIHJBHEL_PPCFBDNNBCC_OFFSET))(this, a1);
		}

		::System::UInt32 ODKKGJEDNKM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFGIHJBHEL_ODKKGJEDNKM_OFFSET))(this);
		}

		::System::Void JPBBKPPHDGB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FDFGIHJBHEL_JPBBKPPHDGB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FDFGIHJBHEL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FDFGIHJBHEL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FDFGIHJBHEL*))((::PBYTE)hIl2Cpp + FDFGIHJBHEL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFGIHJBHEL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFGIHJBHEL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FDFGIHJBHEL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFGIHJBHEL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FDFGIHJBHEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDFGIHJBHEL*))((::PBYTE)hIl2Cpp + FDFGIHJBHEL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FDFGIHJBHEL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
