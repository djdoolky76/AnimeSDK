#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define ED18AA8BF009DBD1_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x1830390)
#define ED18AA8BF009DBD1_B05FE60E98F4B6EA_OFFSET UNITYSDK_OFFSET(0x18309B0)
#define ED18AA8BF009DBD1_B15A4DF355213D29_OFFSET UNITYSDK_OFFSET(0x1830760)
#define ED18AA8BF009DBD1_B895B3E1BD72A621_OFFSET UNITYSDK_OFFSET(0x1830530)
#define ED18AA8BF009DBD1_E597891A15AE44F9_OFFSET UNITYSDK_OFFSET(0x1830AF0)
#define ED18AA8BF009DBD1_FD792C24FE49920B_OFFSET UNITYSDK_OFFSET(0x1830A80)
#define ED18AA8BF009DBD1_FEF018E363BC5122_OFFSET UNITYSDK_OFFSET(0x1830610)
#define ED18AA8BF009DBD1__CTOR_OFFSET UNITYSDK_OFFSET(0x1830AE0)

inline static constexpr unsigned int ED18AA8BF009DBD1_TypeDefinitionIndex = 1169;

class ED18AA8BF009DBD1 : public ::System::Object
{
public:
	::UnityEngine::Transform* A73409F1FD56937A; // 0x10
	::UnityEngine::GameObject* B8B9CAE5C9A69988; // 0x18
	::UnityEngine::CanvasGroup* E2BC3C7FE378B1B8; // 0x20
	::System::Single BC3A46A15F6F026E; // 0x28
	::System::Boolean B8C38AB2BF0FE532; // 0x2C
	::System::Boolean FE455BE1D396C10D; // 0x2D
	::System::Byte _padding0[0x2];
	::System::Single E13D21A4F5DE6187; // 0x30
	::System::Single E81E0FD47EDF27E1; // 0x34

	::System::Void B05FE60E98F4B6EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ED18AA8BF009DBD1_B05FE60E98F4B6EA_OFFSET))(this);
	}

	::System::Boolean E597891A15AE44F9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ED18AA8BF009DBD1_E597891A15AE44F9_OFFSET))(this);
	}

	::System::Void FD792C24FE49920B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ED18AA8BF009DBD1_FD792C24FE49920B_OFFSET))(this);
	}

	::System::Void B15A4DF355213D29(::System::Boolean E2B93E8664565168, ::System::Boolean EDB69261C170B47F)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ED18AA8BF009DBD1_B15A4DF355213D29_OFFSET))(this, E2B93E8664565168, EDB69261C170B47F);
	}

	::System::Void B895B3E1BD72A621(::System::Boolean EDB69261C170B47F)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ED18AA8BF009DBD1_B895B3E1BD72A621_OFFSET))(this, EDB69261C170B47F);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ED18AA8BF009DBD1__CTOR_OFFSET))(this);
	}

	::System::Void A1E97155B145443C(::UnityEngine::Transform* E1C906AC21402CBB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ED18AA8BF009DBD1_A1E97155B145443C_OFFSET))(this, E1C906AC21402CBB);
	}

	::System::Void FEF018E363BC5122(::System::Boolean EDB69261C170B47F)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ED18AA8BF009DBD1_FEF018E363BC5122_OFFSET))(this, EDB69261C170B47F);
	}
};
