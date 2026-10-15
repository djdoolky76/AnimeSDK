#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/IEOOKKEPHFL.h"
class DEIPGFGBEMG;

#define LFFAJPMHLMD_ADNKBFCJMJC_OFFSET UNITYSDK_OFFSET(0x1EC58640)
#define LFFAJPMHLMD_BBFNALCHKKK_OFFSET UNITYSDK_OFFSET(0x1EC58740)
#define LFFAJPMHLMD_BLFHDCNOFGG_OFFSET UNITYSDK_OFFSET(0x1EC588F0)
#define LFFAJPMHLMD_BOEEIOMJGKG_OFFSET UNITYSDK_OFFSET(0x1EC585F0)
#define LFFAJPMHLMD_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC58460)
#define LFFAJPMHLMD_DBIMDIBHNLK_OFFSET UNITYSDK_OFFSET(0x1EC588A0)
#define LFFAJPMHLMD_DCPLHPFGNHB_OFFSET UNITYSDK_OFFSET(0x1EC58490)
#define LFFAJPMHLMD_FJMKAOHGMHH_OFFSET UNITYSDK_OFFSET(0x1EC58A50)
#define LFFAJPMHLMD_PHKDMCBDIGA_OFFSET UNITYSDK_OFFSET(0x1EC58560)

inline static constexpr unsigned int LFFAJPMHLMD_TypeDefinitionIndex = 44202;

	class LFFAJPMHLMD
	{
	public:
		::DEIPGFGBEMG* CDKAEHMOGHO; // 0x50
		::System::Void _ctor(::IEOOKKEPHFL a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEOOKKEPHFL))((::PBYTE)hIl2Cpp + LFFAJPMHLMD_CTOR_OFFSET))(this, a1);
		}

		::System::Void DCPLHPFGNHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFAJPMHLMD_DCPLHPFGNHB_OFFSET))(this);
		}

		::System::Void BOEEIOMJGKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFAJPMHLMD_BOEEIOMJGKG_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask PHKDMCBDIGA()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFAJPMHLMD_PHKDMCBDIGA_OFFSET))(this);
		}

		::System::Void ADNKBFCJMJC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LFFAJPMHLMD_ADNKBFCJMJC_OFFSET))(this, a1);
		}

		::System::Void BBFNALCHKKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFAJPMHLMD_BBFNALCHKKK_OFFSET))(this);
		}

		::System::Void DBIMDIBHNLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFAJPMHLMD_DBIMDIBHNLK_OFFSET))(this);
		}

		::System::Void BLFHDCNOFGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFAJPMHLMD_BLFHDCNOFGG_OFFSET))(this);
		}

		::System::Void FJMKAOHGMHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFAJPMHLMD_FJMKAOHGMHH_OFFSET))(this);
		}

	};
