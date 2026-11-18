#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAKEILPBEED_JBFAPOBCGMJ.h"
#include "unitysdk/CAKEILPBEED_NMIJNLELGPB.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class CAKEILPBEED;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class SpriteRenderer; }

#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_ABDLEONNPAJ_OFFSET UNITYSDK_OFFSET(0x1EB6EC00)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_BUILDLAYOUT_OFFSET UNITYSDK_OFFSET(0x1EB6EF30)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_DOJHAHIJEKC_OFFSET UNITYSDK_OFFSET(0x1EB6F4E0)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_FLUSH_OFFSET UNITYSDK_OFFSET(0x1EB6F490)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_GBELMIJHGNO_OFFSET UNITYSDK_OFFSET(0x1EB6F9B0)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_INITDATA_OFFSET UNITYSDK_OFFSET(0x1EB6EB30)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_INIT_OFFSET UNITYSDK_OFFSET(0x1EB6EA80)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_RELEASE_OFFSET UNITYSDK_OFFSET(0x1EB6EAD0)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_SETEXCLAMATIONMARK_OFFSET UNITYSDK_OFFSET(0x1EB6F220)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_SETGLODMARK_OFFSET UNITYSDK_OFFSET(0x1EB6F160)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_SETNUM_OFFSET UNITYSDK_OFFSET(0x1EB6EB80)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_SETPROPSPRITE_OFFSET UNITYSDK_OFFSET(0x1EB6F2E0)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_SETSYMBOL_OFFSET UNITYSDK_OFFSET(0x1EB6F010)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6F830)

namespace MoleMole::Arcade::CompanionProject::Client
{
	inline static constexpr unsigned int CpNumTipsBehaviour_TypeDefinitionIndex = 96470;

	class CpNumTipsBehaviour : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::SpriteRenderer*>* numObjs; // 0x18
		::Il2CppArray<::UnityEngine::SpriteRenderer*>* symbols; // 0x20
		::UnityEngine::SpriteRenderer* exclamationMark; // 0x28
		::UnityEngine::SpriteRenderer* goldMark; // 0x30
		::UnityEngine::SpriteRenderer* propSprite; // 0x38
		::System::Boolean CMGIBNNNNOB; // 0x40
		::System::Byte _padding0[0x3];
		::System::Int32 FHGGICHEBGI; // 0x44
		::System::Boolean KOEJEJMFJJF; // 0x48
		::System::Boolean BAKIEEJOLFC; // 0x49
		::System::Boolean MLIMKMDCMPH; // 0x4A
		::System::Boolean KMIJCIPPKHG; // 0x4B
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::Stack_1<::System::Int32>* Nums; // 0x50
		::System::Int32 num; // 0x58
		::CAKEILPBEED_JBFAPOBCGMJ numType; // 0x5C
		::CAKEILPBEED* FHIOPFNMGDF; // 0x60
		::Il2CppArray<::System::Int32>* MCAEPBJDNAC; // 0x68
		::System::Single deltaWidth; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::MoleMole::Arcade::CompanionProject::Client::CpNumTipsBehaviour* Init(::CAKEILPBEED* FHIOPFNMGDF)
		{
			return ((::MoleMole::Arcade::CompanionProject::Client::CpNumTipsBehaviour*(*)(::PVOID, ::CAKEILPBEED*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_INIT_OFFSET))(this, FHIOPFNMGDF);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_RELEASE_OFFSET))(this);
		}

		::MoleMole::Arcade::CompanionProject::Client::CpNumTipsBehaviour* InitData()
		{
			return ((::MoleMole::Arcade::CompanionProject::Client::CpNumTipsBehaviour*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_INITDATA_OFFSET))(this);
		}

		::MoleMole::Arcade::CompanionProject::Client::CpNumTipsBehaviour* SetNum(::CAKEILPBEED_JBFAPOBCGMJ CPLIIBLMDAO, ::System::Int32 BIOGEIHKABE)
		{
			return ((::MoleMole::Arcade::CompanionProject::Client::CpNumTipsBehaviour*(*)(::PVOID, ::CAKEILPBEED_JBFAPOBCGMJ, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_SETNUM_OFFSET))(this, CPLIIBLMDAO, BIOGEIHKABE);
		}

		::System::Void BuildLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_BUILDLAYOUT_OFFSET))(this);
		}

		::MoleMole::Arcade::CompanionProject::Client::CpNumTipsBehaviour* SetSymbol(::CAKEILPBEED_NMIJNLELGPB PDDKHHMPGPA)
		{
			return ((::MoleMole::Arcade::CompanionProject::Client::CpNumTipsBehaviour*(*)(::PVOID, ::CAKEILPBEED_NMIJNLELGPB))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_SETSYMBOL_OFFSET))(this, PDDKHHMPGPA);
		}

		::MoleMole::Arcade::CompanionProject::Client::CpNumTipsBehaviour* SetGlodMark(::System::Boolean AMGAAHMANDM)
		{
			return ((::MoleMole::Arcade::CompanionProject::Client::CpNumTipsBehaviour*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_SETGLODMARK_OFFSET))(this, AMGAAHMANDM);
		}

		::MoleMole::Arcade::CompanionProject::Client::CpNumTipsBehaviour* SetExclamationMark(::System::Boolean AMGAAHMANDM)
		{
			return ((::MoleMole::Arcade::CompanionProject::Client::CpNumTipsBehaviour*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_SETEXCLAMATIONMARK_OFFSET))(this, AMGAAHMANDM);
		}

		::MoleMole::Arcade::CompanionProject::Client::CpNumTipsBehaviour* SetPropSprite(::System::String* AOOLNBKIHAG)
		{
			return ((::MoleMole::Arcade::CompanionProject::Client::CpNumTipsBehaviour*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_SETPROPSPRITE_OFFSET))(this, AOOLNBKIHAG);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_FLUSH_OFFSET))(this);
		}

		::System::Void ABDLEONNPAJ(::CAKEILPBEED_JBFAPOBCGMJ CPLIIBLMDAO, ::System::Int32 GELJOLCCNID)
		{
			return ((::System::Void(*)(::PVOID, ::CAKEILPBEED_JBFAPOBCGMJ, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_ABDLEONNPAJ_OFFSET))(this, CPLIIBLMDAO, GELJOLCCNID);
		}

		::UnityEngine::Sprite* GBELMIJHGNO(::CAKEILPBEED_JBFAPOBCGMJ CPLIIBLMDAO, ::System::Int32 GELJOLCCNID)
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID, ::CAKEILPBEED_JBFAPOBCGMJ, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_GBELMIJHGNO_OFFSET))(this, CPLIIBLMDAO, GELJOLCCNID);
		}

		::System::Void DOJHAHIJEKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_DOJHAHIJEKC_OFFSET))(this);
		}
	};
}
