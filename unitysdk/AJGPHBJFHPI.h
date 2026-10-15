#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GLBAOKOHKCF.h"
#include "unitysdk/System/Object.h"
class BCJBBPAKJPJ;
class OFAKEFLLHNP;
namespace RPG::Client::ChenLingBattle { class SoldierUnit; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AJGPHBJFHPI_CTOR_OFFSET UNITYSDK_OFFSET(0x12CBC3C0)
#define AJGPHBJFHPI_IIFINBAGBDG_OFFSET UNITYSDK_OFFSET(0x12CBC470)
#define AJGPHBJFHPI_PAMKOLICNOL_OFFSET UNITYSDK_OFFSET(0x12CBC850)

	class AJGPHBJFHPI : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::GLBAOKOHKCF, ::BCJBBPAKJPJ*>* IAFNNMFIMOI; // 0x10
		::System::Void _ctor(::RPG::Client::ChenLingBattle::SoldierUnit* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::SoldierUnit*))((::PBYTE)hIl2Cpp + AJGPHBJFHPI_CTOR_OFFSET))(this, a1);
		}

		::OFAKEFLLHNP* PAMKOLICNOL(::GLBAOKOHKCF a1)
		{
			return ((::OFAKEFLLHNP*(*)(::PVOID, ::GLBAOKOHKCF))((::PBYTE)hIl2Cpp + AJGPHBJFHPI_PAMKOLICNOL_OFFSET))(this, a1);
		}

		::System::Void IIFINBAGBDG(::RPG::Client::ChenLingBattle::SoldierUnit* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::SoldierUnit*))((::PBYTE)hIl2Cpp + AJGPHBJFHPI_IIFINBAGBDG_OFFSET))(this, a1);
		}

	};
