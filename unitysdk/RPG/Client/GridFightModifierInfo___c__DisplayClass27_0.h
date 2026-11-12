#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGameModifier; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS27_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDBE3570)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS27_0__HASMODIFIER_B__0_OFFSET UNITYSDK_OFFSET(0xDBE4520)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModifierInfo___c__DisplayClass27_0_TypeDefinitionIndex = 66672;

	class GridFightModifierInfo___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::Func_2<::RPG::Client::GridFightGameModifier*, ::System::Boolean>* pred; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS27_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _HasModifier_b__0(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS27_0__HASMODIFIER_B__0_OFFSET))(this, a1);
		}

	};
}
