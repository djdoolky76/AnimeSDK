#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JLEKMHHGMEM.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONO2DMAPDATA_GETICONSCALE_OFFSET UNITYSDK_OFFSET(0x15AB9CF0)
#define MOLEMOLE_MONO2DMAPDATA_GETPOS_OFFSET UNITYSDK_OFFSET(0x15AB99F0)
#define MOLEMOLE_MONO2DMAPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15ABA000)

namespace MoleMole
{
	inline static constexpr unsigned int Mono2dMapData_TypeDefinitionIndex = 75759;

	class Mono2dMapData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* IconInfoGroups; // 0x18
		::System::Single FirstFloorViewOffsetRate; // 0x20
		::System::Single SecondFloorViewOffsetRate; // 0x24
		::System::Single ThirdFloorViewOffsetRate; // 0x28
		::System::Single FirstFloorViewOffsetMax; // 0x2C
		::System::Single SecondFloorViewOffsetMax; // 0x30
		::System::Single ThirdFloorViewOffsetMax; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetPos(::JLEKMHHGMEM OBNIAHNMHPF, ::System::Int32 MGMDLMBEDJF)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::JLEKMHHGMEM, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_GETPOS_OFFSET))(this, OBNIAHNMHPF, MGMDLMBEDJF);
		}

		::System::Single GetIconScale(::JLEKMHHGMEM OBNIAHNMHPF, ::System::Int32 MGMDLMBEDJF)
		{
			return ((::System::Single(*)(::PVOID, ::JLEKMHHGMEM, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_GETICONSCALE_OFFSET))(this, OBNIAHNMHPF, MGMDLMBEDJF);
		}
	};
}
