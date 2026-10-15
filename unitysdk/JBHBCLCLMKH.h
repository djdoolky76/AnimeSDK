#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNEJODMMPKC;
namespace RPG::GameCore { class LittleGameLevelVariableCollection; }

#define JBHBCLCLMKH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB5EE50)
#define JBHBCLCLMKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB5EEB0)

inline static constexpr unsigned int JBHBCLCLMKH_TypeDefinitionIndex = 42067;

	class JBHBCLCLMKH : public ::System::Object
	{
	public:
		::RPG::GameCore::LittleGameLevelVariableCollection* EABKOHGCHFP; // 0x10
		::HNEJODMMPKC* KKNCHPMEJFN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBHBCLCLMKH_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBHBCLCLMKH_CLEAR_OFFSET))(this);
		}

	};
