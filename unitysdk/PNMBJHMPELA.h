#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLingFes/GameDayState.h"
#include "unitysdk/System/Object.h"
class FPPNANNOMPF;

#define PNMBJHMPELA_ACKHGCOMAMF_OFFSET UNITYSDK_OFFSET(0xC3466D0)
#define PNMBJHMPELA_CTOR_OFFSET UNITYSDK_OFFSET(0xC346380)
#define PNMBJHMPELA_DFEEMCKHOCA_OFFSET UNITYSDK_OFFSET(0xC346420)
#define PNMBJHMPELA_EFHPNLHLPIC_OFFSET UNITYSDK_OFFSET(0xC346570)
#define PNMBJHMPELA_GET_GAMEDAYCOUNT_OFFSET UNITYSDK_OFFSET(0xC3466E0)
#define PNMBJHMPELA_HOMELPCNOPB_OFFSET UNITYSDK_OFFSET(0xC346670)
#define PNMBJHMPELA_JBKDKGOPFFN_OFFSET UNITYSDK_OFFSET(0xC3466C0)
#define PNMBJHMPELA_JCOJDPIBFAA_OFFSET UNITYSDK_OFFSET(0xC346520)
#define PNMBJHMPELA_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xC3463E0)
#define PNMBJHMPELA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC346390)
#define PNMBJHMPELA_SET_GAMEDAYCOUNT_OFFSET UNITYSDK_OFFSET(0xC3466F0)

inline static constexpr unsigned int PNMBJHMPELA_TypeDefinitionIndex = 77737;

	class PNMBJHMPELA : public ::System::Object
	{
	public:
		::FPPNANNOMPF* MKELJFPAFAG; // 0x10
		::System::Int32 _GameDayCount_k__BackingField; // 0x18
		::RPG::Client::LittleGame::ChenLingFes::GameDayState KBAAANHJFNP; // 0x1C
		::System::Void _ctor(::FPPNANNOMPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPPNANNOMPF*))((::PBYTE)hIl2Cpp + PNMBJHMPELA_CTOR_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PNMBJHMPELA_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMBJHMPELA_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void DFEEMCKHOCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMBJHMPELA_DFEEMCKHOCA_OFFSET))(this);
		}

		::System::Void JCOJDPIBFAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMBJHMPELA_JCOJDPIBFAA_OFFSET))(this);
		}

		::System::Void EFHPNLHLPIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMBJHMPELA_EFHPNLHLPIC_OFFSET))(this);
		}

		::System::Void HOMELPCNOPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMBJHMPELA_HOMELPCNOPB_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ChenLingFes::GameDayState JBKDKGOPFFN()
		{
			return ((::RPG::Client::LittleGame::ChenLingFes::GameDayState(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMBJHMPELA_JBKDKGOPFFN_OFFSET))(this);
		}

		::System::Void ACKHGCOMAMF(::RPG::Client::LittleGame::ChenLingFes::GameDayState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLingFes::GameDayState))((::PBYTE)hIl2Cpp + PNMBJHMPELA_ACKHGCOMAMF_OFFSET))(this, a1);
		}

		::System::Int32 get_GameDayCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMBJHMPELA_GET_GAMEDAYCOUNT_OFFSET))(this);
		}

		::System::Void set_GameDayCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PNMBJHMPELA_SET_GAMEDAYCOUNT_OFFSET))(this, a1);
		}

	};
