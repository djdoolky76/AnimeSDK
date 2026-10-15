#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGLBADOKDEN;
class KFLGFDDDOPJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KFLGFDDDOPJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7F0600)
#define KFLGFDDDOPJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7F0A60)
#define KFLGFDDDOPJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7F00B0)
#define KFLGFDDDOPJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7F0030)
#define KFLGFDDDOPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7F0020)
#define KFLGFDDDOPJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7F0300)
#define KFLGFDDDOPJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7F0180)
#define KFLGFDDDOPJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7F0150)
#define KFLGFDDDOPJ_FOOCLOOPEEI_OFFSET UNITYSDK_OFFSET(0x1E7F0160)
#define KFLGFDDDOPJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7F0480)
#define KFLGFDDDOPJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7EFFE0)
#define KFLGFDDDOPJ_LCOLNKHHGMG_OFFSET UNITYSDK_OFFSET(0x1E7F0170)
#define KFLGFDDDOPJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7F0810)
#define KFLGFDDDOPJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7F06D0)
#define KFLGFDDDOPJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7F0140)
#define KFLGFDDDOPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7F0010)
#define KFLGFDDDOPJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7F04C0)
#define KFLGFDDDOPJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7F0520)

inline static constexpr unsigned int KFLGFDDDOPJ_TypeDefinitionIndex = 28949;

	class KFLGFDDDOPJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::EGLBADOKDEN* MCBAIONIKHA; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KFLGFDDDOPJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KFLGFDDDOPJ*>**)UnitySDK::FromName("", "KFLGFDDDOPJ")->GetStaticField(0x13150);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object OHFNOGFBAAE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLGFDDDOPJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KFLGFDDDOPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFLGFDDDOPJ*))((::PBYTE)hIl2Cpp + KFLGFDDDOPJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFLGFDDDOPJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KFLGFDDDOPJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KFLGFDDDOPJ*>*(*)())((::PBYTE)hIl2Cpp + KFLGFDDDOPJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLGFDDDOPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KFLGFDDDOPJ* Clone()
		{
			return ((::KFLGFDDDOPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLGFDDDOPJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLGFDDDOPJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFLGFDDDOPJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::EGLBADOKDEN* FOOCLOOPEEI()
		{
			return ((::EGLBADOKDEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLGFDDDOPJ_FOOCLOOPEEI_OFFSET))(this);
		}

		::System::Void LCOLNKHHGMG(::EGLBADOKDEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGLBADOKDEN*))((::PBYTE)hIl2Cpp + KFLGFDDDOPJ_LCOLNKHHGMG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFLGFDDDOPJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KFLGFDDDOPJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KFLGFDDDOPJ*))((::PBYTE)hIl2Cpp + KFLGFDDDOPJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLGFDDDOPJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLGFDDDOPJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KFLGFDDDOPJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLGFDDDOPJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KFLGFDDDOPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFLGFDDDOPJ*))((::PBYTE)hIl2Cpp + KFLGFDDDOPJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KFLGFDDDOPJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
