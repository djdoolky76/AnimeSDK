#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/System/Object.h"
class BENBCNGOIPP_MHCCAKCGCEE;
class DEEJKBIMHAA;
class POEGKFEADIE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class RtDefenceStageBornPointInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BENBCNGOIPP_BHEFAIAKGAI_OFFSET UNITYSDK_OFFSET(0xB1570F0)
#define BENBCNGOIPP_BMBNGAPENLJ_OFFSET UNITYSDK_OFFSET(0xB1572A0)
#define BENBCNGOIPP_BOHEPPELGKF_OFFSET UNITYSDK_OFFSET(0xB1574F0)
#define BENBCNGOIPP_CEKOMPAAPML_OFFSET UNITYSDK_OFFSET(0xB1573E0)
#define BENBCNGOIPP_CKDBIAJCOHB_OFFSET UNITYSDK_OFFSET(0xB157850)
#define BENBCNGOIPP_CTOR_OFFSET UNITYSDK_OFFSET(0xB1579B0)
#define BENBCNGOIPP_EIBCDACOEMC_OFFSET UNITYSDK_OFFSET(0xB156C80)
#define BENBCNGOIPP_GJBKKPOCODL_OFFSET UNITYSDK_OFFSET(0xB157160)
#define BENBCNGOIPP_HHDIBOKPHHN_OFFSET UNITYSDK_OFFSET(0xB157730)
#define BENBCNGOIPP_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0xB156B20)
#define BENBCNGOIPP_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0xB157010)

inline static constexpr unsigned int BENBCNGOIPP_TypeDefinitionIndex = 54302;

	class BENBCNGOIPP : public ::System::Object
	{
	public:
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* BKHMBNPPHIM; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::FixVec2>* FAOILPABIID; // 0x20
		::POEGKFEADIE* GICHGNGMBGD; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::FixVec2>* LEDODLIJAEP; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BENBCNGOIPP_CTOR_OFFSET))(this);
		}

		::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + BENBCNGOIPP_ONPLUGININIT_OFFSET))(this, a1);
		}

		::System::Void OnPluginUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BENBCNGOIPP_ONPLUGINUNINIT_OFFSET))(this);
		}

		::System::Void BHEFAIAKGAI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BENBCNGOIPP_BHEFAIAKGAI_OFFSET))(this, a1);
		}

		::System::Void GJBKKPOCODL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BENBCNGOIPP_GJBKKPOCODL_OFFSET))(this, a1);
		}

		::System::UInt32 BMBNGAPENLJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BENBCNGOIPP_BMBNGAPENLJ_OFFSET))(this);
		}

		::BENBCNGOIPP_MHCCAKCGCEE* CEKOMPAAPML()
		{
			return ((::BENBCNGOIPP_MHCCAKCGCEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BENBCNGOIPP_CEKOMPAAPML_OFFSET))(this);
		}

		::BENBCNGOIPP_MHCCAKCGCEE* BOHEPPELGKF(::DEEJKBIMHAA* a1)
		{
			return ((::BENBCNGOIPP_MHCCAKCGCEE*(*)(::PVOID, ::DEEJKBIMHAA*))((::PBYTE)hIl2Cpp + BENBCNGOIPP_BOHEPPELGKF_OFFSET))(this, a1);
		}

		::BENBCNGOIPP_MHCCAKCGCEE* HHDIBOKPHHN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::BENBCNGOIPP_MHCCAKCGCEE*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BENBCNGOIPP_HHDIBOKPHHN_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixVec2 CKDBIAJCOHB()
		{
			return ((::RPG::GameCore::FixVec2(*)(::PVOID))((::PBYTE)hIl2Cpp + BENBCNGOIPP_CKDBIAJCOHB_OFFSET))(this);
		}

		::System::Void EIBCDACOEMC(::Il2CppArray<::RPG::GameCore::RtDefenceStageBornPointInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtDefenceStageBornPointInfo*>*))((::PBYTE)hIl2Cpp + BENBCNGOIPP_EIBCDACOEMC_OFFSET))(this, a1);
		}

	};
