#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBKKFMONGAA.h"
#include "unitysdk/PLHLAIJKMOD.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class CHGHIALKMFM;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define PEKJOBKHDFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C54F5F0)
#define PEKJOBKHDFN_LICOGDLBFGE_OFFSET UNITYSDK_OFFSET(0x1C54F650)
#define PEKJOBKHDFN_MAPIDKMGMIE_OFFSET UNITYSDK_OFFSET(0x1C54F600)

inline static constexpr unsigned int PEKJOBKHDFN_TypeDefinitionIndex = 41784;

	class PEKJOBKHDFN : public ::FBKKFMONGAA
	{
	public:
		::System::Single OHEALPINCGL; // 0x18
		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PEKJOBKHDFN_CTOR_OFFSET))(this, a1);
		}

		::System::Single MAPIDKMGMIE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PEKJOBKHDFN_MAPIDKMGMIE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* LICOGDLBFGE(::CHGHIALKMFM* a1, ::PLHLAIJKMOD a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::CHGHIALKMFM*, ::PLHLAIJKMOD))((::PBYTE)hIl2Cpp + PEKJOBKHDFN_LICOGDLBFGE_OFFSET))(this, a1, a2);
		}

	};
