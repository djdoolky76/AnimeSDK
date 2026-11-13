#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJBDLOABGCG;
namespace System { class Object; }

#define EFGKKPOMAEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1A335660)
#define EFGKKPOMAEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A335520)
#define EFGKKPOMAEM_FOKMKFIAENA_OFFSET UNITYSDK_OFFSET(0x1A3355E0)
#define EFGKKPOMAEM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1A335420)
#define EFGKKPOMAEM_OALKEPEHJEP_OFFSET UNITYSDK_OFFSET(0x1A3354B0)

inline static constexpr unsigned int EFGKKPOMAEM_TypeDefinitionIndex = 73154;

	class EFGKKPOMAEM : public ::System::Object
	{
	public:
		::EJBDLOABGCG* GALBODEFGEL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGKKPOMAEM_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGKKPOMAEM_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void OALKEPEHJEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGKKPOMAEM_OALKEPEHJEP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGKKPOMAEM_DISPOSE_OFFSET))(this);
		}

		::System::Void FOKMKFIAENA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFGKKPOMAEM_FOKMKFIAENA_OFFSET))(this, a1);
		}

	};
