#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IDisposable; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GGOGEJEONBA_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x1CE94AD0)
#define GGOGEJEONBA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CE949F0)
#define GGOGEJEONBA_PJKOPDDLPPE_OFFSET UNITYSDK_OFFSET(0x1CE831A0)
#define GGOGEJEONBA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE94EE0)

inline static constexpr unsigned int GGOGEJEONBA_TypeDefinitionIndex = 34737;

class GGOGEJEONBA : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::IDisposable*>* BAKMOAKCFOJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGOGEJEONBA__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGOGEJEONBA_DISPOSE_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD(::System::Boolean PNDILEHAIJP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GGOGEJEONBA_BJANDJKKNCD_OFFSET))(this, PNDILEHAIJP);
	}

	::System::Void PJKOPDDLPPE(::System::IDisposable* HGMJDNGIGLM)
	{
		return ((::System::Void(*)(::PVOID, ::System::IDisposable*))((::PBYTE)hIl2Cpp + GGOGEJEONBA_PJKOPDDLPPE_OFFSET))(this, HGMJDNGIGLM);
	}
};
