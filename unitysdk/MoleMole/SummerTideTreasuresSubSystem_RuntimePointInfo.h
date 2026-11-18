#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class LHOBIPPLLHD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RUNTIMEPOINTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0BFB60)

namespace MoleMole
{
	inline static constexpr unsigned int SummerTideTreasuresSubSystem_RuntimePointInfo_TypeDefinitionIndex = 69666;

	class SummerTideTreasuresSubSystem_RuntimePointInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* activeMonster; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* activeMonsterConfigID; // 0x18
		::System::Collections::Generic::List_1<::LHOBIPPLLHD*>* configs; // 0x20
		::System::String* pointID; // 0x28
		::System::Int32 validState; // 0x30
		::UnityEngine::Vector3 Position; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RUNTIMEPOINTINFO__CTOR_OFFSET))(this);
		}
	};
}
