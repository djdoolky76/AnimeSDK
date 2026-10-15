#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCGNKJHKJMM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HCGNKJHKJMM_BPHAFCAHJPG_OFFSET UNITYSDK_OFFSET(0x1E510480)
#define HCGNKJHKJMM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5107E0)
#define HCGNKJHKJMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E510AB0)
#define HCGNKJHKJMM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E510430)
#define HCGNKJHKJMM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E510400)
#define HCGNKJHKJMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5103F0)
#define HCGNKJHKJMM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5105A0)
#define HCGNKJHKJMM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5104C0)
#define HCGNKJHKJMM_GEILLPDBLJG_OFFSET UNITYSDK_OFFSET(0x1E510490)
#define HCGNKJHKJMM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E510670)
#define HCGNKJHKJMM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5103B0)
#define HCGNKJHKJMM_LKBKNGLMAMN_OFFSET UNITYSDK_OFFSET(0x1E5104A0)
#define HCGNKJHKJMM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E510930)
#define HCGNKJHKJMM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5108F0)
#define HCGNKJHKJMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5103E0)
#define HCGNKJHKJMM_PNJCLMCJHBE_OFFSET UNITYSDK_OFFSET(0x1E5104B0)
#define HCGNKJHKJMM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5106A0)
#define HCGNKJHKJMM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E510700)

inline static constexpr unsigned int HCGNKJHKJMM_TypeDefinitionIndex = 28068;

	class HCGNKJHKJMM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HJPCMINMFBI; // 0x18
		::System::UInt32 HGECOJIAJOA; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::HCGNKJHKJMM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HCGNKJHKJMM*>**)UnitySDK::FromName("", "HCGNKJHKJMM")->GetStaticField(0x2AB90);
		}

		// static const ::System::Object KHDBNNKGJCC; // 0x0
		// static const ::System::Object ACLGGLDCAEC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGNKJHKJMM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HCGNKJHKJMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCGNKJHKJMM*))((::PBYTE)hIl2Cpp + HCGNKJHKJMM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCGNKJHKJMM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HCGNKJHKJMM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HCGNKJHKJMM*>*(*)())((::PBYTE)hIl2Cpp + HCGNKJHKJMM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGNKJHKJMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HCGNKJHKJMM* Clone()
		{
			return ((::HCGNKJHKJMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGNKJHKJMM_CLONE_OFFSET))(this);
		}

		::System::UInt32 BPHAFCAHJPG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGNKJHKJMM_BPHAFCAHJPG_OFFSET))(this);
		}

		::System::Void GEILLPDBLJG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HCGNKJHKJMM_GEILLPDBLJG_OFFSET))(this, a1);
		}

		::System::UInt32 LKBKNGLMAMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGNKJHKJMM_LKBKNGLMAMN_OFFSET))(this);
		}

		::System::Void PNJCLMCJHBE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HCGNKJHKJMM_PNJCLMCJHBE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HCGNKJHKJMM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HCGNKJHKJMM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HCGNKJHKJMM*))((::PBYTE)hIl2Cpp + HCGNKJHKJMM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGNKJHKJMM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGNKJHKJMM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HCGNKJHKJMM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGNKJHKJMM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HCGNKJHKJMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCGNKJHKJMM*))((::PBYTE)hIl2Cpp + HCGNKJHKJMM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HCGNKJHKJMM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
