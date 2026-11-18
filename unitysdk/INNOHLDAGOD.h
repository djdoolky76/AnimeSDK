#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMJLDEINKGF.h"
#include "unitysdk/LJNIABBNPAN.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BAEDBIJINGO;
namespace MoleMole::Audio { class MonoSoundEmitterCustom; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define INNOHLDAGOD_ACHKLOGENDL_OFFSET UNITYSDK_OFFSET(0x13825B80)
#define INNOHLDAGOD_AFNAIEAPPLL_OFFSET UNITYSDK_OFFSET(0x13823B30)
#define INNOHLDAGOD_APPLYSYNCTOWWISE_OFFSET UNITYSDK_OFFSET(0x13823FD0)
#define INNOHLDAGOD_CIOOJOPIGEG_OFFSET UNITYSDK_OFFSET(0x13824650)
#define INNOHLDAGOD_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x138253E0)
#define INNOHLDAGOD_COMPUTESYNC_OFFSET UNITYSDK_OFFSET(0x13823AA0)
#define INNOHLDAGOD_DEBHHDDDAFM_OFFSET UNITYSDK_OFFSET(0x13824480)
#define INNOHLDAGOD_EMAHMBEMPKK_OFFSET UNITYSDK_OFFSET(0x13824750)
#define INNOHLDAGOD_GAMBGJNDECF_OFFSET UNITYSDK_OFFSET(0x13824D40)
#define INNOHLDAGOD_HCNJGKELGCM_OFFSET UNITYSDK_OFFSET(0x138248E0)
#define INNOHLDAGOD_INIT_OFFSET UNITYSDK_OFFSET(0x13824400)
#define INNOHLDAGOD_LPHAEPLMADI_OFFSET UNITYSDK_OFFSET(0x13823DD0)
#define INNOHLDAGOD_MMMEPDGBOGK_OFFSET UNITYSDK_OFFSET(0x13824700)
#define INNOHLDAGOD_ONSYNC_OFFSET UNITYSDK_OFFSET(0x13824170)
#define INNOHLDAGOD_PEEHKFPGKIN_OFFSET UNITYSDK_OFFSET(0x13825530)
#define INNOHLDAGOD_POLISH_OFFSET UNITYSDK_OFFSET(0x13824230)
#define INNOHLDAGOD_RECYCLE_OFFSET UNITYSDK_OFFSET(0x138242D0)
#define INNOHLDAGOD__CTOR_OFFSET UNITYSDK_OFFSET(0x13824460)

inline static constexpr unsigned int INNOHLDAGOD_TypeDefinitionIndex = 40759;

class INNOHLDAGOD : public ::System::Object
{
public:
	::UnityEngine::Transform* JEPMHPADDGC; // 0x10
	::UnityEngine::Transform* GKBJOPJKCLB; // 0x18
	::System::Action_2<::System::UInt32, ::UnityEngine::GameObject*>* DLDJIOIOBFK; // 0x20
	::MoleMole::Audio::MonoSoundEmitterCustom* DJFAGGLBNDG; // 0x28
	::System::Int32 KNCLLKLLMPM; // 0x30
	::UnityEngine::Vector3 NCOOABFIOPK; // 0x34
	::EMJLDEINKGF KKMENMCMMBN; // 0x40
	::UnityEngine::Vector3 BOFDACBAFCI; // 0x44
	::LJNIABBNPAN HOAPCHEKPJK; // 0x50
	::System::UInt32 BKLGNCBNEGM; // 0x54
	::System::Single JAAMENDGIGF; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INNOHLDAGOD__CTOR_OFFSET))(this);
	}

	::System::Void ComputeSync(::BAEDBIJINGO* MAHAOAIGPEH, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*, ::System::Single))((::PBYTE)hIl2Cpp + INNOHLDAGOD_COMPUTESYNC_OFFSET))(this, MAHAOAIGPEH, PMNLNNGEIFM);
	}

	::System::Void ApplySyncToWwise(::BAEDBIJINGO* MAHAOAIGPEH)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*))((::PBYTE)hIl2Cpp + INNOHLDAGOD_APPLYSYNCTOWWISE_OFFSET))(this, MAHAOAIGPEH);
	}

	::System::Void OnSync(::BAEDBIJINGO* MAHAOAIGPEH, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*, ::System::Single))((::PBYTE)hIl2Cpp + INNOHLDAGOD_ONSYNC_OFFSET))(this, MAHAOAIGPEH, PMNLNNGEIFM);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INNOHLDAGOD_POLISH_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INNOHLDAGOD_RECYCLE_OFFSET))(this);
	}

	::System::Void Init(::BAEDBIJINGO* MAHAOAIGPEH)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*))((::PBYTE)hIl2Cpp + INNOHLDAGOD_INIT_OFFSET))(this, MAHAOAIGPEH);
	}

	::UnityEngine::GameObject* DEBHHDDDAFM()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + INNOHLDAGOD_DEBHHDDDAFM_OFFSET))(this);
	}

	::System::Void LPHAEPLMADI(::BAEDBIJINGO* MAHAOAIGPEH)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*))((::PBYTE)hIl2Cpp + INNOHLDAGOD_LPHAEPLMADI_OFFSET))(this, MAHAOAIGPEH);
	}

	::System::Boolean CIOOJOPIGEG(::BAEDBIJINGO* MAHAOAIGPEH)
	{
		return ((::System::Boolean(*)(::PVOID, ::BAEDBIJINGO*))((::PBYTE)hIl2Cpp + INNOHLDAGOD_CIOOJOPIGEG_OFFSET))(this, MAHAOAIGPEH);
	}

	::UnityEngine::Transform* HCNJGKELGCM(::UnityEngine::GameObject* FEHBADDDOGM)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + INNOHLDAGOD_HCNJGKELGCM_OFFSET))(this, FEHBADDDOGM);
	}

	::System::Void AFNAIEAPPLL(::BAEDBIJINGO* MAHAOAIGPEH)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*))((::PBYTE)hIl2Cpp + INNOHLDAGOD_AFNAIEAPPLL_OFFSET))(this, MAHAOAIGPEH);
	}

	static ::INNOHLDAGOD* COKNIICCODC(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::INNOHLDAGOD*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + INNOHLDAGOD_COKNIICCODC_OFFSET))(BKLGNCBNEGM);
	}

	::System::Void PEEHKFPGKIN(::UnityEngine::Transform* CHPGCOHOAOD, ::UnityEngine::Vector3& OHOGDOMNHNK, ::UnityEngine::Vector3& CFJFMMGPGKE, ::UnityEngine::Vector3& KBHFBLJPFJH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + INNOHLDAGOD_PEEHKFPGKIN_OFFSET))(this, CHPGCOHOAOD, OHOGDOMNHNK, CFJFMMGPGKE, KBHFBLJPFJH);
	}

	::UnityEngine::Transform* MMMEPDGBOGK()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + INNOHLDAGOD_MMMEPDGBOGK_OFFSET))(this);
	}

	::System::Void EMAHMBEMPKK(::BAEDBIJINGO* MAHAOAIGPEH, ::UnityEngine::Transform* CHPGCOHOAOD)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + INNOHLDAGOD_EMAHMBEMPKK_OFFSET))(this, MAHAOAIGPEH, CHPGCOHOAOD);
	}

	::System::Void GAMBGJNDECF(::UnityEngine::GameObject* FEHBADDDOGM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + INNOHLDAGOD_GAMBGJNDECF_OFFSET))(this, FEHBADDDOGM);
	}

	::System::Void ACHKLOGENDL(::System::Action_2<::System::UInt32, ::UnityEngine::GameObject*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::UInt32, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + INNOHLDAGOD_ACHKLOGENDL_OFFSET))(this, EJGDHCIBCJH);
	}
};
