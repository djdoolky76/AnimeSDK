#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS101_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69D350)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS101_0__PENDINGREADUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x1D69EBA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass101_0_TypeDefinitionIndex = 66245;

	class GridFightGameRef___c__DisplayClass101_0 : public ::System::Object
	{
	public:
		::System::String* id; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS101_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _PendingReadUpdate_b__0(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS101_0__PENDINGREADUPDATE_B__0_OFFSET))(this, a1);
		}

	};
}
