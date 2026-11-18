#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEDIGMHHFGN.h"
#include "unitysdk/Foundation/Container/HierarchicalHashGrid2D_2.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/HJFHBHFHHPN.h"
#include "unitysdk/KCKBKDMEANI.h"
#include "unitysdk/NPCCrowd/Ability/NPCEntityNativeData.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItem.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItemEqualsFunc.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/PhysicsScene.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FPGMGBEEJOM_AFJPJJMOIIE_OFFSET UNITYSDK_OFFSET(0x15E7CC90)
#define FPGMGBEEJOM_EXECUTE_OFFSET UNITYSDK_OFFSET(0x775240)
#define FPGMGBEEJOM_OPMGOKAEAIM_OFFSET UNITYSDK_OFFSET(0x15E7CBE0)

inline static constexpr unsigned int FPGMGBEEJOM_TypeDefinitionIndex = 90059;

struct alignas(8) FPGMGBEEJOM
{
	::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc> KBDNCJCBFBF; // 0x10
	::System::Byte _padding0[0x48];
	::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> KDCHJDFPBEP; // 0x60
	::System::Byte _padding1[0x18];
	::UnityEngine::PhysicsScene FFBCNLFANHH; // 0x80
	::System::Int32 BNDJCOLFDAJ; // 0x84
	::Unity::Collections::NativeArray_1<::DEDIGMHHFGN> HAOLLCKJCGE; // 0x88
	::System::Byte _padding2[0x8];
	::Unity::Collections::NativeArray_1<::KCKBKDMEANI> JFFJGBMFCJG; // 0x98
	::System::Byte _padding3[0x8];
	::Unity::Collections::NativeArray_1<::HJFHBHFHHPN> PBLGGNBLDGK; // 0xA8
	::System::Byte _padding4[0x8];
	::System::Single LLBEKEFONPC; // 0xB8

	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FPGMGBEEJOM_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}

	static ::UnityEngine::Bounds OPMGOKAEAIM(::UnityEngine::Vector3 MPLDDNMCECG, ::System::Single NCCDJLDKFGA)
	{
		return ((::UnityEngine::Bounds(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FPGMGBEEJOM_OPMGOKAEAIM_OFFSET))(MPLDDNMCECG, NCCDJLDKFGA);
	}

	static ::UnityEngine::Bounds AFJPJJMOIIE(::UnityEngine::Vector3 MPLDDNMCECG, ::UnityEngine::Vector3 CFJFMMGPGKE, ::System::Single NCCDJLDKFGA, ::System::Single ONNCAHGKBCI)
	{
		return ((::UnityEngine::Bounds(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FPGMGBEEJOM_AFJPJJMOIIE_OFFSET))(MPLDDNMCECG, CFJFMMGPGKE, NCCDJLDKFGA, ONNCAHGKBCI);
	}
};
