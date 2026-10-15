#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PPGNDHAAJDO.h"
#include "unitysdk/PBFICKNEGLB.h"
class MLGCFIPGNCI;
namespace UnityEngine { class Transform; }

#define MLGCFIPGNCI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB9ADBC0)
#define MLGCFIPGNCI_CTOR_OFFSET UNITYSDK_OFFSET(0xB9ADCC0)
#define MLGCFIPGNCI_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xB9ADCE0)

inline static constexpr unsigned int MLGCFIPGNCI_TypeDefinitionIndex = 73506;

	class MLGCFIPGNCI : public ::PPGNDHAAJDO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLGCFIPGNCI_CTOR_OFFSET))(this);
		}

		static ::MLGCFIPGNCI* BPLPBPMEODA(::System::Single a1, ::PBFICKNEGLB a2)
		{
			return ((::MLGCFIPGNCI*(*)(::System::Single, ::PBFICKNEGLB))((::PBYTE)hIl2Cpp + MLGCFIPGNCI_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void StartWithTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MLGCFIPGNCI_STARTWITHTARGET_OFFSET))(this, a1);
		}

	};
