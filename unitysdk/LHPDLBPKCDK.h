#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/StoryCharacterApperMode.h"
class KNKPLOGICFO;
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace System { class Nullable; }
namespace System { class String; }

#define LHPDLBPKCDK_AAMIJDHKAHM_OFFSET UNITYSDK_OFFSET(0xB6C06E0)
#define LHPDLBPKCDK_BJCIIEHOPJA_OFFSET UNITYSDK_OFFSET(0xB6C10B0)
#define LHPDLBPKCDK_CCGDEKNKNAL_OFFSET UNITYSDK_OFFSET(0xB6C0840)
#define LHPDLBPKCDK_CCTOR_OFFSET UNITYSDK_OFFSET(0xB6C1A50)
#define LHPDLBPKCDK_CEDENKDKOIN_OFFSET UNITYSDK_OFFSET(0xB6C0C40)
#define LHPDLBPKCDK_CTOR_OFFSET UNITYSDK_OFFSET(0xB6C0240)
#define LHPDLBPKCDK_DFPLEBABMEP_OFFSET UNITYSDK_OFFSET(0xB6C17E0)
#define LHPDLBPKCDK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6C0250)
#define LHPDLBPKCDK_DKAIBBLKHFE_OFFSET UNITYSDK_OFFSET(0xB6C1840)
#define LHPDLBPKCDK_ECNMIEOCDOF_OFFSET UNITYSDK_OFFSET(0xB6C0DC0)
#define LHPDLBPKCDK_HENMOFCIDBH_OFFSET UNITYSDK_OFFSET(0xB6C1510)
#define LHPDLBPKCDK_IFOMJFFJIPN_OFFSET UNITYSDK_OFFSET(0xB6C1890)
#define LHPDLBPKCDK_IGLHCONMKED_OFFSET UNITYSDK_OFFSET(0xB6C0B70)
#define LHPDLBPKCDK_JLKOFMDEBNI_OFFSET UNITYSDK_OFFSET(0xB6C0D40)
#define LHPDLBPKCDK_KCGDLLPKCHG_OFFSET UNITYSDK_OFFSET(0xB6C09C0)
#define LHPDLBPKCDK_KKLJFDFMFGO_OFFSET UNITYSDK_OFFSET(0xB6C08B0)
#define LHPDLBPKCDK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB6C0470)
#define LHPDLBPKCDK_LCOCBOHMMDF_OFFSET UNITYSDK_OFFSET(0xB6C0690)
#define LHPDLBPKCDK_LKNKLEKKJDE_OFFSET UNITYSDK_OFFSET(0xB6C0750)
#define LHPDLBPKCDK_MCECBHEAPOB_OFFSET UNITYSDK_OFFSET(0xB6C0970)
#define LHPDLBPKCDK_MHNAEEPPJKO_OFFSET UNITYSDK_OFFSET(0xB6C0B10)
#define LHPDLBPKCDK_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0xB6C0A40)
#define LHPDLBPKCDK_OGEEMBLIHAN_OFFSET UNITYSDK_OFFSET(0xB6C12B0)
#define LHPDLBPKCDK_PCFPLFPEIIM_OFFSET UNITYSDK_OFFSET(0xB6C1A40)
#define LHPDLBPKCDK_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB6C02A0)
#define LHPDLBPKCDK_TICK_OFFSET UNITYSDK_OFFSET(0xB6C03C0)
#define LHPDLBPKCDK___BEGINFADEIN_ONLYEFFECTMODE_B__16_0_OFFSET UNITYSDK_OFFSET(0xB6C1AA0)
#define LHPDLBPKCDK___BEGINFADEOUT_ONLYEFFECTMODE_B__17_0_OFFSET UNITYSDK_OFFSET(0xB6C1B50)

inline static constexpr unsigned int LHPDLBPKCDK_TypeDefinitionIndex = 57356;

	class LHPDLBPKCDK : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::String* DOGOJJCLMHF; // 0x18
		::KNKPLOGICFO* MODIMDALIKJ; // 0x20
		::System::String* LBFGLPNBLMA; // 0x28
		::RPG::GameCore::CharacterVisibleComponent* JAOPNEJFELA; // 0x30
		::System::Nullable* BHIBKPHAGLB; // 0x38
		::System::Boolean PGCLEPHIGCC; // 0x40
		::System::Boolean HOLOCCCIKBH; // 0x41
		::System::Nullable* HBAMPPPMFCH; // 0x42
		::System::Boolean AIGIIBHBKKG; // 0x44
		::System::Boolean ACABDKCCCAA; // 0x45
		::System::Boolean FBFNCOAAADC; // 0x46
		::System::Byte _padding0[0x1];
		::RPG::GameCore::StoryCharacterApperMode COLLBHBBHNJ; // 0x48
		::System::Single PFACLFMMOAE; // 0x4C
		static ::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>** StaticGet_EFOENFLOIMC()
		{
			return (::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>**)UnitySDK::FromName("", "LHPDLBPKCDK")->GetStaticField(0x5ED60);
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
