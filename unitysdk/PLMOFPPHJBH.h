#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define PLMOFPPHJBH_CTOR_OFFSET UNITYSDK_OFFSET(0xC30C790)

inline static constexpr unsigned int PLMOFPPHJBH_TypeDefinitionIndex = 57611;

	class PLMOFPPHJBH : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* EAEJGPLLGMI; // 0x10
		::KFELGAIGHAP* HKHPOBNDOPO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMOFPPHJBH_CTOR_OFFSET))(this);
		}

	};
