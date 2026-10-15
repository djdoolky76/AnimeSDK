#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBKKFMONGAA.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/PLHLAIJKMOD.h"
class CHGHIALKMFM;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define JINPMMMOFHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C555E50)
#define JINPMMMOFHK_LICOGDLBFGE_OFFSET UNITYSDK_OFFSET(0x1C564180)
#define JINPMMMOFHK_MAPIDKMGMIE_OFFSET UNITYSDK_OFFSET(0x1C564130)
#define JINPMMMOFHK__ITERATEAFFECTEDCELLS_G__ISINRANGE_4_0_OFFSET UNITYSDK_OFFSET(0x1C564CD0)

inline static constexpr unsigned int JINPMMMOFHK_TypeDefinitionIndex = 41778;

	class JINPMMMOFHK : public ::FBKKFMONGAA
	{
	public:
		::UnityEngine::Vector2Int JGLJCHGAIHP; // 0x18
		::System::Single OHEALPINCGL; // 0x20
		::System::Void _ctor(::System::Single a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + JINPMMMOFHK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single MAPIDKMGMIE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JINPMMMOFHK_MAPIDKMGMIE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* LICOGDLBFGE(::CHGHIALKMFM* a1, ::PLHLAIJKMOD a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::CHGHIALKMFM*, ::PLHLAIJKMOD))((::PBYTE)hIl2Cpp + JINPMMMOFHK_LICOGDLBFGE_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IterateAffectedCells_g__IsInRange_4_0(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + JINPMMMOFHK__ITERATEAFFECTEDCELLS_G__ISINRANGE_4_0_OFFSET))(this, a1);
		}

	};
