#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class Transform; }

#define GAGGKGFMFPG_CIJOMANLDLO_OFFSET UNITYSDK_OFFSET(0x1592FE50)
#define GAGGKGFMFPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1592FF00)
#define GAGGKGFMFPG_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x1592FC70)
#define GAGGKGFMFPG_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0x1592FDF0)
#define GAGGKGFMFPG__ONBIND_OFFSET UNITYSDK_OFFSET(0x1592FCD0)

inline static constexpr unsigned int GAGGKGFMFPG_TypeDefinitionIndex = 71805;

	class GAGGKGFMFPG : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::LocalizedText* EAEFJPKNMJJ; // 0x60
		::UnityEngine::Transform* KKMDAOCHKFF; // 0x68
		::System::Boolean AKBPNMEFGAO; // 0x70
		::System::Byte _padding0[0x3];
		::System::Int32 COEMCOBPMKD; // 0x74
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGGKGFMFPG_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + GAGGKGFMFPG_DHHDFAAJMMC_OFFSET))(this, a1);
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
