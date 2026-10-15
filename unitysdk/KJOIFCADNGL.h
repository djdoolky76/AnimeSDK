#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGAMMPGMCNI;
class KJOIFCADNGL;
class MJMGOBMOPDL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define KJOIFCADNGL_ADGLNFILOHI_OFFSET UNITYSDK_OFFSET(0x1E844D00)
#define KJOIFCADNGL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E845490)
#define KJOIFCADNGL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E845930)
#define KJOIFCADNGL_CIAHBHIGFCJ_OFFSET UNITYSDK_OFFSET(0x1E844D50)
#define KJOIFCADNGL_CIDMAHFLBHE_OFFSET UNITYSDK_OFFSET(0x1E844CF0)
#define KJOIFCADNGL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E844CB0)
#define KJOIFCADNGL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E844BB0)
#define KJOIFCADNGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E844BA0)
#define KJOIFCADNGL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E844DB0)
#define KJOIFCADNGL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E844D80)
#define KJOIFCADNGL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E844D30)
#define KJOIFCADNGL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E845090)
#define KJOIFCADNGL_IFCLENLDLJN_OFFSET UNITYSDK_OFFSET(0x1E844D60)
#define KJOIFCADNGL_IMFFKGEJOKK_OFFSET UNITYSDK_OFFSET(0x1E844CE0)
#define KJOIFCADNGL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E844B60)
#define KJOIFCADNGL_KLINCLPEAHO_OFFSET UNITYSDK_OFFSET(0x1E844D10)
#define KJOIFCADNGL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E845780)
#define KJOIFCADNGL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E845600)
#define KJOIFCADNGL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E844D20)
#define KJOIFCADNGL_OPIBIJGEHCA_OFFSET UNITYSDK_OFFSET(0x1E844D70)
#define KJOIFCADNGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E844B90)
#define KJOIFCADNGL_PDMDDFIKNEA_OFFSET UNITYSDK_OFFSET(0x1E844D40)
#define KJOIFCADNGL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E845240)
#define KJOIFCADNGL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8452A0)

inline static constexpr unsigned int KJOIFCADNGL_TypeDefinitionIndex = 33826;

	class KJOIFCADNGL : public ::System::Object
	{
	public:
		::Proto::ItemList* NOAOFCBCJCP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::MJMGOBMOPDL* FJHPOOAFPEA; // 0x20
		::Proto::ItemList* PAOBKLAAPFF; // 0x28
		::JGAMMPGMCNI* NLIJNNMCAAO; // 0x30
		::System::UInt32 NAEACGPKNNH; // 0x38
		static ::Google::Protobuf::MessageParser_1<::KJOIFCADNGL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KJOIFCADNGL*>**)UnitySDK::FromName("", "KJOIFCADNGL")->GetStaticField(0x1AF60);
		}

		// static const ::System::Object EJLJEAIFIFB; // 0x0
		// static const ::System::Object DMAFCIBFMPD; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EJEPJMEMPPE; // 0x0
		// static const ::System::Object BMAODCPEKNL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOIFCADNGL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KJOIFCADNGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJOIFCADNGL*))((::PBYTE)hIl2Cpp + KJOIFCADNGL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJOIFCADNGL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KJOIFCADNGL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KJOIFCADNGL*>*(*)())((::PBYTE)hIl2Cpp + KJOIFCADNGL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOIFCADNGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KJOIFCADNGL* Clone()
		{
			return ((::KJOIFCADNGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOIFCADNGL_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* IMFFKGEJOKK()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOIFCADNGL_IMFFKGEJOKK_OFFSET))(this);
		}

		::System::Void CIDMAHFLBHE(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + KJOIFCADNGL_CIDMAHFLBHE_OFFSET))(this, a1);
		}

		::JGAMMPGMCNI* ADGLNFILOHI()
		{
			return ((::JGAMMPGMCNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOIFCADNGL_ADGLNFILOHI_OFFSET))(this);
		}

		::System::Void KLINCLPEAHO(::JGAMMPGMCNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGAMMPGMCNI*))((::PBYTE)hIl2Cpp + KJOIFCADNGL_KLINCLPEAHO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOIFCADNGL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJOIFCADNGL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Proto::ItemList* PDMDDFIKNEA()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOIFCADNGL_PDMDDFIKNEA_OFFSET))(this);
		}

		::System::Void CIAHBHIGFCJ(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + KJOIFCADNGL_CIAHBHIGFCJ_OFFSET))(this, a1);
		}

		::MJMGOBMOPDL* IFCLENLDLJN()
		{
			return ((::MJMGOBMOPDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOIFCADNGL_IFCLENLDLJN_OFFSET))(this);
		}

		::System::Void OPIBIJGEHCA(::MJMGOBMOPDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJMGOBMOPDL*))((::PBYTE)hIl2Cpp + KJOIFCADNGL_OPIBIJGEHCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJOIFCADNGL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KJOIFCADNGL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KJOIFCADNGL*))((::PBYTE)hIl2Cpp + KJOIFCADNGL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOIFCADNGL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOIFCADNGL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KJOIFCADNGL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOIFCADNGL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KJOIFCADNGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJOIFCADNGL*))((::PBYTE)hIl2Cpp + KJOIFCADNGL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KJOIFCADNGL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
