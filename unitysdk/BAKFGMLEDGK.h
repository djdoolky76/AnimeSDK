#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
class MDJFAJMPODL;
namespace RPG::GameCore { class TaskContext; }

#define BAKFGMLEDGK_CTOR_OFFSET UNITYSDK_OFFSET(0x15E71270)
#define BAKFGMLEDGK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E71390)
#define BAKFGMLEDGK_JPMGFHJMFKG_OFFSET UNITYSDK_OFFSET(0x15E72670)
#define BAKFGMLEDGK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E714F0)

	class BAKFGMLEDGK
	{
	public:
		::KFELGAIGHAP* HGJLJCFHOIH; // 0x28
		::KFELGAIGHAP* IOJBMHGLOFP; // 0x30
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
