#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PlaneSlice_DLCJEAJGLFB_TypeDefinitionIndex = 70700;

	struct alignas(8) PlaneSlice_DLCJEAJGLFB
	{
		::System::Int32 ELBDFOOMPON; // 0x10
		::System::Int32 DHGKOHEFAID; // 0x14
		::UnityEngine::Vector3 NPHAFNPMMDF; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Int32>* FOMNGCINLNE; // 0x28
	};
}
