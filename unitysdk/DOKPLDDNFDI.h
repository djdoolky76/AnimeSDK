#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOKPLDDNFDI_RF_WindSkillComponent.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationFlag.h"
#include "unitysdk/System/Object.h"
class AEDGBKOJEFD;
class LNHACPACCKH;

#define DOKPLDDNFDI_BMDHFHPLEGH_OFFSET UNITYSDK_OFFSET(0x1C5CBF00)
#define DOKPLDDNFDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5CC3C0)
#define DOKPLDDNFDI_DGAKFOCLLNM_OFFSET UNITYSDK_OFFSET(0x1C5CBF90)
#define DOKPLDDNFDI_DGKLMAHCACK_OFFSET UNITYSDK_OFFSET(0x1C5CBF10)
#define DOKPLDDNFDI_DLIKFIDBHKA_OFFSET UNITYSDK_OFFSET(0x1C5CBE80)
#define DOKPLDDNFDI_FCHMADJPDOM_OFFSET UNITYSDK_OFFSET(0x1C5CC320)
#define DOKPLDDNFDI_IDPJOAGGGLM_OFFSET UNITYSDK_OFFSET(0x1C5CBF80)
#define DOKPLDDNFDI_JHAABPDOCJE_OFFSET UNITYSDK_OFFSET(0x1C5CBE90)
#define DOKPLDDNFDI_LBIHOLKGMIB_OFFSET UNITYSDK_OFFSET(0x1C5CBFE0)
#define DOKPLDDNFDI_NALIIADEEMO_OFFSET UNITYSDK_OFFSET(0x1C5CC2C0)
#define DOKPLDDNFDI_NBLPPFGNHHO_OFFSET UNITYSDK_OFFSET(0x1C5CC370)
#define DOKPLDDNFDI_NJKHGPCDAMI_OFFSET UNITYSDK_OFFSET(0x1C5CC180)
#define DOKPLDDNFDI_NOJIPMKAGON_OFFSET UNITYSDK_OFFSET(0x1C5CBE40)
#define DOKPLDDNFDI_PNJODACLLPH_OFFSET UNITYSDK_OFFSET(0x1C5CBE30)

inline static constexpr unsigned int DOKPLDDNFDI_TypeDefinitionIndex = 37103;

	class DOKPLDDNFDI : public ::System::Object
	{
	public:
		::System::Int32 MANBNDPOFEN; // 0x10
		::DOKPLDDNFDI_RF_WindSkillComponent HFKLFHBEDEM; // 0x14
		::System::Single AJKJAIFJNMC; // 0x18
		::System::Single DPHHEMEJECJ; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOKPLDDNFDI_CTOR_OFFSET))(this);
		}

		::System::Boolean PNJODACLLPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DOKPLDDNFDI_PNJODACLLPH_OFFSET))(this);
		}

		::System::Void NOJIPMKAGON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOKPLDDNFDI_NOJIPMKAGON_OFFSET))(this);
		}

		::System::Single DLIKFIDBHKA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DOKPLDDNFDI_DLIKFIDBHKA_OFFSET))(this);
		}

		::System::Void JHAABPDOCJE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DOKPLDDNFDI_JHAABPDOCJE_OFFSET))(this, a1);
		}

		::System::Single BMDHFHPLEGH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DOKPLDDNFDI_BMDHFHPLEGH_OFFSET))(this);
		}

		::System::Void DGKLMAHCACK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DOKPLDDNFDI_DGKLMAHCACK_OFFSET))(this, a1);
		}

		::System::Int32 IDPJOAGGGLM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOKPLDDNFDI_IDPJOAGGGLM_OFFSET))(this);
		}

		::System::Void DGAKFOCLLNM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DOKPLDDNFDI_DGAKFOCLLNM_OFFSET))(this, a1);
		}

		::System::Void LBIHOLKGMIB(::AEDGBKOJEFD* a1, ::RPG::Client::LittleGameShare::ReplicationFlag a2)
		{
			return ((::System::Void(*)(::PVOID, ::AEDGBKOJEFD*, ::RPG::Client::LittleGameShare::ReplicationFlag))((::PBYTE)hIl2Cpp + DOKPLDDNFDI_LBIHOLKGMIB_OFFSET))(this, a1, a2);
		}

		::System::Void NJKHGPCDAMI(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + DOKPLDDNFDI_NJKHGPCDAMI_OFFSET))(this, a1);
		}

		::System::Void NALIIADEEMO(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + DOKPLDDNFDI_NALIIADEEMO_OFFSET))(this, a1);
		}

		::System::Boolean FCHMADJPDOM(::DOKPLDDNFDI_RF_WindSkillComponent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DOKPLDDNFDI_RF_WindSkillComponent))((::PBYTE)hIl2Cpp + DOKPLDDNFDI_FCHMADJPDOM_OFFSET))(this, a1);
		}

		::System::Boolean NBLPPFGNHHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DOKPLDDNFDI_NBLPPFGNHHO_OFFSET))(this);
		}

	};
