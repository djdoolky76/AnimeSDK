#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

#define BBJAEFLCAEI_CTOR_OFFSET UNITYSDK_OFFSET(0x15E8E2F0)
#define BBJAEFLCAEI_NJJIFIKEPGM_OFFSET UNITYSDK_OFFSET(0x15E8E270)

inline static constexpr unsigned int BBJAEFLCAEI_TypeDefinitionIndex = 73749;

	class BBJAEFLCAEI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBJAEFLCAEI_CTOR_OFFSET))(this);
		}

		static ::System::Single NJJIFIKEPGM(::UnityEngine::Matrix4x4 a1, ::System::UInt32 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Matrix4x4, ::System::UInt32))((::PBYTE)hIl2Cpp + BBJAEFLCAEI_NJJIFIKEPGM_OFFSET))(a1, a2);
		}

	};
