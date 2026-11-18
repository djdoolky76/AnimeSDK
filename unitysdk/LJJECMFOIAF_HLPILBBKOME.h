#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class LJJECMFOIAF;
namespace MoleMole::Config { class ConfigDynamicObjectRegistry; }

#define LJJECMFOIAF_HLPILBBKOME_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x184FB4E0)
#define LJJECMFOIAF_HLPILBBKOME__CTOR_OFFSET UNITYSDK_OFFSET(0x184FB4D0)

inline static constexpr unsigned int LJJECMFOIAF_HLPILBBKOME_TypeDefinitionIndex = 85488;

class LJJECMFOIAF_HLPILBBKOME : public ::System::Object
{
public:
	::Foundation::AssetPath CJBJONJDOLI; // 0x10
	::LJJECMFOIAF* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJECMFOIAF_HLPILBBKOME__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigDynamicObjectRegistry* PJGIPHEPLDN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDynamicObjectRegistry*))((::PBYTE)hIl2Cpp + LJJECMFOIAF_HLPILBBKOME_BHEKKKNPHAM_OFFSET))(this, PJGIPHEPLDN);
	}
};
