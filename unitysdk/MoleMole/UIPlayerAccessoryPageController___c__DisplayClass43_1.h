#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;

#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS43_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18236290)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS43_1__SENDCHANGESKIN_B__0_OFFSET UNITYSDK_OFFSET(0x182362A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryPageController___c__DisplayClass43_1_TypeDefinitionIndex = 43416;

	template <typename T>
	class UIPlayerAccessoryPageController___c__DisplayClass43_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Int32 reqSkinID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS43_1__CTOR_OFFSET))(this);
		}

		::System::Void _SendChangeSkin_b__0(::OAEFGCLEHHO* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS43_1__SENDCHANGESKIN_B__0_OFFSET))(this, rsp);
		}
	};
}
