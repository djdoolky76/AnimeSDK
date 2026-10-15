#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFNIHDLFMCJ;
class NDLNIKCCALK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HFNIHDLFMCJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E542E40)
#define HFNIHDLFMCJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E543240)
#define HFNIHDLFMCJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5428D0)
#define HFNIHDLFMCJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E542840)
#define HFNIHDLFMCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E542830)
#define HFNIHDLFMCJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E542B30)
#define HFNIHDLFMCJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5429B0)
#define HFNIHDLFMCJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E5429A0)
#define HFNIHDLFMCJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E542CB0)
#define HFNIHDLFMCJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5427F0)
#define HFNIHDLFMCJ_JOPHMKPKAEB_OFFSET UNITYSDK_OFFSET(0x1E542970)
#define HFNIHDLFMCJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E543050)
#define HFNIHDLFMCJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E542F10)
#define HFNIHDLFMCJ_MHBFKCBOCEP_OFFSET UNITYSDK_OFFSET(0x1E542980)
#define HFNIHDLFMCJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E542990)
#define HFNIHDLFMCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E542820)
#define HFNIHDLFMCJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E542D00)
#define HFNIHDLFMCJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E542D60)

inline static constexpr unsigned int HFNIHDLFMCJ_TypeDefinitionIndex = 29688;

	class HFNIHDLFMCJ : public ::System::Object
	{
	public:
		::NDLNIKCCALK* ALANALGBFMC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HFNIHDLFMCJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HFNIHDLFMCJ*>**)UnitySDK::FromName("", "HFNIHDLFMCJ")->GetStaticField(0x30350);
		}

		// static const ::System::Object AJBHFMMPIBH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNIHDLFMCJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HFNIHDLFMCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFNIHDLFMCJ*))((::PBYTE)hIl2Cpp + HFNIHDLFMCJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFNIHDLFMCJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HFNIHDLFMCJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HFNIHDLFMCJ*>*(*)())((::PBYTE)hIl2Cpp + HFNIHDLFMCJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNIHDLFMCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HFNIHDLFMCJ* Clone()
		{
			return ((::HFNIHDLFMCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNIHDLFMCJ_CLONE_OFFSET))(this);
		}

		::NDLNIKCCALK* JOPHMKPKAEB()
		{
			return ((::NDLNIKCCALK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNIHDLFMCJ_JOPHMKPKAEB_OFFSET))(this);
		}

		::System::Void MHBFKCBOCEP(::NDLNIKCCALK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDLNIKCCALK*))((::PBYTE)hIl2Cpp + HFNIHDLFMCJ_MHBFKCBOCEP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNIHDLFMCJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HFNIHDLFMCJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFNIHDLFMCJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HFNIHDLFMCJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HFNIHDLFMCJ*))((::PBYTE)hIl2Cpp + HFNIHDLFMCJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNIHDLFMCJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNIHDLFMCJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HFNIHDLFMCJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNIHDLFMCJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HFNIHDLFMCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFNIHDLFMCJ*))((::PBYTE)hIl2Cpp + HFNIHDLFMCJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HFNIHDLFMCJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
