#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPPMPHICDEA_MKBJGIBKKKD_INJGLADIIAD.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/Nullable_1.h"

class GCIMMDDIFBJ;
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define GPPMPHICDEA_MKBJGIBKKKD_ECPJIHGIKOL_1_OFFSET UNITYSDK_OFFSET(0x79F010)
#define GPPMPHICDEA_MKBJGIBKKKD_ECPJIHGIKOL_OFFSET UNITYSDK_OFFSET(0x79EFF0)
#define GPPMPHICDEA_MKBJGIBKKKD_IJLNDDDFNGC_OFFSET UNITYSDK_OFFSET(0x79EF70)
#define GPPMPHICDEA_MKBJGIBKKKD_OGJJMLPKJKH_OFFSET UNITYSDK_OFFSET(0x79F030)
#define GPPMPHICDEA_MKBJGIBKKKD__CTOR_OFFSET UNITYSDK_OFFSET(0x3B58E0)

inline static constexpr unsigned int GPPMPHICDEA_MKBJGIBKKKD_TypeDefinitionIndex = 42611;

struct alignas(4) GPPMPHICDEA_MKBJGIBKKKD
{
	::System::Threading::CancellationToken HPNPIAENAMN; // 0x10
	::GPPMPHICDEA_MKBJGIBKKKD_INJGLADIIAD PNEPHNFHNCC; // 0x18

	::System::Void _ctor(::System::Threading::CancellationToken OMMEALOOOOD, ::GPPMPHICDEA_MKBJGIBKKKD_INJGLADIIAD PNEPHNFHNCC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationToken, ::GPPMPHICDEA_MKBJGIBKKKD_INJGLADIIAD))((::PBYTE)hIl2Cpp + GPPMPHICDEA_MKBJGIBKKKD__CTOR_OFFSET))(this, OMMEALOOOOD, PNEPHNFHNCC);
	}

	::System::Boolean IJLNDDDFNGC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_MKBJGIBKKKD_IJLNDDDFNGC_OFFSET))(this);
	}

	::System::Nullable_1<::System::Threading::CancellationTokenRegistration> ECPJIHGIKOL(::UnityEngine::Animation* AOKJEGNBALI, ::System::String* BLGNOOLDEOF)
	{
		return ((::System::Nullable_1<::System::Threading::CancellationTokenRegistration>(*)(::PVOID, ::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_MKBJGIBKKKD_ECPJIHGIKOL_OFFSET))(this, AOKJEGNBALI, BLGNOOLDEOF);
	}

	::System::Nullable_1<::System::Threading::CancellationTokenRegistration> ECPJIHGIKOL_1(::GCIMMDDIFBJ* AOKJEGNBALI, ::System::String* BLGNOOLDEOF)
	{
		return ((::System::Nullable_1<::System::Threading::CancellationTokenRegistration>(*)(::PVOID, ::GCIMMDDIFBJ*, ::System::String*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_MKBJGIBKKKD_ECPJIHGIKOL_1_OFFSET))(this, AOKJEGNBALI, BLGNOOLDEOF);
	}

	::System::Boolean OGJJMLPKJKH(::GPPMPHICDEA_MKBJGIBKKKD_INJGLADIIAD FCPCLIJNDLA)
	{
		return ((::System::Boolean(*)(::PVOID, ::GPPMPHICDEA_MKBJGIBKKKD_INJGLADIIAD))((::PBYTE)hIl2Cpp + GPPMPHICDEA_MKBJGIBKKKD_OGJJMLPKJKH_OFFSET))(this, FCPCLIJNDLA);
	}
};
