#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define HFPPAMPPKOM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16CEDAD0)
#define HFPPAMPPKOM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16CEDA00)
#define HFPPAMPPKOM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16CED830)
#define HFPPAMPPKOM__CTOR_OFFSET UNITYSDK_OFFSET(0x16CEDAC0)

inline static constexpr unsigned int HFPPAMPPKOM_TypeDefinitionIndex = 74439;

class HFPPAMPPKOM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* JKKKCPGFHLC; // 0x18
	::UnityEngine::Transform* CKEKMDOEMPC; // 0x20
	::UnityEngine::Animation* CMCAKLMEKMP; // 0x28
	::LGINJIKKBJA* BKDDKDMILCA; // 0x30
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x38
	::UnityEngine::RectTransform* FBCCELIOCPK; // 0x40
	::UnityEngine::Transform* OCBNLOAGKNC; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPPAMPPKOM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HFPPAMPPKOM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HFPPAMPPKOM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPPAMPPKOM_KGEBDLGBGNM_OFFSET))(this);
	}
};
