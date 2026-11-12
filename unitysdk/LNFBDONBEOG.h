#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEHGOOCDHCE;
namespace RPG::GameCore { class LittleGameEntityVarConfig; }

#define LNFBDONBEOG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DAC8550)
#define LNFBDONBEOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC85B0)

inline static constexpr unsigned int LNFBDONBEOG_TypeDefinitionIndex = 44321;

	class LNFBDONBEOG : public ::System::Object
	{
	public:
		::RPG::GameCore::LittleGameEntityVarConfig* EABKOHGCHFP; // 0x10
		::AEHGOOCDHCE* CNLHCKELLBE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNFBDONBEOG_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNFBDONBEOG_CLEAR_OFFSET))(this);
		}

	};
