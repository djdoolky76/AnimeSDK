#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
class MDJFAJMPODL;
namespace RPG::GameCore { class TaskContext; }

#define BAKFGMLEDGK_CTOR_OFFSET UNITYSDK_OFFSET(0x199DC2D0)
#define BAKFGMLEDGK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x199DC3F0)
#define BAKFGMLEDGK_JPMGFHJMFKG_OFFSET UNITYSDK_OFFSET(0x199DD6C0)
#define BAKFGMLEDGK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x199DC550)

inline static constexpr unsigned int BAKFGMLEDGK_TypeDefinitionIndex = 56235;

	class BAKFGMLEDGK
	{
	public:
		::KFELGAIGHAP* IOJBMHGLOFP; // 0x28
		::KFELGAIGHAP* HGJLJCFHOIH; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MDJFAJMPODL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MDJFAJMPODL*))((::PBYTE)hIl2Cpp + BAKFGMLEDGK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKFGMLEDGK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKFGMLEDGK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean JPMGFHJMFKG(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BAKFGMLEDGK_JPMGFHJMFKG_OFFSET))(this, a1);
		}

	};
