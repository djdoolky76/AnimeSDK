#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class IAAPILPOGNF;
namespace RPG::GameCore { class GameEntity; }

#define MKOLBIIIPAI_CTOR_OFFSET UNITYSDK_OFFSET(0xC25DE20)
#define MKOLBIIIPAI_EBDIMKLGANH_OFFSET UNITYSDK_OFFSET(0xC25DCF0)
#define MKOLBIIIPAI__ONBIND_OFFSET UNITYSDK_OFFSET(0xC25DBD0)
#define MKOLBIIIPAI__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xC25DC90)

inline static constexpr unsigned int MKOLBIIIPAI_TypeDefinitionIndex = 74320;

	class MKOLBIIIPAI : public ::FMPCODLIOLG
	{
	public:
		::IAAPILPOGNF* OFGFMBJJKDB; // 0x60
		::RPG::GameCore::GameEntity* JDOAGFALGGA; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOLBIIIPAI_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOLBIIIPAI__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + MKOLBIIIPAI__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void EBDIMKLGANH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MKOLBIIIPAI_EBDIMKLGANH_OFFSET))(this, a1);
		}

	};
