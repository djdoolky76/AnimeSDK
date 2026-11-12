#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class AJJBJLANLEA;
class FMPCODLIOLG;
class KOAOAKKCCPK;
class LNGGBHCLAIG;
namespace System { class Action; }

#define MPHOFLINMGF_CTOR_OFFSET UNITYSDK_OFFSET(0xC2FE0F0)
#define MPHOFLINMGF_FNFEMGIBECE_OFFSET UNITYSDK_OFFSET(0xC2FDEE0)
#define MPHOFLINMGF_GET_ATMOSPHERETYPE_OFFSET UNITYSDK_OFFSET(0xC2FE090)
#define MPHOFLINMGF_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC2FDDD0)
#define MPHOFLINMGF_OAAOHHINHPH_OFFSET UNITYSDK_OFFSET(0xC2FE0B0)
#define MPHOFLINMGF_SET_ATMOSPHERETYPE_OFFSET UNITYSDK_OFFSET(0xC2FE0A0)
#define MPHOFLINMGF__ONBIND_OFFSET UNITYSDK_OFFSET(0xC2FDA80)
#define MPHOFLINMGF__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xC2FD8E0)
#define MPHOFLINMGF__SETUPVIEW_B__4_0_OFFSET UNITYSDK_OFFSET(0xC2FE120)

inline static constexpr unsigned int MPHOFLINMGF_TypeDefinitionIndex = 74251;

	class MPHOFLINMGF : public ::FMPCODLIOLG
	{
	public:
		::KOAOAKKCCPK* CDMFHPLLFEC; // 0x60
		::AJJBJLANLEA* DNLAAFHMCHA; // 0x68
		::LNGGBHCLAIG* APPIHABBCGK; // 0x70
		::RPG::GameCore::ElationTimeAtmosphereType _AtmosphereType_k__BackingField; // 0x78
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPHOFLINMGF_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + MPHOFLINMGF__ONINITPARAMS_OFFSET))(this, a1);
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

		::System::Void _SetupView_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPHOFLINMGF__SETUPVIEW_B__4_0_OFFSET))(this);
		}

	};
