#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLJKHOCGNOO_FadeInOutState.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
class DBMDNNBIOAI;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginTimeRewind; }
namespace RPG::GameCore { class EffectConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TimeRewindEffConfig; }
namespace System { class String; }

#define CLJKHOCGNOO_AJKLODBHJNC_OFFSET UNITYSDK_OFFSET(0x1B17D540)
#define CLJKHOCGNOO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B17DC80)
#define CLJKHOCGNOO_CTOR_OFFSET UNITYSDK_OFFSET(0x1B17E620)
#define CLJKHOCGNOO_DJDEGKPNBAK_OFFSET UNITYSDK_OFFSET(0x1B17DA00)
#define CLJKHOCGNOO_ENJMMHDCAPH_OFFSET UNITYSDK_OFFSET(0x1B17E150)
#define CLJKHOCGNOO_HDOFEPFEOEB_OFFSET UNITYSDK_OFFSET(0x1B17DBF0)
#define CLJKHOCGNOO_IDECLIPOEJJ_OFFSET UNITYSDK_OFFSET(0x1B17D490)
#define CLJKHOCGNOO_IHKPOLCCPPL_OFFSET UNITYSDK_OFFSET(0x1B17D780)
#define CLJKHOCGNOO_IJEPAJIMDPA_OFFSET UNITYSDK_OFFSET(0x1B17DD10)
#define CLJKHOCGNOO_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1B17DC40)
#define CLJKHOCGNOO_KHNIAMEPLDC_OFFSET UNITYSDK_OFFSET(0x1B17D970)
#define CLJKHOCGNOO_MNKMIOIJPCH_OFFSET UNITYSDK_OFFSET(0x1B17D640)
#define CLJKHOCGNOO_MONODNDCLJI_OFFSET UNITYSDK_OFFSET(0x1B17D6D0)
#define CLJKHOCGNOO_NBPJBGADELL_OFFSET UNITYSDK_OFFSET(0x1B17E300)
#define CLJKHOCGNOO_NEADOLCLNOP_OFFSET UNITYSDK_OFFSET(0x1B17E4E0)
#define CLJKHOCGNOO_NEJDALLPIMG_OFFSET UNITYSDK_OFFSET(0x1B17E610)
#define CLJKHOCGNOO_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0x1B17D590)
#define CLJKHOCGNOO_PGJFLEDHEAD_OFFSET UNITYSDK_OFFSET(0x1B17E3E0)

inline static constexpr unsigned int CLJKHOCGNOO_TypeDefinitionIndex = 62180;

	class CLJKHOCGNOO : public ::System::Object
	{
	public:
		::RPG::GameCore::TimeRewindEffConfig* ICJLGDHCHDC; // 0x10
		::RPG::Client::MonoEffectPluginTimeRewind* ELCCBFJHDDK; // 0x18
		::RPG::Client::MonoEffect* HJBEGIDAMBP; // 0x20
		::RPG::GameCore::EffectConfig* JPDPMEIKJKG; // 0x28
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x30
		::DBMDNNBIOAI* CDAECNCKMJO; // 0x38
		::System::String* CBGBLLLCCOH; // 0x40
		::System::Boolean LLMLOGNFFCD; // 0x48
		::System::Boolean PFJBJLBHCFH; // 0x49
		::System::Byte _padding0[0x2];
		::System::Single HBDJCFFDGDD; // 0x4C
		::CLJKHOCGNOO_FadeInOutState JBGFIMKKNFP; // 0x50
		::RPG::GameCore::TimeRewindState PPNPFHEGGCI; // 0x54
		::System::Boolean MCAPIAKDMAA; // 0x58
		::System::Boolean ADDOOLCIPFD; // 0x59
		::System::Boolean BAPANJOFDFA; // 0x5A
		::System::Byte _padding1[0x1];
		::System::Single CNDJDPHMHNK; // 0x5C
		::System::Single KBDPMBDJIOF; // 0x60
		::System::Int32 ILKCHEDFFGE; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLJKHOCGNOO_CTOR_OFFSET))(this);
		}

		::System::Void IDECLIPOEJJ(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TimeRewindEffConfig* a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TimeRewindEffConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLJKHOCGNOO_IDECLIPOEJJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AJKLODBHJNC(::RPG::GameCore::TimeRewindState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + CLJKHOCGNOO_AJKLODBHJNC_OFFSET))(this, a1);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLJKHOCGNOO_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void MONODNDCLJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLJKHOCGNOO_MONODNDCLJI_OFFSET))(this);
		}

		::System::Void IHKPOLCCPPL(::System::Single a1, ::RPG::GameCore::TimeRewindState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + CLJKHOCGNOO_IHKPOLCCPPL_OFFSET))(this, a1, a2);
		}

		::System::Single HDOFEPFEOEB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLJKHOCGNOO_HDOFEPFEOEB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLJKHOCGNOO_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLJKHOCGNOO_CLEAR_OFFSET))(this);
		}

		::System::Void KHNIAMEPLDC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLJKHOCGNOO_KHNIAMEPLDC_OFFSET))(this, a1);
		}

		::System::Void DJDEGKPNBAK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLJKHOCGNOO_DJDEGKPNBAK_OFFSET))(this, a1);
		}

		::System::Void NBPJBGADELL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLJKHOCGNOO_NBPJBGADELL_OFFSET))(this);
		}

		::System::Void PGJFLEDHEAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLJKHOCGNOO_PGJFLEDHEAD_OFFSET))(this);
		}

		::System::Void IJEPAJIMDPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLJKHOCGNOO_IJEPAJIMDPA_OFFSET))(this);
		}

		::System::Void NEADOLCLNOP(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLJKHOCGNOO_NEADOLCLNOP_OFFSET))(this, a1, a2);
		}

		::System::Void ENJMMHDCAPH(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLJKHOCGNOO_ENJMMHDCAPH_OFFSET))(this, a1, a2);
		}

		::System::Void MNKMIOIJPCH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLJKHOCGNOO_MNKMIOIJPCH_OFFSET))(this, a1);
		}

		::System::Single NEJDALLPIMG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLJKHOCGNOO_NEJDALLPIMG_OFFSET))(this);
		}

	};
