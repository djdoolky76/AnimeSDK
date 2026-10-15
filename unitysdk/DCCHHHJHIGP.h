#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class DCEHAGKAHFE;
namespace UnityEngine::UI { class Text; }

#define DCCHHHJHIGP_CTOR_OFFSET UNITYSDK_OFFSET(0xE2403F0)
#define DCCHHHJHIGP_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xE240090)
#define DCCHHHJHIGP_DMKGFDKMPPP_OFFSET UNITYSDK_OFFSET(0xE2401C0)
#define DCCHHHJHIGP_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xE240120)
#define DCCHHHJHIGP_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xE2402E0)
#define DCCHHHJHIGP_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xE240330)
#define DCCHHHJHIGP__ONBIND_OFFSET UNITYSDK_OFFSET(0xE240030)
#define DCCHHHJHIGP__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xE240240)
#define DCCHHHJHIGP__ONTICK_OFFSET UNITYSDK_OFFSET(0xE240280)

	class DCCHHHJHIGP : public ::FMPCODLIOLG
	{
	public:
		::DCEHAGKAHFE* EJCGHJIJMEN; // 0x60
		::UnityEngine::UI::Text* CCIIJPPMHNB; // 0x68
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCHHHJHIGP_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCHHHJHIGP__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + DCCHHHJHIGP_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCHHHJHIGP_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCHHHJHIGP__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DCCHHHJHIGP__ONTICK_OFFSET))(this, a1);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCCHHHJHIGP_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE(::DCEHAGKAHFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCEHAGKAHFE*))((::PBYTE)hIl2Cpp + DCCHHHJHIGP_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void DMKGFDKMPPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCHHHJHIGP_DMKGFDKMPPP_OFFSET))(this);
		}

	};
