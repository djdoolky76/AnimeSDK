#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHOBPPAJKIL.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EAIOHODECAO;
namespace DG::Tweening { class Tweener; }
namespace System { class Action; }

#define EBJNDMPNDLA_AIEJOLCKMKM_OFFSET UNITYSDK_OFFSET(0x1EB6DA90)
#define EBJNDMPNDLA_AMMHDJHNGLB_OFFSET UNITYSDK_OFFSET(0x1EB6D570)
#define EBJNDMPNDLA_DOJHBPOBCED_OFFSET UNITYSDK_OFFSET(0x1EB6DBB0)
#define EBJNDMPNDLA_FILOJDOIKNF_OFFSET UNITYSDK_OFFSET(0x1EB6D580)
#define EBJNDMPNDLA_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1EB6D3D0)
#define EBJNDMPNDLA_KPHHMHJFKPD_OFFSET UNITYSDK_OFFSET(0x1EB6D780)
#define EBJNDMPNDLA_MKADIKHJOCG_OFFSET UNITYSDK_OFFSET(0x1EB6D470)
#define EBJNDMPNDLA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1EB6D380)
#define EBJNDMPNDLA_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1EB6DE70)
#define EBJNDMPNDLA_OKNLGGGFHPI_OFFSET UNITYSDK_OFFSET(0x1EB6D420)
#define EBJNDMPNDLA__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6D410)

inline static constexpr unsigned int EBJNDMPNDLA_TypeDefinitionIndex = 96463;

class EBJNDMPNDLA : public ::MHOBPPAJKIL
{
public:
	::DG::Tweening::Tweener* AFFLFMEJEPG; // 0x18
	::System::Single KBAIMHPBMKK; // 0x20
	::System::Boolean IELMHMBHBNI; // 0x24
	::System::Boolean JIMCKOGKJAL; // 0x25

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJNDMPNDLA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::EAIOHODECAO* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*))((::PBYTE)hIl2Cpp + EBJNDMPNDLA_OJENCMOGDKL_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJNDMPNDLA_KMMIPNMJILI_OFFSET))(this);
	}

	::System::Void OKNLGGGFHPI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJNDMPNDLA_OKNLGGGFHPI_OFFSET))(this);
	}

	static ::System::Boolean MKADIKHJOCG(::UnityEngine::Vector3 CKPGOKHECCH, ::System::Single BOGPAHGJOJK)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + EBJNDMPNDLA_MKADIKHJOCG_OFFSET))(CKPGOKHECCH, BOGPAHGJOJK);
	}

	::System::Boolean AMMHDJHNGLB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJNDMPNDLA_AMMHDJHNGLB_OFFSET))(this);
	}

	::UnityEngine::Vector3 FILOJDOIKNF(::UnityEngine::Vector3 IACKHFCLPJI)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EBJNDMPNDLA_FILOJDOIKNF_OFFSET))(this, IACKHFCLPJI);
	}

	::System::Void KPHHMHJFKPD(::UnityEngine::Vector3 IACKHFCLPJI, ::System::Single MDPPNMIPDMP, ::System::Boolean PAKOBHFGLEE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + EBJNDMPNDLA_KPHHMHJFKPD_OFFSET))(this, IACKHFCLPJI, MDPPNMIPDMP, PAKOBHFGLEE, IBNICCGMILF);
	}

	::System::Void DOJHBPOBCED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJNDMPNDLA_DOJHBPOBCED_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EBJNDMPNDLA_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void AIEJOLCKMKM(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EBJNDMPNDLA_AIEJOLCKMKM_OFFSET))(this, EGEGIMGMJHN);
	}
};
