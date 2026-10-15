#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJFIKOKBCCA.h"
class KFELGAIGHAP;
class MDJICBJCOGE;
namespace RPG::GameCore { class TaskContext; }

#define GAJCCEPJLJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1593CEC0)
#define GAJCCEPJLJE_LMEKNGLCPCN_OFFSET UNITYSDK_OFFSET(0x1593D1D0)
#define GAJCCEPJLJE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1593CEF0)

inline static constexpr unsigned int GAJCCEPJLJE_TypeDefinitionIndex = 52878;

	class GAJCCEPJLJE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MDJICBJCOGE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MDJICBJCOGE*))((::PBYTE)hIl2Cpp + GAJCCEPJLJE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJCCEPJLJE_ONTASKBEGIN_OFFSET))(this);
		}

		static ::KJFIKOKBCCA LMEKNGLCPCN(::KFELGAIGHAP* a1)
		{
			return ((::KJFIKOKBCCA(*)(::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + GAJCCEPJLJE_LMEKNGLCPCN_OFFSET))(a1);
		}

	};
