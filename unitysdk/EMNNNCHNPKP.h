#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMNNNCHNPKP;
class JBCHHGDHKIG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EMNNNCHNPKP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x206DDFC0)
#define EMNNNCHNPKP_CCTOR_OFFSET UNITYSDK_OFFSET(0x206DE3D0)
#define EMNNNCHNPKP_CLONE_OFFSET UNITYSDK_OFFSET(0x206DD9B0)
#define EMNNNCHNPKP_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x206DDAC0)
#define EMNNNCHNPKP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x206DD910)
#define EMNNNCHNPKP_CTOR_OFFSET UNITYSDK_OFFSET(0x206DD900)
#define EMNNNCHNPKP_EONHEFPCCAJ_OFFSET UNITYSDK_OFFSET(0x206DDAB0)
#define EMNNNCHNPKP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x206DDC30)
#define EMNNNCHNPKP_EQUALS_OFFSET UNITYSDK_OFFSET(0x206DDB00)
#define EMNNNCHNPKP_GAIOMJHMJKJ_OFFSET UNITYSDK_OFFSET(0x206DDAE0)
#define EMNNNCHNPKP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x206DDDC0)
#define EMNNNCHNPKP_GPLCPLHKDNM_OFFSET UNITYSDK_OFFSET(0x206DDAA0)
#define EMNNNCHNPKP_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x206DDAD0)
#define EMNNNCHNPKP_IOJANECFHCD_OFFSET UNITYSDK_OFFSET(0x206DDAF0)
#define EMNNNCHNPKP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x206DD890)
#define EMNNNCHNPKP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x206DE200)
#define EMNNNCHNPKP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x206DE120)
#define EMNNNCHNPKP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x206DD8F0)
#define EMNNNCHNPKP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x206DDE20)
#define EMNNNCHNPKP_WRITETO_OFFSET UNITYSDK_OFFSET(0x206DDE80)

inline static constexpr unsigned int EMNNNCHNPKP_TypeDefinitionIndex = 29221;

	class EMNNNCHNPKP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::JBCHHGDHKIG* JDFDDMABKGL; // 0x18
		::System::UInt32 FDBGHKCJPMA; // 0x20
		::System::UInt32 KJAENGKDFJD; // 0x24
		static ::Google::Protobuf::MessageParser_1<::EMNNNCHNPKP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EMNNNCHNPKP*>**)UnitySDK::FromName("", "EMNNNCHNPKP")->GetStaticField(0x4A7F0);
		}

		// static const ::System::Object PAEMCFNIGNI; // 0x0
		// static const ::System::Object PIACMPBJOIK; // 0x0
		// static const ::System::Object KKMJAGKHOBC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMNNNCHNPKP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EMNNNCHNPKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMNNNCHNPKP*))((::PBYTE)hIl2Cpp + EMNNNCHNPKP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMNNNCHNPKP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EMNNNCHNPKP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EMNNNCHNPKP*>*(*)())((::PBYTE)hIl2Cpp + EMNNNCHNPKP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMNNNCHNPKP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EMNNNCHNPKP* Clone()
		{
			return ((::EMNNNCHNPKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMNNNCHNPKP_CLONE_OFFSET))(this);
		}

		::JBCHHGDHKIG* GPLCPLHKDNM()
		{
			return ((::JBCHHGDHKIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMNNNCHNPKP_GPLCPLHKDNM_OFFSET))(this);
		}

		::System::Void EONHEFPCCAJ(::JBCHHGDHKIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBCHHGDHKIG*))((::PBYTE)hIl2Cpp + EMNNNCHNPKP_EONHEFPCCAJ_OFFSET))(this, a1);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMNNNCHNPKP_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EMNNNCHNPKP_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::UInt32 GAIOMJHMJKJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMNNNCHNPKP_GAIOMJHMJKJ_OFFSET))(this);
		}

		::System::Void IOJANECFHCD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EMNNNCHNPKP_IOJANECFHCD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMNNNCHNPKP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EMNNNCHNPKP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EMNNNCHNPKP*))((::PBYTE)hIl2Cpp + EMNNNCHNPKP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMNNNCHNPKP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMNNNCHNPKP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EMNNNCHNPKP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMNNNCHNPKP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EMNNNCHNPKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMNNNCHNPKP*))((::PBYTE)hIl2Cpp + EMNNNCHNPKP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EMNNNCHNPKP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
