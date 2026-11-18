#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define HBPLKADNEOH_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x17A35700)
#define HBPLKADNEOH_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x17A35750)
#define HBPLKADNEOH__CTOR_OFFSET UNITYSDK_OFFSET(0x17A356F0)

inline static constexpr unsigned int HBPLKADNEOH_TypeDefinitionIndex = 86404;

class HBPLKADNEOH : public ::System::Object
{
public:
	::System::Nullable_1<::UnityEngine::Vector3> IAPPIJNBEBL; // 0x10
	::System::Byte _padding0[0x8];
	::System::Single PEPDIPFAIGF; // 0x20
	::System::Single DNEBAHLFAAI; // 0x24
	::System::Nullable_1<::UnityEngine::Vector3> IDNKONCFFLH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPLKADNEOH__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPLKADNEOH_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean PLPONJAKNEB(::UnityEngine::Vector3 MMGKMLFBMEM, ::UnityEngine::Vector3 NJJNJBLDLBC)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HBPLKADNEOH_PLPONJAKNEB_OFFSET))(this, MMGKMLFBMEM, NJJNJBLDLBC);
	}
};
