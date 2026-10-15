#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FGHOCILBFBP.h"
#include "unitysdk/System/Object.h"
class FBJMJBLCGNI;
class KHNBFDNKLHE;
class PKPICFPDHEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FBJMJBLCGNI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E336850)
#define FBJMJBLCGNI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E336C10)
#define FBJMJBLCGNI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3360D0)
#define FBJMJBLCGNI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E336030)
#define FBJMJBLCGNI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E336020)
#define FBJMJBLCGNI_EJDIMEGMAKG_OFFSET UNITYSDK_OFFSET(0x1E336180)
#define FBJMJBLCGNI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E336410)
#define FBJMJBLCGNI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3361E0)
#define FBJMJBLCGNI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E336640)
#define FBJMJBLCGNI_GOIACKBBPOD_OFFSET UNITYSDK_OFFSET(0x1E336190)
#define FBJMJBLCGNI_IPFDMFDOKHJ_OFFSET UNITYSDK_OFFSET(0x1E3361B0)
#define FBJMJBLCGNI_JIFPIGBJFEH_OFFSET UNITYSDK_OFFSET(0x1E3361C0)
#define FBJMJBLCGNI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E335FE0)
#define FBJMJBLCGNI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E336A40)
#define FBJMJBLCGNI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E336980)
#define FBJMJBLCGNI_MIILIPJBOKO_OFFSET UNITYSDK_OFFSET(0x1E3361D0)
#define FBJMJBLCGNI_NDGJGMEFMLH_OFFSET UNITYSDK_OFFSET(0x1E3361A0)
#define FBJMJBLCGNI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E336010)
#define FBJMJBLCGNI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E336690)
#define FBJMJBLCGNI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3366F0)

	class FBJMJBLCGNI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::PKPICFPDHEO* MNJNMPKLFAI; // 0x18
		::KHNBFDNKLHE* CHFNJJAMCCO; // 0x20
		::FGHOCILBFBP EMHBAOIIKLC; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FBJMJBLCGNI")->GetStaticField(0x59880);
		}

		// static const ::System::Object NINHOJDICNH; // 0x0
		// static const ::System::Object CJDOLCNNPKL; // 0x0
		// static const ::System::Object KBMGGGHELJP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJMJBLCGNI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FBJMJBLCGNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBJMJBLCGNI*))((::PBYTE)hIl2Cpp + FBJMJBLCGNI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBJMJBLCGNI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FBJMJBLCGNI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJMJBLCGNI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FBJMJBLCGNI* Clone()
		{
			return ((::FBJMJBLCGNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJMJBLCGNI_CLONE_OFFSET))(this);
		}

		::FGHOCILBFBP EJDIMEGMAKG()
		{
			return ((::FGHOCILBFBP(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJMJBLCGNI_EJDIMEGMAKG_OFFSET))(this);
		}

		::System::Void GOIACKBBPOD(::FGHOCILBFBP a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGHOCILBFBP))((::PBYTE)hIl2Cpp + FBJMJBLCGNI_GOIACKBBPOD_OFFSET))(this, a1);
		}

		::KHNBFDNKLHE* NDGJGMEFMLH()
		{
			return ((::KHNBFDNKLHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJMJBLCGNI_NDGJGMEFMLH_OFFSET))(this);
		}

		::System::Void IPFDMFDOKHJ(::KHNBFDNKLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + FBJMJBLCGNI_IPFDMFDOKHJ_OFFSET))(this, a1);
		}

		::PKPICFPDHEO* JIFPIGBJFEH()
		{
			return ((::PKPICFPDHEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJMJBLCGNI_JIFPIGBJFEH_OFFSET))(this);
		}

		::System::Void MIILIPJBOKO(::PKPICFPDHEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKPICFPDHEO*))((::PBYTE)hIl2Cpp + FBJMJBLCGNI_MIILIPJBOKO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBJMJBLCGNI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FBJMJBLCGNI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBJMJBLCGNI*))((::PBYTE)hIl2Cpp + FBJMJBLCGNI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJMJBLCGNI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJMJBLCGNI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FBJMJBLCGNI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJMJBLCGNI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FBJMJBLCGNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBJMJBLCGNI*))((::PBYTE)hIl2Cpp + FBJMJBLCGNI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FBJMJBLCGNI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
