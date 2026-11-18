#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBangkovBagPageController_LocalBangkovItemInfo.h"
#include "unitysdk/System/Object.h"

class BMBDMMPKIHO;
class FAKLNMJEGOJ;
class FMHDMLBDIJC;
class IFOHGNLIAKH;
namespace System { class Action; }

#define BMBDMMPKIHO_EJBLEHGDJGM_BMGENGDJEMK_OFFSET UNITYSDK_OFFSET(0x18DA7CB0)
#define BMBDMMPKIHO_EJBLEHGDJGM_HBPBMGIHDNI_OFFSET UNITYSDK_OFFSET(0x18DA7EC0)
#define BMBDMMPKIHO_EJBLEHGDJGM_JMGEHNEFAEO_OFFSET UNITYSDK_OFFSET(0x18DA7E20)
#define BMBDMMPKIHO_EJBLEHGDJGM_KCDKLLHALFK_OFFSET UNITYSDK_OFFSET(0x18DA7E80)
#define BMBDMMPKIHO_EJBLEHGDJGM_LOCLEFJDIAB_OFFSET UNITYSDK_OFFSET(0x18DA7EB0)
#define BMBDMMPKIHO_EJBLEHGDJGM__CTOR_OFFSET UNITYSDK_OFFSET(0x18DA7CA0)

inline static constexpr unsigned int BMBDMMPKIHO_EJBLEHGDJGM_TypeDefinitionIndex = 65325;

class BMBDMMPKIHO_EJBLEHGDJGM : public ::System::Object
{
public:
	::FAKLNMJEGOJ* BGFIDJKBBFO; // 0x10
	::BMBDMMPKIHO* KLHPEBKNIFB; // 0x18
	::FMHDMLBDIJC* BLFMEHNGIPN; // 0x20
	::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo LCMCAPGFJLO; // 0x28
	::System::Action* MNMDKBDFAFE; // 0x40
	::System::Int32 MOGCGNJCNBM; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBDMMPKIHO_EJBLEHGDJGM__CTOR_OFFSET))(this);
	}

	::System::Void BMGENGDJEMK(::IFOHGNLIAKH* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + BMBDMMPKIHO_EJBLEHGDJGM_BMGENGDJEMK_OFFSET))(this, JOLDOMEIKEF);
	}

	::System::Object* JMGEHNEFAEO()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBDMMPKIHO_EJBLEHGDJGM_JMGEHNEFAEO_OFFSET))(this);
	}

	::System::Void KCDKLLHALFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBDMMPKIHO_EJBLEHGDJGM_KCDKLLHALFK_OFFSET))(this);
	}

	::System::Boolean LOCLEFJDIAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBDMMPKIHO_EJBLEHGDJGM_LOCLEFJDIAB_OFFSET))(this);
	}

	::System::Void HBPBMGIHDNI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBDMMPKIHO_EJBLEHGDJGM_HBPBMGIHDNI_OFFSET))(this);
	}
};
