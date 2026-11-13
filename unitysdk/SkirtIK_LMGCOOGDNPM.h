#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class SkirtIK;
namespace UnityEngine { class MonoBehaviour; }

#define SKIRTIK_LMGCOOGDNPM_COPYTO_OFFSET UNITYSDK_OFFSET(0x1AC3AA40)
#define SKIRTIK_LMGCOOGDNPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC32340)
#define SKIRTIK_LMGCOOGDNPM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AC3AAF0)

inline static constexpr unsigned int SkirtIK_LMGCOOGDNPM_TypeDefinitionIndex = 48279;

	class SkirtIK_LMGCOOGDNPM : public ::System::Object
	{
	public:
		::System::Single OEHIALMOMPN; // 0x10
		::System::Single GOGHLCLFIDM; // 0x14
		::System::Single EKGOPHADBMP; // 0x18
		::System::Single NMMCJAFDNPG; // 0x1C
		::System::Single GJJFGBGAKKN; // 0x20
		::System::Single FKPKPNKHGLP; // 0x24
		::System::Void _ctor(::SkirtIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SkirtIK*))((::PBYTE)hIl2Cpp + SKIRTIK_LMGCOOGDNPM_CTOR_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + SKIRTIK_LMGCOOGDNPM_COPYTO_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_LMGCOOGDNPM_DISPOSE_OFFSET))(this);
		}

	};
