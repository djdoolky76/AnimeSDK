#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipDressEvent; }
namespace System { class Object; }

#define BJPKBDFIHKF___C__DISPLAYCLASS9_1_CTOR_OFFSET UNITYSDK_OFFSET(0xC0FCBA0)
#define BJPKBDFIHKF___C__DISPLAYCLASS9_1__UPDATEROLE_B__2_OFFSET UNITYSDK_OFFSET(0xC100C40)

inline static constexpr unsigned int BJPKBDFIHKF___c__DisplayClass9_1_TypeDefinitionIndex = 66540;

	template <typename T>
	class BJPKBDFIHKF___c__DisplayClass9_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Boolean trackDress; // 0x18
		::System::Boolean craft; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJPKBDFIHKF___C__DISPLAYCLASS9_1_CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateRole_b__2(::RPG::Client::GridFightEquipDressEvent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipDressEvent*))((::PBYTE)hIl2Cpp + BJPKBDFIHKF___C__DISPLAYCLASS9_1__UPDATEROLE_B__2_OFFSET))(this, a1);
		}

	};
