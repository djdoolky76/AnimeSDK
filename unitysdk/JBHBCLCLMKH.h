#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNEJODMMPKC;
namespace RPG::GameCore { class LittleGameLevelVariableCollection; }

#define JBHBCLCLMKH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DD53740)
#define JBHBCLCLMKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD537A0)

inline static constexpr unsigned int JBHBCLCLMKH_TypeDefinitionIndex = 43042;

	class JBHBCLCLMKH : public ::System::Object
	{
	public:
		::HNEJODMMPKC* KKNCHPMEJFN; // 0x10
		::RPG::GameCore::LittleGameLevelVariableCollection* EABKOHGCHFP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBHBCLCLMKH_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBHBCLCLMKH_CLEAR_OFFSET))(this);
		}

	};
