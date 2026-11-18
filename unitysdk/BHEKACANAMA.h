#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class MFBONNDCHCP;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define BHEKACANAMA_AFKJBINCCKJ_OFFSET UNITYSDK_OFFSET(0x18569E70)
#define BHEKACANAMA_EGCHPPEGODH_OFFSET UNITYSDK_OFFSET(0x18569E60)
#define BHEKACANAMA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18569F80)
#define BHEKACANAMA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18569E80)
#define BHEKACANAMA_KDEOCOHDDAH_OFFSET UNITYSDK_OFFSET(0x18569E40)
#define BHEKACANAMA_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x1856A330)
#define BHEKACANAMA_NINECCKMGBD_OFFSET UNITYSDK_OFFSET(0x18569E20)
#define BHEKACANAMA_OGLPJEAODDO_OFFSET UNITYSDK_OFFSET(0x18569E30)
#define BHEKACANAMA_OKAPEKHLLHB_OFFSET UNITYSDK_OFFSET(0x18569E50)
#define BHEKACANAMA_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x1856A4A0)
#define BHEKACANAMA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1856A230)
#define BHEKACANAMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1856A220)

inline static constexpr unsigned int BHEKACANAMA_TypeDefinitionIndex = 56270;

class BHEKACANAMA : public ::System::Object
{
public:
	static ::MFBONNDCHCP** StaticGet_FJHADAFGKIH()
	{
		return (::MFBONNDCHCP**)Il2CppClass::FromTypeDefinitionIndex(BHEKACANAMA_TypeDefinitionIndex)->GetStaticField(0x32960);
	}
	static ::MFBONNDCHCP** StaticGet_KJHJIKKMPDC()
	{
		return (::MFBONNDCHCP**)Il2CppClass::FromTypeDefinitionIndex(BHEKACANAMA_TypeDefinitionIndex)->GetStaticField(0x32968);
	}
	::System::String* _EJFGJNILPPC_k__BackingField; // 0x10
	::System::Boolean _EBADALFDHBM_k__BackingField; // 0x18
	::System::Boolean _DLGNJODMABF_k__BackingField; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEKACANAMA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHEKACANAMA__CCTOR_OFFSET))();
	}

	::System::Boolean NINECCKMGBD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEKACANAMA_NINECCKMGBD_OFFSET))(this);
	}

	::System::Void OGLPJEAODDO(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BHEKACANAMA_OGLPJEAODDO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* KDEOCOHDDAH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEKACANAMA_KDEOCOHDDAH_OFFSET))(this);
	}

	::System::Void OKAPEKHLLHB(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BHEKACANAMA_OKAPEKHLLHB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean EGCHPPEGODH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEKACANAMA_EGCHPPEGODH_OFFSET))(this);
	}

	::System::Void AFKJBINCCKJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BHEKACANAMA_AFKJBINCCKJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BHEKACANAMA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BHEKACANAMA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEKACANAMA_MKEFBLKCNKE_OFFSET))(this);
	}

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + BHEKACANAMA_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}
};
