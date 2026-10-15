#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NECNANNNGBN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NECNANNNGBN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAC2B60)
#define NECNANNNGBN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC2E30)
#define NECNANNNGBN_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAC2760)
#define NECNANNNGBN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAC2730)
#define NECNANNNGBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC2720)
#define NECNANNNGBN_EHHGHBGBPJG_OFFSET UNITYSDK_OFFSET(0x1EAC27D0)
#define NECNANNNGBN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAC2920)
#define NECNANNNGBN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAC2810)
#define NECNANNNGBN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAC29F0)
#define NECNANNNGBN_GGBIACNDEAL_OFFSET UNITYSDK_OFFSET(0x1EAC2800)
#define NECNANNNGBN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAC26B0)
#define NECNANNNGBN_KFICPBFADIC_OFFSET UNITYSDK_OFFSET(0x1EAC27E0)
#define NECNANNNGBN_LMDCNBMNCPG_OFFSET UNITYSDK_OFFSET(0x1EAC27F0)
#define NECNANNNGBN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAC2CB0)
#define NECNANNNGBN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAC2C70)
#define NECNANNNGBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAC2710)
#define NECNANNNGBN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAC2A20)
#define NECNANNNGBN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAC2A80)

inline static constexpr unsigned int NECNANNNGBN_TypeDefinitionIndex = 28598;

	class NECNANNNGBN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NCCNFNPOAFO; // 0x18
		::System::UInt32 APKBBHHBGCB; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::NECNANNNGBN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NECNANNNGBN*>**)UnitySDK::FromName("", "NECNANNNGBN")->GetStaticField(0x60300);
		}

		// static const ::System::Object BFKLOMNNGGA; // 0x0
		// static const ::System::Object KDKPHPKNCBJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NECNANNNGBN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NECNANNNGBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NECNANNNGBN*))((::PBYTE)hIl2Cpp + NECNANNNGBN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NECNANNNGBN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NECNANNNGBN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NECNANNNGBN*>*(*)())((::PBYTE)hIl2Cpp + NECNANNNGBN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NECNANNNGBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NECNANNNGBN* Clone()
		{
			return ((::NECNANNNGBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NECNANNNGBN_CLONE_OFFSET))(this);
		}

		::System::UInt32 EHHGHBGBPJG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NECNANNNGBN_EHHGHBGBPJG_OFFSET))(this);
		}

		::System::Void KFICPBFADIC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NECNANNNGBN_KFICPBFADIC_OFFSET))(this, a1);
		}

		::System::UInt32 LMDCNBMNCPG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NECNANNNGBN_LMDCNBMNCPG_OFFSET))(this);
		}

		::System::Void GGBIACNDEAL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NECNANNNGBN_GGBIACNDEAL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NECNANNNGBN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NECNANNNGBN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NECNANNNGBN*))((::PBYTE)hIl2Cpp + NECNANNNGBN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NECNANNNGBN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NECNANNNGBN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NECNANNNGBN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NECNANNNGBN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NECNANNNGBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NECNANNNGBN*))((::PBYTE)hIl2Cpp + NECNANNNGBN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NECNANNNGBN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
