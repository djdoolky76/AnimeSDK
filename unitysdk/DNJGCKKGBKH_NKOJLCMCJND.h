#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

#define DNJGCKKGBKH_NKOJLCMCJND_COMPARE_OFFSET UNITYSDK_OFFSET(0x19D7E650)
#define DNJGCKKGBKH_NKOJLCMCJND__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D7E700)
#define DNJGCKKGBKH_NKOJLCMCJND__CTOR_OFFSET UNITYSDK_OFFSET(0x19D7E6F0)

inline static constexpr unsigned int DNJGCKKGBKH_NKOJLCMCJND_TypeDefinitionIndex = 76754;

class DNJGCKKGBKH_NKOJLCMCJND : public ::System::Object
{
public:
	static ::DNJGCKKGBKH_NKOJLCMCJND** StaticGet_HIOPJBKJOIJ()
	{
		return (::DNJGCKKGBKH_NKOJLCMCJND**)Il2CppClass::FromTypeDefinitionIndex(DNJGCKKGBKH_NKOJLCMCJND_TypeDefinitionIndex)->GetStaticField(0x40560);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNJGCKKGBKH_NKOJLCMCJND__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNJGCKKGBKH_NKOJLCMCJND__CCTOR_OFFSET))();
	}

	::System::Int32 Compare(::UnityEngine::Vector3Int GMHFKOELHPL, ::UnityEngine::Vector3Int DIFAIJKOIPG)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + DNJGCKKGBKH_NKOJLCMCJND_COMPARE_OFFSET))(this, GMHFKOELHPL, DIFAIJKOIPG);
	}
};
