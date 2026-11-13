#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
class FINNKPCHBDI;
namespace RPG::Client { class FakeDoubleScreenMonoPlugin; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define NABJELBABDI_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0x1BAE5800)
#define NABJELBABDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1BAE5900)
#define NABJELBABDI_EFANJEKNGIB_OFFSET UNITYSDK_OFFSET(0x1BAE3EE0)
#define NABJELBABDI_GGJHBNJNOOL_OFFSET UNITYSDK_OFFSET(0x1BAE43C0)
#define NABJELBABDI_IJBBEHCOPFL_OFFSET UNITYSDK_OFFSET(0x1BAE4BE0)
#define NABJELBABDI_INMBGCINONP_OFFSET UNITYSDK_OFFSET(0x1BAE4070)
#define NABJELBABDI_JJINILFDJOF_OFFSET UNITYSDK_OFFSET(0x1BAE4340)
#define NABJELBABDI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1BAE3DC0)
#define NABJELBABDI_LATETICK_OFFSET UNITYSDK_OFFSET(0x1BAE5840)
#define NABJELBABDI_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x1BAE57B0)
#define NABJELBABDI_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x1BAE3E60)
#define NABJELBABDI_PGCOBJCDAEM_OFFSET UNITYSDK_OFFSET(0x1BAE55E0)

inline static constexpr unsigned int NABJELBABDI_TypeDefinitionIndex = 72566;

	class NABJELBABDI : public ::RPG::Client::TABehaviorBase
	{
	public:
		::FINNKPCHBDI* MMCPIKPADMG; // 0x38
		::UnityEngine::MaterialPropertyBlock* BMCPFHADPKJ; // 0x40
		::FINNKPCHBDI* OABMEMEBAOK; // 0x48
		::System::Single KOOKCBLMKBK; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NABJELBABDI_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NABJELBABDI_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NABJELBABDI_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Boolean EFANJEKNGIB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NABJELBABDI_EFANJEKNGIB_OFFSET))(this);
		}

		::System::Void INMBGCINONP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NABJELBABDI_INMBGCINONP_OFFSET))(this);
		}

		::System::Void GGJHBNJNOOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NABJELBABDI_GGJHBNJNOOL_OFFSET))(this);
		}

		::System::Void IJBBEHCOPFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NABJELBABDI_IJBBEHCOPFL_OFFSET))(this);
		}

		::System::Void PGCOBJCDAEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NABJELBABDI_PGCOBJCDAEM_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NABJELBABDI_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NABJELBABDI_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NABJELBABDI_LATETICK_OFFSET))(this, a1);
		}

		::RPG::Client::FakeDoubleScreenMonoPlugin* JJINILFDJOF()
		{
			return ((::RPG::Client::FakeDoubleScreenMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + NABJELBABDI_JJINILFDJOF_OFFSET))(this);
		}

	};
