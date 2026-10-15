#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCBHFBPADEE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BCBHFBPADEE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9058B0)
#define BCBHFBPADEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E905B80)
#define BCBHFBPADEE_CIKFGFCIOMC_OFFSET UNITYSDK_OFFSET(0x1E905580)
#define BCBHFBPADEE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E905500)
#define BCBHFBPADEE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9054D0)
#define BCBHFBPADEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9054C0)
#define BCBHFBPADEE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E905670)
#define BCBHFBPADEE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E905590)
#define BCBHFBPADEE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E905740)
#define BCBHFBPADEE_GFPCBBJIBKK_OFFSET UNITYSDK_OFFSET(0x1E905570)
#define BCBHFBPADEE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E905480)
#define BCBHFBPADEE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E905A00)
#define BCBHFBPADEE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9059C0)
#define BCBHFBPADEE_NLHOBAKKGEA_OFFSET UNITYSDK_OFFSET(0x1E905560)
#define BCBHFBPADEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9054B0)
#define BCBHFBPADEE_PNHHBCCGOJM_OFFSET UNITYSDK_OFFSET(0x1E905550)
#define BCBHFBPADEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E905770)
#define BCBHFBPADEE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9057D0)

	class BCBHFBPADEE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KALGHPFELNA; // 0x18
		::System::UInt32 HNKDMHDJHDF; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BCBHFBPADEE")->GetStaticField(0x3B230);
		}

		// static const ::System::Object JJGLCHJMLNP; // 0x0
		// static const ::System::Object CEIGBGIIMFI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBHFBPADEE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BCBHFBPADEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCBHFBPADEE*))((::PBYTE)hIl2Cpp + BCBHFBPADEE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCBHFBPADEE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BCBHFBPADEE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBHFBPADEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BCBHFBPADEE* Clone()
		{
			return ((::BCBHFBPADEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBHFBPADEE_CLONE_OFFSET))(this);
		}

		::System::UInt32 PNHHBCCGOJM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBHFBPADEE_PNHHBCCGOJM_OFFSET))(this);
		}

		::System::Void NLHOBAKKGEA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCBHFBPADEE_NLHOBAKKGEA_OFFSET))(this, a1);
		}

		::System::UInt32 GFPCBBJIBKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBHFBPADEE_GFPCBBJIBKK_OFFSET))(this);
		}

		::System::Void CIKFGFCIOMC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCBHFBPADEE_CIKFGFCIOMC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BCBHFBPADEE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BCBHFBPADEE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BCBHFBPADEE*))((::PBYTE)hIl2Cpp + BCBHFBPADEE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBHFBPADEE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBHFBPADEE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BCBHFBPADEE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBHFBPADEE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BCBHFBPADEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCBHFBPADEE*))((::PBYTE)hIl2Cpp + BCBHFBPADEE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BCBHFBPADEE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
