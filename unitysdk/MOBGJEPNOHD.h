#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class MOBGJEPNOHD;
namespace System { class Action; }

#define MOBGJEPNOHD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC2E0530)
#define MOBGJEPNOHD_CTOR_OFFSET UNITYSDK_OFFSET(0xC2E0660)
#define MOBGJEPNOHD_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xC2E0610)
#define MOBGJEPNOHD_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xC2E05B0)

inline static constexpr unsigned int MOBGJEPNOHD_TypeDefinitionIndex = 80103;

	class MOBGJEPNOHD : public ::MLKDDLHNNHH
	{
	public:
		::System::Action* PEIHJAEIGHK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBGJEPNOHD_CTOR_OFFSET))(this);
		}

		static ::MOBGJEPNOHD* BPLPBPMEODA(::System::Action* a1)
		{
			return ((::MOBGJEPNOHD*(*)(::System::Action*))((::PBYTE)hIl2Cpp + MOBGJEPNOHD_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBGJEPNOHD_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBGJEPNOHD_ONCLEAR_OFFSET))(this);
		}

	};
