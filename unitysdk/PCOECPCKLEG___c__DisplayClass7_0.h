#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENDEAPMHAOI;
namespace RPG::GameCore { class CakeRaceBuffConfig; }

#define PCOECPCKLEG___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7EBBE0)
#define PCOECPCKLEG___C__DISPLAYCLASS7_0__ADDBUFF_B__0_OFFSET UNITYSDK_OFFSET(0x1C7EC0F0)

inline static constexpr unsigned int PCOECPCKLEG___c__DisplayClass7_0_TypeDefinitionIndex = 37289;

	class PCOECPCKLEG___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::CakeRaceBuffConfig* buffConfig; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCOECPCKLEG___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _AddBuff_b__0(::ENDEAPMHAOI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENDEAPMHAOI*))((::PBYTE)hIl2Cpp + PCOECPCKLEG___C__DISPLAYCLASS7_0__ADDBUFF_B__0_OFFSET))(this, a1);
		}

	};
