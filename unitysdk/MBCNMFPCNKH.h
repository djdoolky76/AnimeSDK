#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define MBCNMFPCNKH_CTOR_OFFSET UNITYSDK_OFFSET(0xC0BDE90)

inline static constexpr unsigned int MBCNMFPCNKH_TypeDefinitionIndex = 58840;

	class MBCNMFPCNKH : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* EAEJGPLLGMI; // 0x10
		::KFELGAIGHAP* GJIJNGAMIGH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBCNMFPCNKH_CTOR_OFFSET))(this);
		}

	};
