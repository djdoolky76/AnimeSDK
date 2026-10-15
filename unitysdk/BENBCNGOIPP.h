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

#define BENBCNGOIPP_BHEFAIAKGAI_OFFSET UNITYSDK_OFFSET(0xB1589D0)
#define BENBCNGOIPP_BMBNGAPENLJ_OFFSET UNITYSDK_OFFSET(0xB158B80)
#define BENBCNGOIPP_BOHEPPELGKF_OFFSET UNITYSDK_OFFSET(0xB158DD0)
#define BENBCNGOIPP_CEKOMPAAPML_OFFSET UNITYSDK_OFFSET(0xB158CC0)
#define BENBCNGOIPP_CKDBIAJCOHB_OFFSET UNITYSDK_OFFSET(0xB159130)
#define BENBCNGOIPP_CTOR_OFFSET UNITYSDK_OFFSET(0xB159290)
#define BENBCNGOIPP_EIBCDACOEMC_OFFSET UNITYSDK_OFFSET(0xB158570)
#define BENBCNGOIPP_GJBKKPOCODL_OFFSET UNITYSDK_OFFSET(0xB158A40)
#define BENBCNGOIPP_HHDIBOKPHHN_OFFSET UNITYSDK_OFFSET(0xB159010)
#define BENBCNGOIPP_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0xB158410)
#define BENBCNGOIPP_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0xB158900)

	class BENBCNGOIPP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::FixVec2>* FAOILPABIID; // 0x10
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x18
		::POEGKFEADIE* GICHGNGMBGD; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* BKHMBNPPHIM; // 0x28
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
