#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ZenkovGemDebuffSelectPopShow; }

#define MOLEMOLE_ZENKOVGEMDEBUFFSELECTPOPSHOW___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12C1DEB0)
#define MOLEMOLE_ZENKOVGEMDEBUFFSELECTPOPSHOW___C__DISPLAYCLASS10_0__ONSELECTINDEX_B__0_OFFSET UNITYSDK_OFFSET(0x12C1DEC0)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovGemDebuffSelectPopShow___c__DisplayClass10_0_TypeDefinitionIndex = 80930;

	class ZenkovGemDebuffSelectPopShow___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MoleMole::ZenkovGemDebuffSelectPopShow* __4__this; // 0x10
		::System::Int32 index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVGEMDEBUFFSELECTPOPSHOW___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnSelectIndex_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVGEMDEBUFFSELECTPOPSHOW___C__DISPLAYCLASS10_0__ONSELECTINDEX_B__0_OFFSET))(this);
		}
	};
}
