#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Transform; }

#define DPCFKFGNBKL_ONNKKOMPGDE_CTOR_OFFSET UNITYSDK_OFFSET(0x11FFA010)

inline static constexpr unsigned int DPCFKFGNBKL_ONNKKOMPGDE_TypeDefinitionIndex = 56966;

	class DPCFKFGNBKL_ONNKKOMPGDE : public ::System::Object
	{
	public:
		::UnityEngine::Transform* DBIIPEEDBHI; // 0x10
		::System::Single NEMDKBKDFDN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCFKFGNBKL_ONNKKOMPGDE_CTOR_OFFSET))(this);
		}

	};
