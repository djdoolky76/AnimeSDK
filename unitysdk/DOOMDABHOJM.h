#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DOOMDABHOJM_CTOR_OFFSET UNITYSDK_OFFSET(0x12DEFA50)

inline static constexpr unsigned int DOOMDABHOJM_TypeDefinitionIndex = 72314;

	class DOOMDABHOJM : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 BFDDNMDHAAE; // 0x10
		::System::Single MAFHOMBELKM; // 0x1C
		::System::Boolean MOKNCFJICIC; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single EPIMEPDEIPF; // 0x24
		::UnityEngine::Vector3 LPOKHIBICEO; // 0x28
		::UnityEngine::Vector3 DAPHJOGNFIM; // 0x34
		::UnityEngine::Vector3 MKDDBBMPIAL; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOMDABHOJM_CTOR_OFFSET))(this);
		}

	};
