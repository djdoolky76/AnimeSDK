#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOBKANOJDMA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
#include "unitysdk/UnityEngine/Bounds.h"
class KPIMOBENENM;
namespace RPG::GameCore { class LevelSpatialIntVec2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KPIMOBENENM_CTOR_OFFSET UNITYSDK_OFFSET(0xB5C00A0)
#define KPIMOBENENM_MJLLHMGLOHL_OFFSET UNITYSDK_OFFSET(0xB5C0380)

inline static constexpr unsigned int KPIMOBENENM_TypeDefinitionIndex = 62050;

	class KPIMOBENENM : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::HOBKANOJDMA>* LKEHCIFAJNK; // 0x10
		::UnityEngine::Bounds BMKHMEDKICK; // 0x18
		::System::Void _ctor(::Il2CppArray<::System::Int16>* a1, ::RPG::GameCore::LevelSpatialIntVec2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int16>*, ::RPG::GameCore::LevelSpatialIntVec2*))((::PBYTE)hIl2Cpp + KPIMOBENENM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean MJLLHMGLOHL(::KPIMOBENENM* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::KPIMOBENENM*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KPIMOBENENM_MJLLHMGLOHL_OFFSET))(this, a1, a2, a3);
		}

	};
