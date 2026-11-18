#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CHARACTERDYNAMICACCESSORYDATAMONO_AWAKE_OFFSET UNITYSDK_OFFSET(0x131C26A0)
#define MOLEMOLE_CHARACTERDYNAMICACCESSORYDATAMONO_EDPCAGIEHJB_OFFSET UNITYSDK_OFFSET(0x131C2700)
#define MOLEMOLE_CHARACTERDYNAMICACCESSORYDATAMONO_EFCOKDACLMG_OFFSET UNITYSDK_OFFSET(0x131C27A0)
#define MOLEMOLE_CHARACTERDYNAMICACCESSORYDATAMONO_GET_ACCESSORYLIST_OFFSET UNITYSDK_OFFSET(0x131C2690)
#define MOLEMOLE_CHARACTERDYNAMICACCESSORYDATAMONO__CTOR_OFFSET UNITYSDK_OFFSET(0x131C2750)

namespace MoleMole
{
	inline static constexpr unsigned int CharacterDynamicAccessoryDataMono_TypeDefinitionIndex = 92634;

	class CharacterDynamicAccessoryDataMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::System::Int32>* AccessoryArr; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* NDNBPMEGLCA; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERDYNAMICACCESSORYDATAMONO__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_AccessoryList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERDYNAMICACCESSORYDATAMONO_GET_ACCESSORYLIST_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERDYNAMICACCESSORYDATAMONO_AWAKE_OFFSET))(this);
		}

		::System::Void EFCOKDACLMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERDYNAMICACCESSORYDATAMONO_EFCOKDACLMG_OFFSET))(this);
		}

		::System::Void EDPCAGIEHJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERDYNAMICACCESSORYDATAMONO_EDPCAGIEHJB_OFFSET))(this);
		}
	};
}
