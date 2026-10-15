#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAIDGGGMBPJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IAIDGGGMBPJ_AEEBIHGADKE_OFFSET UNITYSDK_OFFSET(0x1E605110)
#define IAIDGGGMBPJ_BNMCFGMHKPO_OFFSET UNITYSDK_OFFSET(0x1E605140)
#define IAIDGGGMBPJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E605470)
#define IAIDGGGMBPJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E605740)
#define IAIDGGGMBPJ_CJLADKOKINH_OFFSET UNITYSDK_OFFSET(0x1E605120)
#define IAIDGGGMBPJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6050C0)
#define IAIDGGGMBPJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E605090)
#define IAIDGGGMBPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E605080)
#define IAIDGGGMBPJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E605230)
#define IAIDGGGMBPJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E605150)
#define IAIDGGGMBPJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E605300)
#define IAIDGGGMBPJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E605040)
#define IAIDGGGMBPJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6055C0)
#define IAIDGGGMBPJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E605580)
#define IAIDGGGMBPJ_OBLCIDGEPAA_OFFSET UNITYSDK_OFFSET(0x1E605130)
#define IAIDGGGMBPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E605070)
#define IAIDGGGMBPJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E605330)
#define IAIDGGGMBPJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E605390)

inline static constexpr unsigned int IAIDGGGMBPJ_TypeDefinitionIndex = 34500;

	class IAIDGGGMBPJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IFLFFLOAANI; // 0x18
		::System::UInt32 NAPEEFAEOCL; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IAIDGGGMBPJ")->GetStaticField(0x3F3B0);
		}

		// static const ::System::Object JCMBJGLDMDC; // 0x0
		// static const ::System::Object OFEBBAFFJJB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAIDGGGMBPJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IAIDGGGMBPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAIDGGGMBPJ*))((::PBYTE)hIl2Cpp + IAIDGGGMBPJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAIDGGGMBPJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IAIDGGGMBPJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAIDGGGMBPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IAIDGGGMBPJ* Clone()
		{
			return ((::IAIDGGGMBPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAIDGGGMBPJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 AEEBIHGADKE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAIDGGGMBPJ_AEEBIHGADKE_OFFSET))(this);
		}

		::System::Void CJLADKOKINH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IAIDGGGMBPJ_CJLADKOKINH_OFFSET))(this, a1);
		}

		::System::UInt32 OBLCIDGEPAA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAIDGGGMBPJ_OBLCIDGEPAA_OFFSET))(this);
		}

		::System::Void BNMCFGMHKPO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IAIDGGGMBPJ_BNMCFGMHKPO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAIDGGGMBPJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IAIDGGGMBPJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IAIDGGGMBPJ*))((::PBYTE)hIl2Cpp + IAIDGGGMBPJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAIDGGGMBPJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAIDGGGMBPJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IAIDGGGMBPJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAIDGGGMBPJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IAIDGGGMBPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAIDGGGMBPJ*))((::PBYTE)hIl2Cpp + IAIDGGGMBPJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IAIDGGGMBPJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
