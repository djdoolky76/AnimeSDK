#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::CityCarFlow { class MonoCityCar; }

#define HBFIBDGJLHE_LBKIAHODLLM_PLJAJMFJPOK_CTOR_OFFSET UNITYSDK_OFFSET(0x15BF4F90)
#define HBFIBDGJLHE_LBKIAHODLLM_PLJAJMFJPOK_GET_PREFAB_OFFSET UNITYSDK_OFFSET(0x15BF53B0)
#define HBFIBDGJLHE_LBKIAHODLLM_PLJAJMFJPOK_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x15BF53D0)
#define HBFIBDGJLHE_LBKIAHODLLM_PLJAJMFJPOK_SET_PREFAB_OFFSET UNITYSDK_OFFSET(0x15BF53C0)
#define HBFIBDGJLHE_LBKIAHODLLM_PLJAJMFJPOK_SET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x15BF53E0)

inline static constexpr unsigned int HBFIBDGJLHE_LBKIAHODLLM_PLJAJMFJPOK_TypeDefinitionIndex = 82173;

	class HBFIBDGJLHE_LBKIAHODLLM_PLJAJMFJPOK : public ::System::Object
	{
	public:
		::RPG::Client::CityCarFlow::MonoCityCar* _Prefab_k__BackingField; // 0x10
		::System::Single _Weight_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_PLJAJMFJPOK_CTOR_OFFSET))(this);
		}

		::RPG::Client::CityCarFlow::MonoCityCar* get_Prefab()
		{
			return ((::RPG::Client::CityCarFlow::MonoCityCar*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_PLJAJMFJPOK_GET_PREFAB_OFFSET))(this);
		}

		::System::Void set_Prefab(::RPG::Client::CityCarFlow::MonoCityCar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CityCarFlow::MonoCityCar*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_PLJAJMFJPOK_SET_PREFAB_OFFSET))(this, a1);
		}

		::System::Single get_Weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_PLJAJMFJPOK_GET_WEIGHT_OFFSET))(this);
		}

		::System::Void set_Weight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LBKIAHODLLM_PLJAJMFJPOK_SET_WEIGHT_OFFSET))(this, a1);
		}

	};
