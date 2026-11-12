#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJBEJEDHBFG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CJBEJEDHBFG_APPPOHDNCFL_OFFSET UNITYSDK_OFFSET(0x1F3AB730)
#define CJBEJEDHBFG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F3ABA90)
#define CJBEJEDHBFG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3ABD60)
#define CJBEJEDHBFG_CLONE_OFFSET UNITYSDK_OFFSET(0x1F3AB690)
#define CJBEJEDHBFG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F3AB660)
#define CJBEJEDHBFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3AB650)
#define CJBEJEDHBFG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F3AB850)
#define CJBEJEDHBFG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F3AB740)
#define CJBEJEDHBFG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F3AB920)
#define CJBEJEDHBFG_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0x1F3AB720)
#define CJBEJEDHBFG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F3AB5E0)
#define CJBEJEDHBFG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F3ABBE0)
#define CJBEJEDHBFG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F3ABBA0)
#define CJBEJEDHBFG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F3AB640)
#define CJBEJEDHBFG_PKFCDNFPPEK_OFFSET UNITYSDK_OFFSET(0x1F3AB710)
#define CJBEJEDHBFG_PLNCKLJOJME_OFFSET UNITYSDK_OFFSET(0x1F3AB700)
#define CJBEJEDHBFG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F3AB950)
#define CJBEJEDHBFG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F3AB9B0)

inline static constexpr unsigned int CJBEJEDHBFG_TypeDefinitionIndex = 30576;

	class CJBEJEDHBFG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LCOIIMGPOBE; // 0x18
		::System::UInt32 PPNELLDGNPC; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::CJBEJEDHBFG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CJBEJEDHBFG*>**)UnitySDK::FromName("", "CJBEJEDHBFG")->GetStaticField(0x12540);
		}

		// static const ::System::Object FMIPKDJBPDG; // 0x0
		// static const ::System::Object GLIJLPOGDAK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBEJEDHBFG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CJBEJEDHBFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJBEJEDHBFG*))((::PBYTE)hIl2Cpp + CJBEJEDHBFG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJBEJEDHBFG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CJBEJEDHBFG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CJBEJEDHBFG*>*(*)())((::PBYTE)hIl2Cpp + CJBEJEDHBFG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBEJEDHBFG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CJBEJEDHBFG* Clone()
		{
			return ((::CJBEJEDHBFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBEJEDHBFG_CLONE_OFFSET))(this);
		}

		::System::UInt32 PLNCKLJOJME()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBEJEDHBFG_PLNCKLJOJME_OFFSET))(this);
		}

		::System::Void PKFCDNFPPEK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CJBEJEDHBFG_PKFCDNFPPEK_OFFSET))(this, a1);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBEJEDHBFG_IIILLEPDBCJ_OFFSET))(this);
		}

		::System::Void APPPOHDNCFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CJBEJEDHBFG_APPPOHDNCFL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJBEJEDHBFG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CJBEJEDHBFG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CJBEJEDHBFG*))((::PBYTE)hIl2Cpp + CJBEJEDHBFG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBEJEDHBFG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBEJEDHBFG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CJBEJEDHBFG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBEJEDHBFG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CJBEJEDHBFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJBEJEDHBFG*))((::PBYTE)hIl2Cpp + CJBEJEDHBFG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CJBEJEDHBFG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
