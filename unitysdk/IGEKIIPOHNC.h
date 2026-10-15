#pragma once
#include "unitysdk/unitysdk.h"
class IKPALOKEGAA;
class NGFHCJIAOLH;
namespace RPG::GameCore { class TaskContext; }

#define IGEKIIPOHNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1640B010)
#define IGEKIIPOHNC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1640B5F0)
#define IGEKIIPOHNC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1640B090)

	class IGEKIIPOHNC
	{
	public:
		::NGFHCJIAOLH* NFJGMKPFPOC; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IKPALOKEGAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IKPALOKEGAA*))((::PBYTE)hIl2Cpp + IGEKIIPOHNC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGEKIIPOHNC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGEKIIPOHNC_DISPOSE_OFFSET))(this);
		}

	};
