#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class ADPIJPHHJJF;
class FMPCODLIOLG;
class LNGGBHCLAIG;
namespace System { class Action; }

#define MPHOFLINMGF_CTOR_OFFSET UNITYSDK_OFFSET(0xBA3EF20)
#define MPHOFLINMGF_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xBA3E9B0)
#define MPHOFLINMGF_FNFEMGIBECE_OFFSET UNITYSDK_OFFSET(0xBA3EDD0)
#define MPHOFLINMGF_GET_ATMOSPHERETYPE_OFFSET UNITYSDK_OFFSET(0xBA3EEC0)
#define MPHOFLINMGF_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xBA3ECC0)
#define MPHOFLINMGF_OAAOHHINHPH_OFFSET UNITYSDK_OFFSET(0xBA3EEE0)
#define MPHOFLINMGF_SET_ATMOSPHERETYPE_OFFSET UNITYSDK_OFFSET(0xBA3EED0)
#define MPHOFLINMGF__ONBIND_OFFSET UNITYSDK_OFFSET(0xBA3EB10)
#define MPHOFLINMGF__SETUPVIEW_B__3_0_OFFSET UNITYSDK_OFFSET(0xBA3EF50)

inline static constexpr unsigned int MPHOFLINMGF_TypeDefinitionIndex = 72191;

	class MPHOFLINMGF : public ::FMPCODLIOLG
	{
	public:
		::ADPIJPHHJJF* DNLAAFHMCHA; // 0x60
		::LNGGBHCLAIG* APPIHABBCGK; // 0x68
		::RPG::GameCore::ElationTimeAtmosphereType _AtmosphereType_k__BackingField; // 0x70
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPHOFLINMGF_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + MPHOFLINMGF_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPHOFLINMGF__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPHOFLINMGF_NKPPGDENJAE_OFFSET))(this);
		}

		::System::Void FNFEMGIBECE(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MPHOFLINMGF_FNFEMGIBECE_OFFSET))(this, a1);
		}

		::RPG::GameCore::ElationTimeAtmosphereType get_AtmosphereType()
		{
			return ((::RPG::GameCore::ElationTimeAtmosphereType(*)(::PVOID))((::PBYTE)hIl2Cpp + MPHOFLINMGF_GET_ATMOSPHERETYPE_OFFSET))(this);
		}

		::System::Void set_AtmosphereType(::RPG::GameCore::ElationTimeAtmosphereType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElationTimeAtmosphereType))((::PBYTE)hIl2Cpp + MPHOFLINMGF_SET_ATMOSPHERETYPE_OFFSET))(this, a1);
		}

		::FMPCODLIOLG* OAAOHHINHPH()
		{
			return ((::FMPCODLIOLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPHOFLINMGF_OAAOHHINHPH_OFFSET))(this);
		}

		::System::Void _SetupView_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPHOFLINMGF__SETUPVIEW_B__3_0_OFFSET))(this);
		}

	};
