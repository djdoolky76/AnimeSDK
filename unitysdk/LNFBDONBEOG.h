#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEHGOOCDHCE;
namespace RPG::GameCore { class LittleGameEntityVarConfig; }

#define LNFBDONBEOG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C91C0B0)
#define LNFBDONBEOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C91C110)

inline static constexpr unsigned int LNFBDONBEOG_TypeDefinitionIndex = 43340;

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
