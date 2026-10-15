#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCBHFBPADEE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BCBHFBPADEE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8D8310)
#define BCBHFBPADEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8D85E0)
#define BCBHFBPADEE_CIKFGFCIOMC_OFFSET UNITYSDK_OFFSET(0x1E8D7FE0)
#define BCBHFBPADEE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8D7F60)
#define BCBHFBPADEE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8D7F30)
#define BCBHFBPADEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8D7F20)
#define BCBHFBPADEE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8D80D0)
#define BCBHFBPADEE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8D7FF0)
#define BCBHFBPADEE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8D81A0)
#define BCBHFBPADEE_GFPCBBJIBKK_OFFSET UNITYSDK_OFFSET(0x1E8D7FD0)
#define BCBHFBPADEE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8D7EE0)
#define BCBHFBPADEE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8D8460)
#define BCBHFBPADEE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8D8420)
#define BCBHFBPADEE_NLHOBAKKGEA_OFFSET UNITYSDK_OFFSET(0x1E8D7FC0)
#define BCBHFBPADEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8D7F10)
#define BCBHFBPADEE_PNHHBCCGOJM_OFFSET UNITYSDK_OFFSET(0x1E8D7FB0)
#define BCBHFBPADEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8D81D0)
#define BCBHFBPADEE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8D8230)

inline static constexpr unsigned int BCBHFBPADEE_TypeDefinitionIndex = 30801;

	class BCBHFBPADEE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HNKDMHDJHDF; // 0x18
		::System::UInt32 KALGHPFELNA; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::BCBHFBPADEE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BCBHFBPADEE*>**)UnitySDK::FromName("", "BCBHFBPADEE")->GetStaticField(0x35930);
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

		static ::Google::Protobuf::MessageParser_1<::BCBHFBPADEE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BCBHFBPADEE*>*(*)())((::PBYTE)hIl2Cpp + BCBHFBPADEE_JJGHOBBFNJD_OFFSET))();
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
