#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace UnityEngine { class Transform; }

#define HLGELEEENMC_CTOR_OFFSET UNITYSDK_OFFSET(0x198A04F0)
#define HLGELEEENMC_PDFDIGFKPDO_OFFSET UNITYSDK_OFFSET(0x198A0480)
#define HLGELEEENMC__ONBIND_OFFSET UNITYSDK_OFFSET(0x198A0390)

inline static constexpr unsigned int HLGELEEENMC_TypeDefinitionIndex = 73271;

	class HLGELEEENMC : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* NLOFDELKDOI; // 0x60
		::UnityEngine::Transform* GHGAKNDLKGM; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLGELEEENMC_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLGELEEENMC__ONBIND_OFFSET))(this);
		}

		::System::Void PDFDIGFKPDO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HLGELEEENMC_PDFDIGFKPDO_OFFSET))(this, a1);
		}

	};
