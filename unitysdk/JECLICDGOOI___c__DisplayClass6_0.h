#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDEAABODKCP;
class JECLICDGOOI;
namespace RPG::Client { class GridFightEquipDressEvent; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightEquipReturnPackEvent; }

#define JECLICDGOOI___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1660C500)
#define JECLICDGOOI___C__DISPLAYCLASS6_0__UPDATEROLE_B__0_OFFSET UNITYSDK_OFFSET(0x1660E7F0)
#define JECLICDGOOI___C__DISPLAYCLASS6_0__UPDATEROLE_B__1_OFFSET UNITYSDK_OFFSET(0x1660E830)
#define JECLICDGOOI___C__DISPLAYCLASS6_0__UPDATEROLE_B__2_OFFSET UNITYSDK_OFFSET(0x1660E860)
#define JECLICDGOOI___C__DISPLAYCLASS6_0__UPDATEROLE_B__3_OFFSET UNITYSDK_OFFSET(0x1660E8B0)

inline static constexpr unsigned int JECLICDGOOI___c__DisplayClass6_0_TypeDefinitionIndex = 64953;

	class JECLICDGOOI___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::JECLICDGOOI* __4__this; // 0x10
		::CDEAABODKCP* roleSever; // 0x18
		::System::Boolean trackDress; // 0x20
		::System::Boolean craft; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JECLICDGOOI___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateRole_b__0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + JECLICDGOOI___C__DISPLAYCLASS6_0__UPDATEROLE_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _UpdateRole_b__1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JECLICDGOOI___C__DISPLAYCLASS6_0__UPDATEROLE_B__1_OFFSET))(this, a1);
		}

		::System::Boolean _UpdateRole_b__2(::RPG::Client::GridFightEquipDressEvent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipDressEvent*))((::PBYTE)hIl2Cpp + JECLICDGOOI___C__DISPLAYCLASS6_0__UPDATEROLE_B__2_OFFSET))(this, a1);
		}

		::System::Boolean _UpdateRole_b__3(::RPG::Client::GridFightEquipReturnPackEvent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipReturnPackEvent*))((::PBYTE)hIl2Cpp + JECLICDGOOI___C__DISPLAYCLASS6_0__UPDATEROLE_B__3_OFFSET))(this, a1);
		}

	};
