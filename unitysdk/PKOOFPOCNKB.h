#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKOOFPOCNKB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PKOOFPOCNKB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F4A3A60)
#define PKOOFPOCNKB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4A3CF0)
#define PKOOFPOCNKB_CIJFMOANNFD_OFFSET UNITYSDK_OFFSET(0x1F4A3760)
#define PKOOFPOCNKB_CLONE_OFFSET UNITYSDK_OFFSET(0x1F49A0F0)
#define PKOOFPOCNKB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F4A3700)
#define PKOOFPOCNKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1F49F1B0)
#define PKOOFPOCNKB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F4A3850)
#define PKOOFPOCNKB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F4A3770)
#define PKOOFPOCNKB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F49C290)
#define PKOOFPOCNKB_IAMPGJHFKPF_OFFSET UNITYSDK_OFFSET(0x1F4A3750)
#define PKOOFPOCNKB_IENHBPNBCEI_OFFSET UNITYSDK_OFFSET(0x1F4A3730)
#define PKOOFPOCNKB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F4A36C0)
#define PKOOFPOCNKB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F4A3B70)
#define PKOOFPOCNKB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F49F1C0)
#define PKOOFPOCNKB_NPLKDIIAGHP_OFFSET UNITYSDK_OFFSET(0x1F4A3740)
#define PKOOFPOCNKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F4A36F0)
#define PKOOFPOCNKB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F4A3920)
#define PKOOFPOCNKB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F4A3980)

inline static constexpr unsigned int PKOOFPOCNKB_TypeDefinitionIndex = 33961;

	class PKOOFPOCNKB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JGGLFKKCLPK; // 0x18
		::System::UInt32 FNNAJBOEBNB; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::PKOOFPOCNKB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PKOOFPOCNKB*>**)UnitySDK::FromName("", "PKOOFPOCNKB")->GetStaticField(0x43530);
		}

		// static const ::System::Object PJDEFGAMBFK; // 0x0
		// static const ::System::Object HKJEHKIOFNB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOOFPOCNKB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PKOOFPOCNKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKOOFPOCNKB*))((::PBYTE)hIl2Cpp + PKOOFPOCNKB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKOOFPOCNKB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PKOOFPOCNKB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PKOOFPOCNKB*>*(*)())((::PBYTE)hIl2Cpp + PKOOFPOCNKB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOOFPOCNKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PKOOFPOCNKB* Clone()
		{
			return ((::PKOOFPOCNKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOOFPOCNKB_CLONE_OFFSET))(this);
		}

		::System::UInt32 IENHBPNBCEI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOOFPOCNKB_IENHBPNBCEI_OFFSET))(this);
		}

		::System::Void NPLKDIIAGHP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PKOOFPOCNKB_NPLKDIIAGHP_OFFSET))(this, a1);
		}

		::System::UInt32 IAMPGJHFKPF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOOFPOCNKB_IAMPGJHFKPF_OFFSET))(this);
		}

		::System::Void CIJFMOANNFD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PKOOFPOCNKB_CIJFMOANNFD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PKOOFPOCNKB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PKOOFPOCNKB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PKOOFPOCNKB*))((::PBYTE)hIl2Cpp + PKOOFPOCNKB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOOFPOCNKB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOOFPOCNKB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PKOOFPOCNKB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOOFPOCNKB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PKOOFPOCNKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKOOFPOCNKB*))((::PBYTE)hIl2Cpp + PKOOFPOCNKB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PKOOFPOCNKB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
