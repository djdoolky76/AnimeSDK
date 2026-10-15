#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class CPFFEHHFKGE;
class EKFMIDBJDIA;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PeiPeiChallengeCheckPoint; }
namespace RPG::GameCore { class PeiPeiChallengeControllerInit; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MMBGPMCLKJO_AHKHHIOFACB_OFFSET UNITYSDK_OFFSET(0xB9B8550)
#define MMBGPMCLKJO_AONFDEMLFAC_OFFSET UNITYSDK_OFFSET(0xB9B86C0)
#define MMBGPMCLKJO_CTOR_OFFSET UNITYSDK_OFFSET(0xB9B73E0)
#define MMBGPMCLKJO_DGGMOMIOAKO_OFFSET UNITYSDK_OFFSET(0xB9B9210)
#define MMBGPMCLKJO_DHKNDMPPJLJ_OFFSET UNITYSDK_OFFSET(0xB9B89E0)
#define MMBGPMCLKJO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9B7640)
#define MMBGPMCLKJO_EHGGEDNFBJO_OFFSET UNITYSDK_OFFSET(0xB9B7C30)
#define MMBGPMCLKJO_FDDDGDGPIBG_OFFSET UNITYSDK_OFFSET(0xB9B9470)
#define MMBGPMCLKJO_GFJECHFJGMC_OFFSET UNITYSDK_OFFSET(0xB9B7F10)
#define MMBGPMCLKJO_GJMEFMDMPGG_OFFSET UNITYSDK_OFFSET(0xB9B8B50)
#define MMBGPMCLKJO_HJCEALPDAEF_OFFSET UNITYSDK_OFFSET(0xB9B8670)
#define MMBGPMCLKJO_HMHNPDIFGFC_OFFSET UNITYSDK_OFFSET(0xB9B7B10)
#define MMBGPMCLKJO_IPEDLNHOEGI_OFFSET UNITYSDK_OFFSET(0xB9B8310)
#define MMBGPMCLKJO_MAHCMDJILMG_OFFSET UNITYSDK_OFFSET(0xB9B7690)
#define MMBGPMCLKJO_MGHCNBHDNFG_OFFSET UNITYSDK_OFFSET(0xB9B8CC0)
#define MMBGPMCLKJO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9B79E0)
#define MMBGPMCLKJO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB9B89A0)
#define MMBGPMCLKJO_PGPIPEFDBLO_OFFSET UNITYSDK_OFFSET(0xB9B87B0)
#define MMBGPMCLKJO_TICK_OFFSET UNITYSDK_OFFSET(0xB9B7980)

inline static constexpr unsigned int MMBGPMCLKJO_TypeDefinitionIndex = 53063;

	class MMBGPMCLKJO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RuntimeGroupInfo* DMIJAIJDKNP; // 0x18
		::RPG::Client::AdventurePhase* BLAFNEBDBCH; // 0x20
		::RPG::GameCore::PeiPeiChallengeControllerInit* IGHAHBNLIJA; // 0x28
		::System::Collections::Generic::List_1<::CPFFEHHFKGE*>* DAAMLCOEBNG; // 0x30
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x38
		::System::Int32 KBDPMBDJIOF; // 0x40
		::System::Int32 INMLIMFILPE; // 0x44
		::System::Boolean BJIMNGNKDGD; // 0x48
		::System::Boolean EDGCMJOLMHL; // 0x49
		::System::Byte _padding0[0x2];
		::System::UInt32 PEEFHNHDBMF; // 0x4C
		// static const ::System::String* KOMBLLHAFDC; // 0x0
		// static const ::System::String* LBADBANPMMH; // 0x0
		// static const ::System::String* ACMHCFDKFDH; // 0x0
		// static const ::System::String* DEGKLJADFGL; // 0x0
		// static const ::System::String* DEMBDDHDGME; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PeiPeiChallengeControllerInit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PeiPeiChallengeControllerInit*))((::PBYTE)hIl2Cpp + MMBGPMCLKJO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBGPMCLKJO_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MMBGPMCLKJO_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBGPMCLKJO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void GFJECHFJGMC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MMBGPMCLKJO_GFJECHFJGMC_OFFSET))(this, a1);
		}

		::System::Void IPEDLNHOEGI(::RPG::GameCore::PeiPeiChallengeCheckPoint* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PeiPeiChallengeCheckPoint*, ::System::Boolean))((::PBYTE)hIl2Cpp + MMBGPMCLKJO_IPEDLNHOEGI_OFFSET))(this, a1, a2);
		}

		::System::Void HMHNPDIFGFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBGPMCLKJO_HMHNPDIFGFC_OFFSET))(this);
		}

		::System::Void EHGGEDNFBJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBGPMCLKJO_EHGGEDNFBJO_OFFSET))(this);
		}

		::System::Void MAHCMDJILMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBGPMCLKJO_MAHCMDJILMG_OFFSET))(this);
		}

		::System::Void AHKHHIOFACB(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + MMBGPMCLKJO_AHKHHIOFACB_OFFSET))(this, a1);
		}

		::System::Void AONFDEMLFAC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + MMBGPMCLKJO_AONFDEMLFAC_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBGPMCLKJO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void DHKNDMPPJLJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMBGPMCLKJO_DHKNDMPPJLJ_OFFSET))(this, a1);
		}

		::System::Void MGHCNBHDNFG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MMBGPMCLKJO_MGHCNBHDNFG_OFFSET))(this, a1);
		}

		::System::Void GJMEFMDMPGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBGPMCLKJO_GJMEFMDMPGG_OFFSET))(this);
		}

		::System::Void DGGMOMIOAKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBGPMCLKJO_DGGMOMIOAKO_OFFSET))(this);
		}

		::System::Void FDDDGDGPIBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBGPMCLKJO_FDDDGDGPIBG_OFFSET))(this);
		}

		::System::Void PGPIPEFDBLO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MMBGPMCLKJO_PGPIPEFDBLO_OFFSET))(this, a1);
		}

		::System::Void HJCEALPDAEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBGPMCLKJO_HJCEALPDAEF_OFFSET))(this);
		}

	};
