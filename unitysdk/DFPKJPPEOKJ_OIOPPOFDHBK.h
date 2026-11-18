#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define DFPKJPPEOKJ_OIOPPOFDHBK_APKEDNIBHLO_OFFSET UNITYSDK_OFFSET(0x1940FBF0)
#define DFPKJPPEOKJ_OIOPPOFDHBK_DNBIGFNEJHN_OFFSET UNITYSDK_OFFSET(0x1940FC00)
#define DFPKJPPEOKJ_OIOPPOFDHBK_LGLJBCNMOCL_OFFSET UNITYSDK_OFFSET(0x1940FB70)
#define DFPKJPPEOKJ_OIOPPOFDHBK__CTOR_OFFSET UNITYSDK_OFFSET(0x1940FB60)

inline static constexpr unsigned int DFPKJPPEOKJ_OIOPPOFDHBK_TypeDefinitionIndex = 76784;

class DFPKJPPEOKJ_OIOPPOFDHBK : public ::System::Object
{
public:
	::ConfigModuleLib::Runtime::LoadOpHandle PHHDHIBOCKA; // 0x10
	::System::Action_1<::System::Single>* FOAHOFIHCCO; // 0x28
	::System::Single HIDCMABNHHF; // 0x30
	::System::Single DGHGCKCGJAM; // 0x34
	::System::Single MGLOCHEEJJN; // 0x38
	::System::Single CLMNLPKFBFA; // 0x3C
	::System::Single ICPFHBKNEJC; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_OIOPPOFDHBK__CTOR_OFFSET))(this);
	}

	::System::Void LGLJBCNMOCL(::System::Single JNDDJMAHNAI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_OIOPPOFDHBK_LGLJBCNMOCL_OFFSET))(this, JNDDJMAHNAI);
	}

	::System::Void APKEDNIBHLO(::ConfigModuleLib::Runtime::LoadOpHandle DMIAICJPPDL)
	{
		return ((::System::Void(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadOpHandle))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_OIOPPOFDHBK_APKEDNIBHLO_OFFSET))(this, DMIAICJPPDL);
	}

	::System::Void DNBIGFNEJHN(::System::Single JNDDJMAHNAI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_OIOPPOFDHBK_DNBIGFNEJHN_OFFSET))(this, JNDDJMAHNAI);
	}
};
