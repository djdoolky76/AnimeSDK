#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGDADKNPPOL;
namespace RPG::GameCore { class EraRegion; }

#define RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS29_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1A6FDC30)
#define RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS29_0___ENTERERAREGION_B__0_OFFSET UNITYSDK_OFFSET(0x1A7005F0)

namespace RPG::Client
{
	inline static constexpr unsigned int EraFlipperManager___c__DisplayClass29_0_TypeDefinitionIndex = 61798;

	class EraFlipperManager___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::KGDADKNPPOL* stageRegion; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS29_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __EnterEraRegion_b__0(::RPG::GameCore::EraRegion* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EraRegion*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS29_0___ENTERERAREGION_B__0_OFFSET))(this, a1);
		}

	};
}
