#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALDOKCCIFNB;
class DBHOGGMBCFM;

#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS67_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18D00C00)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS67_0__SETMINISCAPEQUESTCONTEXT_B__0_OFFSET UNITYSDK_OFFSET(0x18D00C10)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext___c__DisplayClass67_0_TypeDefinitionIndex = 81293;

	class UILineupSelectContext___c__DisplayClass67_0 : public ::System::Object
	{
	public:
		::DBHOGGMBCFM* questTemp; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS67_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetMiniscapeQuestContext_b__0(::ALDOKCCIFNB* data)
		{
			return ((::System::Void(*)(::PVOID, ::ALDOKCCIFNB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS67_0__SETMINISCAPEQUESTCONTEXT_B__0_OFFSET))(this, data);
		}
	};
}
