#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define GAAGJOBMBHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C20FC40)

inline static constexpr unsigned int GAAGJOBMBHI_TypeDefinitionIndex = 43432;

	class GAAGJOBMBHI : public ::System::Object
	{
	public:
		::System::Single IOPKGDPHPJN; // 0x10
		::System::Single NFBLLGOHHPG; // 0x14
		::UnityEngine::Vector3 NMELCPIOKNO; // 0x18
		::System::Single CGDECJPHFOB; // 0x24
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAGJOBMBHI_CTOR_OFFSET))(this);
		}

	};
