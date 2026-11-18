#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MiniGame/TartarusHounds/Direction.h"
#include "unitysdk/MoleMole/MiniGame/TartarusHounds/HoundPlayerAddedTextureStatus.h"
#include "unitysdk/System/Object.h"

class GOIKJCHFIIO;
class MIKBKMMKEML;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class TextureSheetData; }
namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityGame; }
namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityPlayer; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class SpriteRenderer; }

#define PFKBCOJNNKF_AGHDFIDHBCA_OFFSET UNITYSDK_OFFSET(0x11976F40)
#define PFKBCOJNNKF_BIEJKLIFFBG_OFFSET UNITYSDK_OFFSET(0x11976EC0)
#define PFKBCOJNNKF_CCIHJONJDJJ_OFFSET UNITYSDK_OFFSET(0x11976D20)
#define PFKBCOJNNKF_DKACPADBENC_OFFSET UNITYSDK_OFFSET(0x11977040)
#define PFKBCOJNNKF_HOIALAGDOOG_OFFSET UNITYSDK_OFFSET(0x11977320)
#define PFKBCOJNNKF_JDDEONJOCBL_OFFSET UNITYSDK_OFFSET(0x11976E20)
#define PFKBCOJNNKF_JJFMPEMNADB_OFFSET UNITYSDK_OFFSET(0x11977210)
#define PFKBCOJNNKF_JJOIBJFPGDL_1_OFFSET UNITYSDK_OFFSET(0x11977090)
#define PFKBCOJNNKF_JJOIBJFPGDL_OFFSET UNITYSDK_OFFSET(0x11976A90)
#define PFKBCOJNNKF_JOFGGOFFMIP_OFFSET UNITYSDK_OFFSET(0x11976A20)
#define PFKBCOJNNKF_MOIMJMPGIMF_OFFSET UNITYSDK_OFFSET(0x11977280)
#define PFKBCOJNNKF_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x11977100)
#define PFKBCOJNNKF__CTOR_OFFSET UNITYSDK_OFFSET(0x119768B0)

inline static constexpr unsigned int PFKBCOJNNKF_TypeDefinitionIndex = 41957;

class PFKBCOJNNKF : public ::System::Object
{
public:
	::UnityEngine::GameObject* GCBOJBFDOJK; // 0x10
	::DG::Tweening::Tween* OHDNCOEKHOG; // 0x18
	::MoleMole::MiniGame::TartarusHounds::View::ViewEntityPlayer* MBGJJIOOJCM; // 0x20
	::UnityEngine::SpriteRenderer* MPCCAGODNJE; // 0x28
	::UnityEngine::MaterialPropertyBlock* EMOEPDGNHBF; // 0x30
	::MIKBKMMKEML* PDDFJJFPLIC; // 0x38
	::System::Action* MEEPNNAHPGJ; // 0x40
	::System::Collections::Generic::List_1<::System::String*>* ODGLFPOGBNL; // 0x48
	::MoleMole::MiniGame::TartarusHounds::HoundPlayerAddedTextureStatus AIPMPAGHGBG; // 0x50
	::System::Boolean NJMGNKGLEOK; // 0x54
	::System::Boolean EGBFGHNFADM; // 0x55
	::System::Byte _padding0[0x2];
	::System::Int32 DIBMGLGHCDD; // 0x58
	::MoleMole::MiniGame::TartarusHounds::HoundPlayerAddedTextureStatus JBAIHNHFCJE; // 0x5C
	::MoleMole::MiniGame::TartarusHounds::Direction JEKHFCLBCML; // 0x60

	::System::Void _ctor(::UnityEngine::GameObject* NJOAJLDJCCJ, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* IPNBLOIANBJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame*))((::PBYTE)hIl2Cpp + PFKBCOJNNKF__CTOR_OFFSET))(this, NJOAJLDJCCJ, IPNBLOIANBJ);
	}

	::System::Void JOFGGOFFMIP(::MoleMole::TextureSheetData* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TextureSheetData*))((::PBYTE)hIl2Cpp + PFKBCOJNNKF_JOFGGOFFMIP_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void JJOIBJFPGDL(::MoleMole::MiniGame::TartarusHounds::HoundPlayerAddedTextureStatus KKMENMCMMBN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::HoundPlayerAddedTextureStatus))((::PBYTE)hIl2Cpp + PFKBCOJNNKF_JJOIBJFPGDL_OFFSET))(this, KKMENMCMMBN);
	}

	::System::Void JDDEONJOCBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKBCOJNNKF_JDDEONJOCBL_OFFSET))(this);
	}

	::System::Void BIEJKLIFFBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKBCOJNNKF_BIEJKLIFFBG_OFFSET))(this);
	}

	::System::Void DKACPADBENC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKBCOJNNKF_DKACPADBENC_OFFSET))(this);
	}

	::System::Void AGHDFIDHBCA(::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PFKBCOJNNKF_AGHDFIDHBCA_OFFSET))(this, NPPMJEIPMFC);
	}

	::System::Void OKJCHFGIKBH(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PFKBCOJNNKF_OKJCHFGIKBH_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void JJFMPEMNADB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKBCOJNNKF_JJFMPEMNADB_OFFSET))(this);
	}

	::System::Void MOIMJMPGIMF(::GOIKJCHFIIO* FAEBGCMGKDB)
	{
		return ((::System::Void(*)(::PVOID, ::GOIKJCHFIIO*))((::PBYTE)hIl2Cpp + PFKBCOJNNKF_MOIMJMPGIMF_OFFSET))(this, FAEBGCMGKDB);
	}

	::System::Void CCIHJONJDJJ(::System::Collections::Generic::List_1<::System::String*>* DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + PFKBCOJNNKF_CCIHJONJDJJ_OFFSET))(this, DJLOKMMLFJC);
	}

	::System::Void JJOIBJFPGDL_1(::System::String* CBMDFGBGPCN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PFKBCOJNNKF_JJOIBJFPGDL_1_OFFSET))(this, CBMDFGBGPCN);
	}

	::System::Void HOIALAGDOOG(::MoleMole::TextureSheetData* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TextureSheetData*))((::PBYTE)hIl2Cpp + PFKBCOJNNKF_HOIALAGDOOG_OFFSET))(this, LJBPECKCCEA);
	}
};
