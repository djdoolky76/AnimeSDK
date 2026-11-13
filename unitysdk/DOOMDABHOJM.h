#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DOOMDABHOJM_CTOR_OFFSET UNITYSDK_OFFSET(0x191B42C0)

inline static constexpr unsigned int DOOMDABHOJM_TypeDefinitionIndex = 72314;

	class DOOMDABHOJM : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 MKDDBBMPIAL; // 0x10
		::System::Single MAFHOMBELKM; // 0x1C
		::System::Single EPIMEPDEIPF; // 0x20
		::UnityEngine::Vector3 LPOKHIBICEO; // 0x24
		::UnityEngine::Vector3 BFDDNMDHAAE; // 0x30
		::UnityEngine::Vector3 DAPHJOGNFIM; // 0x3C
		::System::Boolean MOKNCFJICIC; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOMDABHOJM_CTOR_OFFSET))(this);
		}

	};
