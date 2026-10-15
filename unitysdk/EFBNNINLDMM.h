#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFBNNINLDMM;
class HLMNDLOMPKP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EFBNNINLDMM_BJDJHJKPFIJ_OFFSET UNITYSDK_OFFSET(0x1E28BFA0)
#define EFBNNINLDMM_BPPCGPMCOIK_OFFSET UNITYSDK_OFFSET(0x1E28BF90)
#define EFBNNINLDMM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E28C820)
#define EFBNNINLDMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E28CCD0)
#define EFBNNINLDMM_CIFBIMEKLLK_OFFSET UNITYSDK_OFFSET(0x1E28BFC0)
#define EFBNNINLDMM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E28BF30)
#define EFBNNINLDMM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E28BDC0)
#define EFBNNINLDMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E28BDB0)
#define EFBNNINLDMM_EHMENHLFAPH_OFFSET UNITYSDK_OFFSET(0x1E28BF80)
#define EFBNNINLDMM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E28C2A0)
#define EFBNNINLDMM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E28C020)
#define EFBNNINLDMM_FJFILCMBLAB_OFFSET UNITYSDK_OFFSET(0x1E28BFE0)
#define EFBNNINLDMM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E28C4E0)
#define EFBNNINLDMM_INIOHMMFKID_OFFSET UNITYSDK_OFFSET(0x1E28BFB0)
#define EFBNNINLDMM_JFLOIOOLCNL_OFFSET UNITYSDK_OFFSET(0x1E28C000)
#define EFBNNINLDMM_JJFFACNALGA_OFFSET UNITYSDK_OFFSET(0x1E28BFD0)
#define EFBNNINLDMM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E28BD40)
#define EFBNNINLDMM_KJNKODDIDPA_OFFSET UNITYSDK_OFFSET(0x1E28BFF0)
#define EFBNNINLDMM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E28CBB0)
#define EFBNNINLDMM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E28C9E0)
#define EFBNNINLDMM_NEPDCIFMMOF_OFFSET UNITYSDK_OFFSET(0x1E28C010)
#define EFBNNINLDMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E28BDA0)
#define EFBNNINLDMM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E28C5D0)
#define EFBNNINLDMM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E28C630)

inline static constexpr unsigned int EFBNNINLDMM_TypeDefinitionIndex = 25096;

	class EFBNNINLDMM : public ::System::Object
	{
	public:
		::HLMNDLOMPKP* IIOEKDKMKEO; // 0x10
		::HLMNDLOMPKP* HKMEBGMHIOL; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::HLMNDLOMPKP* CMKIINGALJM; // 0x28
		::System::UInt32 BKGNGLHBCGO; // 0x30
		::System::UInt32 IHFOMNKFFGD; // 0x34
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EFBNNINLDMM")->GetStaticField(0x44950);
		}

		// static const ::System::Object APECAJCFNIE; // 0x0
		// static const ::System::Object OKAHONFJHKO; // 0x0
		// static const ::System::Object CALIBBEGAMO; // 0x0
		// static const ::System::Object BBGGKMMEHEO; // 0x0
		// static const ::System::Object NOKIHBKKBII; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFBNNINLDMM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EFBNNINLDMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFBNNINLDMM*))((::PBYTE)hIl2Cpp + EFBNNINLDMM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFBNNINLDMM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EFBNNINLDMM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFBNNINLDMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EFBNNINLDMM* Clone()
		{
			return ((::EFBNNINLDMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFBNNINLDMM_CLONE_OFFSET))(this);
		}

		::HLMNDLOMPKP* EHMENHLFAPH()
		{
			return ((::HLMNDLOMPKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFBNNINLDMM_EHMENHLFAPH_OFFSET))(this);
		}

		::System::Void BPPCGPMCOIK(::HLMNDLOMPKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLMNDLOMPKP*))((::PBYTE)hIl2Cpp + EFBNNINLDMM_BPPCGPMCOIK_OFFSET))(this, a1);
		}

		::HLMNDLOMPKP* BJDJHJKPFIJ()
		{
			return ((::HLMNDLOMPKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFBNNINLDMM_BJDJHJKPFIJ_OFFSET))(this);
		}

		::System::Void INIOHMMFKID(::HLMNDLOMPKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLMNDLOMPKP*))((::PBYTE)hIl2Cpp + EFBNNINLDMM_INIOHMMFKID_OFFSET))(this, a1);
		}

		::HLMNDLOMPKP* CIFBIMEKLLK()
		{
			return ((::HLMNDLOMPKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFBNNINLDMM_CIFBIMEKLLK_OFFSET))(this);
		}

		::System::Void JJFFACNALGA(::HLMNDLOMPKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLMNDLOMPKP*))((::PBYTE)hIl2Cpp + EFBNNINLDMM_JJFFACNALGA_OFFSET))(this, a1);
		}

		::System::UInt32 FJFILCMBLAB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFBNNINLDMM_FJFILCMBLAB_OFFSET))(this);
		}

		::System::Void KJNKODDIDPA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EFBNNINLDMM_KJNKODDIDPA_OFFSET))(this, a1);
		}

		::System::UInt32 JFLOIOOLCNL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFBNNINLDMM_JFLOIOOLCNL_OFFSET))(this);
		}

		::System::Void NEPDCIFMMOF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EFBNNINLDMM_NEPDCIFMMOF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFBNNINLDMM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EFBNNINLDMM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EFBNNINLDMM*))((::PBYTE)hIl2Cpp + EFBNNINLDMM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFBNNINLDMM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFBNNINLDMM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EFBNNINLDMM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFBNNINLDMM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EFBNNINLDMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFBNNINLDMM*))((::PBYTE)hIl2Cpp + EFBNNINLDMM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EFBNNINLDMM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
