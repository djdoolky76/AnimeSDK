#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBuffName.h"
#include "unitysdk/System/Object.h"
class ENDEAPMHAOI;

#define PCOECPCKLEG___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7EC010)
#define PCOECPCKLEG___C__DISPLAYCLASS9_0__REMOVEBUFFSBYNAMES_B__0_OFFSET UNITYSDK_OFFSET(0x1C7EC130)

	class PCOECPCKLEG___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::CakeRaceBuffName>* buffNames; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCOECPCKLEG___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveBuffsByNames_b__0(::ENDEAPMHAOI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENDEAPMHAOI*))((::PBYTE)hIl2Cpp + PCOECPCKLEG___C__DISPLAYCLASS9_0__REMOVEBUFFSBYNAMES_B__0_OFFSET))(this, a1);
		}

	};
