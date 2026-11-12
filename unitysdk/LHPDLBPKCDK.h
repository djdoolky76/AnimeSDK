#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/StoryCharacterApperMode.h"
#include "unitysdk/System/Nullable_1.h"
class KNKPLOGICFO;
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace System { class String; }

#define LHPDLBPKCDK_AAMIJDHKAHM_OFFSET UNITYSDK_OFFSET(0xBF585A0)
#define LHPDLBPKCDK_BJCIIEHOPJA_OFFSET UNITYSDK_OFFSET(0xBF58F70)
#define LHPDLBPKCDK_CCGDEKNKNAL_OFFSET UNITYSDK_OFFSET(0xBF58700)
#define LHPDLBPKCDK_CCTOR_OFFSET UNITYSDK_OFFSET(0xBF59930)
#define LHPDLBPKCDK_CEDENKDKOIN_OFFSET UNITYSDK_OFFSET(0xBF58B00)
#define LHPDLBPKCDK_CTOR_OFFSET UNITYSDK_OFFSET(0xBF58110)
#define LHPDLBPKCDK_DFPLEBABMEP_OFFSET UNITYSDK_OFFSET(0xBF596C0)
#define LHPDLBPKCDK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF58120)
#define LHPDLBPKCDK_DKAIBBLKHFE_OFFSET UNITYSDK_OFFSET(0xBF59720)
#define LHPDLBPKCDK_ECNMIEOCDOF_OFFSET UNITYSDK_OFFSET(0xBF58C80)
#define LHPDLBPKCDK_HENMOFCIDBH_OFFSET UNITYSDK_OFFSET(0xBF593E0)
#define LHPDLBPKCDK_IFOMJFFJIPN_OFFSET UNITYSDK_OFFSET(0xBF59770)
#define LHPDLBPKCDK_IGLHCONMKED_OFFSET UNITYSDK_OFFSET(0xBF58A30)
#define LHPDLBPKCDK_JLKOFMDEBNI_OFFSET UNITYSDK_OFFSET(0xBF58C00)
#define LHPDLBPKCDK_KCGDLLPKCHG_OFFSET UNITYSDK_OFFSET(0xBF58880)
#define LHPDLBPKCDK_KKLJFDFMFGO_OFFSET UNITYSDK_OFFSET(0xBF58770)
#define LHPDLBPKCDK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBF58330)
#define LHPDLBPKCDK_LCOCBOHMMDF_OFFSET UNITYSDK_OFFSET(0xBF58550)
#define LHPDLBPKCDK_LKNKLEKKJDE_OFFSET UNITYSDK_OFFSET(0xBF58610)
#define LHPDLBPKCDK_MCECBHEAPOB_OFFSET UNITYSDK_OFFSET(0xBF58830)
#define LHPDLBPKCDK_MHNAEEPPJKO_OFFSET UNITYSDK_OFFSET(0xBF589D0)
#define LHPDLBPKCDK_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0xBF58900)
#define LHPDLBPKCDK_OGEEMBLIHAN_OFFSET UNITYSDK_OFFSET(0xBF59170)
#define LHPDLBPKCDK_PCFPLFPEIIM_OFFSET UNITYSDK_OFFSET(0xBF59920)
#define LHPDLBPKCDK_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xBF58170)
#define LHPDLBPKCDK_TICK_OFFSET UNITYSDK_OFFSET(0xBF58280)
#define LHPDLBPKCDK___BEGINFADEIN_ONLYEFFECTMODE_B__16_0_OFFSET UNITYSDK_OFFSET(0xBF59980)
#define LHPDLBPKCDK___BEGINFADEOUT_ONLYEFFECTMODE_B__17_0_OFFSET UNITYSDK_OFFSET(0xBF59A30)

inline static constexpr unsigned int LHPDLBPKCDK_TypeDefinitionIndex = 58584;

	class LHPDLBPKCDK : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::KNKPLOGICFO* MODIMDALIKJ; // 0x18
		::System::String* LBFGLPNBLMA; // 0x20
		::System::String* DOGOJJCLMHF; // 0x28
		::RPG::GameCore::CharacterVisibleComponent* JAOPNEJFELA; // 0x30
		::System::Nullable_1<::System::Single> BHIBKPHAGLB; // 0x38
		::System::Boolean ACABDKCCCAA; // 0x40
		::System::Boolean PGCLEPHIGCC; // 0x41
		::System::Nullable_1<::System::Boolean> HBAMPPPMFCH; // 0x42
		::System::Boolean FBFNCOAAADC; // 0x44
		::System::Boolean HOLOCCCIKBH; // 0x45
		::System::Boolean AIGIIBHBKKG; // 0x46
		::System::Byte _padding0[0x1];
		::RPG::GameCore::StoryCharacterApperMode COLLBHBBHNJ; // 0x48
		::System::Single PFACLFMMOAE; // 0x4C
		static ::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>** StaticGet_EFOENFLOIMC()
		{
			return (::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>**)UnitySDK::FromName("", "LHPDLBPKCDK")->GetStaticField(0x5F6F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPDLBPKCDK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHPDLBPKCDK_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPDLBPKCDK_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHPDLBPKCDK_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHPDLBPKCDK_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean AAMIJDHKAHM(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LHPDLBPKCDK_AAMIJDHKAHM_OFFSET))(this, a1, a2);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPDLBPKCDK_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void KKLJFDFMFGO(::RPG::GameCore::StoryCharacterApperMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StoryCharacterApperMode))((::PBYTE)hIl2Cpp + LHPDLBPKCDK_KKLJFDFMFGO_OFFSET))(this, a1);
		}

		::System::Void MCECBHEAPOB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LHPDLBPKCDK_MCECBHEAPOB_OFFSET))(this, a1);
		}

		::System::Void KCGDLLPKCHG(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + LHPDLBPKCDK_KCGDLLPKCHG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NHPDCPKMNAM(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LHPDLBPKCDK_NHPDCPKMNAM_OFFSET))(this, a1, a2);
		}

		::System::Void IGLHCONMKED(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHPDLBPKCDK_IGLHCONMKED_OFFSET))(this, a1);
		}

		::System::Void MHNAEEPPJKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPDLBPKCDK_MHNAEEPPJKO_OFFSET))(this);
		}

		::System::Void LCOCBOHMMDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPDLBPKCDK_LCOCBOHMMDF_OFFSET))(this);
		}

		::System::Void LKNKLEKKJDE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LHPDLBPKCDK_LKNKLEKKJDE_OFFSET))(this, a1);
		}

		::System::Void ECNMIEOCDOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPDLBPKCDK_ECNMIEOCDOF_OFFSET))(this);
		}

		::System::Void BJCIIEHOPJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPDLBPKCDK_BJCIIEHOPJA_OFFSET))(this);
		}

		::System::Void OGEEMBLIHAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPDLBPKCDK_OGEEMBLIHAN_OFFSET))(this);
		}

		::System::Void HENMOFCIDBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPDLBPKCDK_HENMOFCIDBH_OFFSET))(this);
		}

		::System::Void JLKOFMDEBNI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LHPDLBPKCDK_JLKOFMDEBNI_OFFSET))(this, a1);
		}

		::System::Void DFPLEBABMEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPDLBPKCDK_DFPLEBABMEP_OFFSET))(this);
		}

		::System::Void DKAIBBLKHFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPDLBPKCDK_DKAIBBLKHFE_OFFSET))(this);
		}

		::System::Void IFOMJFFJIPN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LHPDLBPKCDK_IFOMJFFJIPN_OFFSET))(this, a1);
		}

		::System::Void CEDENKDKOIN(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + LHPDLBPKCDK_CEDENKDKOIN_OFFSET))(this, a1, a2);
		}

		::System::Void CCGDEKNKNAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPDLBPKCDK_CCGDEKNKNAL_OFFSET))(this);
		}

		::System::Boolean PCFPLFPEIIM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPDLBPKCDK_PCFPLFPEIIM_OFFSET))(this);
		}

		::System::Void __BeginFadeIn_OnlyEffectMode_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPDLBPKCDK___BEGINFADEIN_ONLYEFFECTMODE_B__16_0_OFFSET))(this);
		}

		::System::Void __BeginFadeOut_OnlyEffectMode_b__17_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPDLBPKCDK___BEGINFADEOUT_ONLYEFFECTMODE_B__17_0_OFFSET))(this);
		}

	};
