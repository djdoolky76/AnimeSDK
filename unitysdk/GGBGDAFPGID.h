#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGBGDAFPGID;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GGBGDAFPGID_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E477EB0)
#define GGBGDAFPGID_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4781C0)
#define GGBGDAFPGID_CLONE_OFFSET UNITYSDK_OFFSET(0x1E477A30)
#define GGBGDAFPGID_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1E477A80)
#define GGBGDAFPGID_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4779F0)
#define GGBGDAFPGID_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4779E0)
#define GGBGDAFPGID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E477BD0)
#define GGBGDAFPGID_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E477AE0)
#define GGBGDAFPGID_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E477AD0)
#define GGBGDAFPGID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E477CB0)
#define GGBGDAFPGID_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1E477A90)
#define GGBGDAFPGID_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4779A0)
#define GGBGDAFPGID_LLMPIHGIKEK_OFFSET UNITYSDK_OFFSET(0x1E477AB0)
#define GGBGDAFPGID_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E478020)
#define GGBGDAFPGID_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E477FD0)
#define GGBGDAFPGID_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E477AC0)
#define GGBGDAFPGID_OMPBPEPDGLA_OFFSET UNITYSDK_OFFSET(0x1E477AA0)
#define GGBGDAFPGID_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4779D0)
#define GGBGDAFPGID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E477CE0)
#define GGBGDAFPGID_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E477D40)

inline static constexpr unsigned int GGBGDAFPGID_TypeDefinitionIndex = 30188;

	class GGBGDAFPGID : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean OIAABFABCPE; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 NAEACGPKNNH; // 0x1C
		::System::UInt32 KJAENGKDFJD; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GGBGDAFPGID*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GGBGDAFPGID*>**)UnitySDK::FromName("", "GGBGDAFPGID")->GetStaticField(0x15810);
		}

		// static const ::System::Object PIACMPBJOIK; // 0x0
		// static const ::System::Object CAPLJOPAFNI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGDAFPGID_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GGBGDAFPGID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGBGDAFPGID*))((::PBYTE)hIl2Cpp + GGBGDAFPGID_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGBGDAFPGID_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GGBGDAFPGID*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GGBGDAFPGID*>*(*)())((::PBYTE)hIl2Cpp + GGBGDAFPGID_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGDAFPGID_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GGBGDAFPGID* Clone()
		{
			return ((::GGBGDAFPGID*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGDAFPGID_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGDAFPGID_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GGBGDAFPGID_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::Boolean OMPBPEPDGLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGDAFPGID_OMPBPEPDGLA_OFFSET))(this);
		}

		::System::Void LLMPIHGIKEK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GGBGDAFPGID_LLMPIHGIKEK_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGDAFPGID_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GGBGDAFPGID_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GGBGDAFPGID_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GGBGDAFPGID* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GGBGDAFPGID*))((::PBYTE)hIl2Cpp + GGBGDAFPGID_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGDAFPGID_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGDAFPGID_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GGBGDAFPGID_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGDAFPGID_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GGBGDAFPGID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGBGDAFPGID*))((::PBYTE)hIl2Cpp + GGBGDAFPGID_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GGBGDAFPGID_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
