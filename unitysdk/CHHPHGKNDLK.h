#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANACIPLIMDE.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class TrainCakeCatchGameModule; }
namespace RPG::GameCore { class GameEntity; }

#define CHHPHGKNDLK_AAGOHCKGJCB_OFFSET UNITYSDK_OFFSET(0xCF44320)
#define CHHPHGKNDLK_CTOR_OFFSET UNITYSDK_OFFSET(0xCF43970)
#define CHHPHGKNDLK_DGKJHKFLGAL_OFFSET UNITYSDK_OFFSET(0xCF441C0)
#define CHHPHGKNDLK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF43CF0)
#define CHHPHGKNDLK_EOGDCKICMAD_OFFSET UNITYSDK_OFFSET(0xCF43A10)
#define CHHPHGKNDLK_HDPGAEFIMGA_OFFSET UNITYSDK_OFFSET(0xCF444D0)
#define CHHPHGKNDLK_JKCNJAGFNPK_OFFSET UNITYSDK_OFFSET(0xCF43E70)
#define CHHPHGKNDLK_KHCMJBHOOAI_OFFSET UNITYSDK_OFFSET(0xCF442A0)
#define CHHPHGKNDLK_KPIIDLAFHPM_OFFSET UNITYSDK_OFFSET(0xCF43E20)
#define CHHPHGKNDLK_MCMCLIBAHNE_OFFSET UNITYSDK_OFFSET(0xCF43D40)
#define CHHPHGKNDLK_NLDKHHIOEAC_OFFSET UNITYSDK_OFFSET(0xCF44140)
#define CHHPHGKNDLK_OFBKLDBLLCC_OFFSET UNITYSDK_OFFSET(0xCF43A60)
#define CHHPHGKNDLK_OHFLPJBGLIJ_OFFSET UNITYSDK_OFFSET(0xCF43DB0)

inline static constexpr unsigned int CHHPHGKNDLK_TypeDefinitionIndex = 60213;

	class CHHPHGKNDLK : public ::System::Object
	{
	public:
		::RPG::Client::TrainCakeCatchGameModule* HIFKHPKKLME; // 0x10
		::ANACIPLIMDE DILFKCJNMAP; // 0x18
		::System::UInt32 IMMBHNDAEJL; // 0x28
		::System::UInt32 MMJKFDNCPCA; // 0x2C
		::System::UInt32 LDMIPMABDGH; // 0x30
		::System::UInt32 EBHMCOPJMPB; // 0x34
		// static const ::System::String* GKIEEMKHMKD; // 0x0
		// static const ::System::String* GMPEOEMJNKJ; // 0x0
		// static const ::System::String* MNGCMKOMHNP; // 0x0
		::System::Void _ctor(::RPG::Client::TrainCakeCatchGameModule* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainCakeCatchGameModule*))((::PBYTE)hIl2Cpp + CHHPHGKNDLK_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHPHGKNDLK_DISPOSE_OFFSET))(this);
		}

		::System::Void MCMCLIBAHNE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CHHPHGKNDLK_MCMCLIBAHNE_OFFSET))(this, a1);
		}

		::System::Void OHFLPJBGLIJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CHHPHGKNDLK_OHFLPJBGLIJ_OFFSET))(this, a1);
		}

		::System::Void KPIIDLAFHPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHPHGKNDLK_KPIIDLAFHPM_OFFSET))(this);
		}

		::System::Void OFBKLDBLLCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHPHGKNDLK_OFBKLDBLLCC_OFFSET))(this);
		}

		::System::Void DGKJHKFLGAL(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CHHPHGKNDLK_DGKJHKFLGAL_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* NLDKHHIOEAC()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHPHGKNDLK_NLDKHHIOEAC_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* KHCMJBHOOAI()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHPHGKNDLK_KHCMJBHOOAI_OFFSET))(this);
		}

		::System::Void JKCNJAGFNPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHPHGKNDLK_JKCNJAGFNPK_OFFSET))(this);
		}

		::System::Void EOGDCKICMAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHPHGKNDLK_EOGDCKICMAD_OFFSET))(this);
		}

		::System::Void AAGOHCKGJCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHPHGKNDLK_AAGOHCKGJCB_OFFSET))(this);
		}

		::System::Void HDPGAEFIMGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHPHGKNDLK_HDPGAEFIMGA_OFFSET))(this);
		}

	};
