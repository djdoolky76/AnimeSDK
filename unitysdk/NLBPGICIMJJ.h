#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLBPGICIMJJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NLBPGICIMJJ_AKNAIPIKDHM_OFFSET UNITYSDK_OFFSET(0x1EB35300)
#define NLBPGICIMJJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB356B0)
#define NLBPGICIMJJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB35A50)
#define NLBPGICIMJJ_CFKJHKAHLOG_OFFSET UNITYSDK_OFFSET(0x1EB35320)
#define NLBPGICIMJJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB35290)
#define NLBPGICIMJJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB35250)
#define NLBPGICIMJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB35240)
#define NLBPGICIMJJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB35420)
#define NLBPGICIMJJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB35340)
#define NLBPGICIMJJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB352F0)
#define NLBPGICIMJJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB354F0)
#define NLBPGICIMJJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB35200)
#define NLBPGICIMJJ_JMILPIHFEMD_OFFSET UNITYSDK_OFFSET(0x1EB35310)
#define NLBPGICIMJJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB35890)
#define NLBPGICIMJJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB35840)
#define NLBPGICIMJJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB352E0)
#define NLBPGICIMJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB35230)
#define NLBPGICIMJJ_POAKODAJCDG_OFFSET UNITYSDK_OFFSET(0x1EB35330)
#define NLBPGICIMJJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB35520)
#define NLBPGICIMJJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB35580)

inline static constexpr unsigned int NLBPGICIMJJ_TypeDefinitionIndex = 31227;

	class NLBPGICIMJJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HMJFFIJLINN; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		::System::UInt32 JFBFIKADIEK; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NLBPGICIMJJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NLBPGICIMJJ*>**)UnitySDK::FromName("", "NLBPGICIMJJ")->GetStaticField(0x69C20);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object MOKDJLMAKCE; // 0x0
		// static const ::System::Object CFOENLLMJLG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBPGICIMJJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NLBPGICIMJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLBPGICIMJJ*))((::PBYTE)hIl2Cpp + NLBPGICIMJJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLBPGICIMJJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NLBPGICIMJJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NLBPGICIMJJ*>*(*)())((::PBYTE)hIl2Cpp + NLBPGICIMJJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBPGICIMJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NLBPGICIMJJ* Clone()
		{
			return ((::NLBPGICIMJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBPGICIMJJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBPGICIMJJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NLBPGICIMJJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 AKNAIPIKDHM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBPGICIMJJ_AKNAIPIKDHM_OFFSET))(this);
		}

		::System::Void JMILPIHFEMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NLBPGICIMJJ_JMILPIHFEMD_OFFSET))(this, a1);
		}

		::System::UInt32 CFKJHKAHLOG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBPGICIMJJ_CFKJHKAHLOG_OFFSET))(this);
		}

		::System::Void POAKODAJCDG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NLBPGICIMJJ_POAKODAJCDG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLBPGICIMJJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NLBPGICIMJJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NLBPGICIMJJ*))((::PBYTE)hIl2Cpp + NLBPGICIMJJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBPGICIMJJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBPGICIMJJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NLBPGICIMJJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBPGICIMJJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NLBPGICIMJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLBPGICIMJJ*))((::PBYTE)hIl2Cpp + NLBPGICIMJJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NLBPGICIMJJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
