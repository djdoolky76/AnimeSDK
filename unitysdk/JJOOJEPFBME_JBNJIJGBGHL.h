#pragma once
#include "unitysdk/unitysdk.h"

#define JJOOJEPFBME_JBNJIJGBGHL_CTOR_OFFSET UNITYSDK_OFFSET(0xB8C9C0)
#define JJOOJEPFBME_JBNJIJGBGHL_GET_CREATIONINDEX_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define JJOOJEPFBME_JBNJIJGBGHL_GET_PATIENCE_OFFSET UNITYSDK_OFFSET(0x7CEEB0)

inline static constexpr unsigned int JJOOJEPFBME_JBNJIJGBGHL_TypeDefinitionIndex = 79904;

	struct alignas(4) JJOOJEPFBME_JBNJIJGBGHL
	{
		::System::Int32 _CreationIndex_k__BackingField; // 0x10
		::System::Single _Patience_k__BackingField; // 0x14
		::System::Void _ctor(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + JJOOJEPFBME_JBNJIJGBGHL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_CreationIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOOJEPFBME_JBNJIJGBGHL_GET_CREATIONINDEX_OFFSET))(this);
		}

		::System::Single get_Patience()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOOJEPFBME_JBNJIJGBGHL_GET_PATIENCE_OFFSET))(this);
		}

	};
