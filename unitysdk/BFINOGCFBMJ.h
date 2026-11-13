#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define BFINOGCFBMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1A962220)

inline static constexpr unsigned int BFINOGCFBMJ_TypeDefinitionIndex = 54818;

	class BFINOGCFBMJ : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint LLBFAIGNNEC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINOGCFBMJ_CTOR_OFFSET))(this);
		}

	};
