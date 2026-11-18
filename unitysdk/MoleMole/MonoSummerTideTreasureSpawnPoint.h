#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIHIPJNFDIA.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOSUMMERTIDETREASURESPAWNPOINT_LDHCHFBOBEJ_OFFSET UNITYSDK_OFFSET(0x1310AFA0)
#define MOLEMOLE_MONOSUMMERTIDETREASURESPAWNPOINT_MDHFLGLJPFP_OFFSET UNITYSDK_OFFSET(0x1310AF40)
#define MOLEMOLE_MONOSUMMERTIDETREASURESPAWNPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1310AE90)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSummerTideTreasureSpawnPoint_TypeDefinitionIndex = 56460;

	class MonoSummerTideTreasureSpawnPoint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::FIHIPJNFDIA BornType; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* ContainMonsters; // 0x20
		::System::Int32 ContainAreaID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMERTIDETREASURESPAWNPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Collections::IEnumerable* MDHFLGLJPFP()
		{
			return ((::System::Collections::IEnumerable*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMERTIDETREASURESPAWNPOINT_MDHFLGLJPFP_OFFSET))();
		}

		static ::System::Collections::IEnumerable* LDHCHFBOBEJ()
		{
			return ((::System::Collections::IEnumerable*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMERTIDETREASURESPAWNPOINT_LDHCHFBOBEJ_OFFSET))();
		}
	};
}
