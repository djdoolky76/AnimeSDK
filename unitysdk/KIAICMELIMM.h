#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIAICMELIMM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KIAICMELIMM_AGFIPOJGHDN_OFFSET UNITYSDK_OFFSET(0x1E8247C0)
#define KIAICMELIMM_BFOOAFMDHBM_OFFSET UNITYSDK_OFFSET(0x1E824790)
#define KIAICMELIMM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E824BD0)
#define KIAICMELIMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E824F00)
#define KIAICMELIMM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E824760)
#define KIAICMELIMM_COBILNKOENO_OFFSET UNITYSDK_OFFSET(0x1E8247A0)
#define KIAICMELIMM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8246E0)
#define KIAICMELIMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8246B0)
#define KIAICMELIMM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E824880)
#define KIAICMELIMM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E824800)
#define KIAICMELIMM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E824990)
#define KIAICMELIMM_HAMDHIAHDHI_OFFSET UNITYSDK_OFFSET(0x1E8247D0)
#define KIAICMELIMM_IHPIJBHBIDG_OFFSET UNITYSDK_OFFSET(0x1E8247E0)
#define KIAICMELIMM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E824670)
#define KIAICMELIMM_KDDELGJAMID_OFFSET UNITYSDK_OFFSET(0x1E8247F0)
#define KIAICMELIMM_KELLCEAPOKD_OFFSET UNITYSDK_OFFSET(0x1E8247B0)
#define KIAICMELIMM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E824E20)
#define KIAICMELIMM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E824DB0)
#define KIAICMELIMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8246A0)
#define KIAICMELIMM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8249E0)
#define KIAICMELIMM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E824A40)

inline static constexpr unsigned int KIAICMELIMM_TypeDefinitionIndex = 25421;

	class KIAICMELIMM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* ENOLKGJDFEL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 IJEAIEPKGPL; // 0x20
		::System::UInt32 BDIBDFMMILI; // 0x24
		::System::UInt32 GACHBCCIEGF; // 0x28
		static ::Google::Protobuf::MessageParser_1<::KIAICMELIMM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KIAICMELIMM*>**)UnitySDK::FromName("", "KIAICMELIMM")->GetStaticField(0x17660);
		}

		static ::System::Object** StaticGet_NBCLHNEJJGD()
		{
			return (::System::Object**)UnitySDK::FromName("", "KIAICMELIMM")->GetStaticField(0x17668);
		}

		// static const ::System::Object BCFDJOFGDKP; // 0x0
		// static const ::System::Object CILKFALNNHC; // 0x0
		// static const ::System::Object HMLDGLJOPLH; // 0x0
		// static const ::System::Object HCLANLHLDEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAICMELIMM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KIAICMELIMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIAICMELIMM*))((::PBYTE)hIl2Cpp + KIAICMELIMM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIAICMELIMM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KIAICMELIMM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KIAICMELIMM*>*(*)())((::PBYTE)hIl2Cpp + KIAICMELIMM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAICMELIMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KIAICMELIMM* Clone()
		{
			return ((::KIAICMELIMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAICMELIMM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* BFOOAFMDHBM()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAICMELIMM_BFOOAFMDHBM_OFFSET))(this);
		}

		::System::UInt32 COBILNKOENO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAICMELIMM_COBILNKOENO_OFFSET))(this);
		}

		::System::Void KELLCEAPOKD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIAICMELIMM_KELLCEAPOKD_OFFSET))(this, a1);
		}

		::System::UInt32 AGFIPOJGHDN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAICMELIMM_AGFIPOJGHDN_OFFSET))(this);
		}

		::System::Void HAMDHIAHDHI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIAICMELIMM_HAMDHIAHDHI_OFFSET))(this, a1);
		}

		::System::UInt32 IHPIJBHBIDG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAICMELIMM_IHPIJBHBIDG_OFFSET))(this);
		}

		::System::Void KDDELGJAMID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIAICMELIMM_KDDELGJAMID_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KIAICMELIMM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KIAICMELIMM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KIAICMELIMM*))((::PBYTE)hIl2Cpp + KIAICMELIMM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAICMELIMM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAICMELIMM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KIAICMELIMM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAICMELIMM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KIAICMELIMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIAICMELIMM*))((::PBYTE)hIl2Cpp + KIAICMELIMM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KIAICMELIMM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
