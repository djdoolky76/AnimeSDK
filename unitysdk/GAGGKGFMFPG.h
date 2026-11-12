#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class Transform; }

#define GAGGKGFMFPG_CIJOMANLDLO_OFFSET UNITYSDK_OFFSET(0x1686EFB0)
#define GAGGKGFMFPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1686F060)
#define GAGGKGFMFPG_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0x1686EF50)
#define GAGGKGFMFPG__ONBIND_OFFSET UNITYSDK_OFFSET(0x1686EDA0)
#define GAGGKGFMFPG__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1686ED40)

inline static constexpr unsigned int GAGGKGFMFPG_TypeDefinitionIndex = 73826;

	class GAGGKGFMFPG : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::LocalizedText* EAEFJPKNMJJ; // 0x60
		::UnityEngine::Transform* KKMDAOCHKFF; // 0x68
		::System::Int32 COEMCOBPMKD; // 0x70
		::System::Boolean AKBPNMEFGAO; // 0x74
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGGKGFMFPG_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + GAGGKGFMFPG__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGGKGFMFPG__ONBIND_OFFSET))(this);
		}

		::System::Void NHPDCPKMNAM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GAGGKGFMFPG_NHPDCPKMNAM_OFFSET))(this, a1);
		}

		::System::Void CIJOMANLDLO(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GAGGKGFMFPG_CIJOMANLDLO_OFFSET))(this, a1);
		}

	};
