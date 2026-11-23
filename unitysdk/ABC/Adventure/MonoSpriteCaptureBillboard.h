#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class AB642D1382756991;
namespace UnityEngine::UI { class Image; }

#define ABC_ADVENTURE_MONOSPRITECAPTUREBILLBOARD_E29CA75D0125CD47_OFFSET UNITYSDK_OFFSET(0x1B2AAA0)
#define ABC_ADVENTURE_MONOSPRITECAPTUREBILLBOARD_EEA5D6E8F4B2655A_OFFSET UNITYSDK_OFFSET(0x1B2A930)
#define ABC_ADVENTURE_MONOSPRITECAPTUREBILLBOARD_F6AE6B5346F8391A_OFFSET UNITYSDK_OFFSET(0x1B2AB00)
#define ABC_ADVENTURE_MONOSPRITECAPTUREBILLBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::Adventure
{
	inline static constexpr unsigned int MonoSpriteCaptureBillboard_TypeDefinitionIndex = 2083;

	class MonoSpriteCaptureBillboard : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Image* SmoothMaskProgress; // 0x20
		::System::Single BottomOffset; // 0x28
		::System::Single TopOffset; // 0x2C

		::System::Void F6AE6B5346F8391A(::System::Single FC6FAAE852B2379B)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABC_ADVENTURE_MONOSPRITECAPTUREBILLBOARD_F6AE6B5346F8391A_OFFSET))(this, FC6FAAE852B2379B);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ADVENTURE_MONOSPRITECAPTUREBILLBOARD__CTOR_OFFSET))(this);
		}

		::System::Void E29CA75D0125CD47()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ADVENTURE_MONOSPRITECAPTUREBILLBOARD_E29CA75D0125CD47_OFFSET))(this);
		}

		::System::Void EEA5D6E8F4B2655A(::AB642D1382756991* E3E3158AF5700E52)
		{
			return ((::System::Void(*)(::PVOID, ::AB642D1382756991*))((::PBYTE)hIl2Cpp + ABC_ADVENTURE_MONOSPRITECAPTUREBILLBOARD_EEA5D6E8F4B2655A_OFFSET))(this, E3E3158AF5700E52);
		}
	};
}
