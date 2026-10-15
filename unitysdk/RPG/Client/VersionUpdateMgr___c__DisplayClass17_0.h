#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJLIOMPMHHI;
class JIAFOPELMJJ;
namespace System { template <typename T1, typename T2> class Action_2; }

#define RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS17_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE43C8E0)
#define RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS17_0__GETPREDOWNLOADALLSIZE_B__0_OFFSET UNITYSDK_OFFSET(0xE440480)

namespace RPG::Client
{
	inline static constexpr unsigned int VersionUpdateMgr___c__DisplayClass17_0_TypeDefinitionIndex = 61280;

	class VersionUpdateMgr___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::Action_2<::System::Int64, ::System::Int64>* callback; // 0x10
		::EJLIOMPMHHI* queue; // 0x18
		::JIAFOPELMJJ* board; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS17_0_CTOR_OFFSET))(this);
		}

		::System::Void _GetPredownloadAllSize_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS17_0__GETPREDOWNLOADALLSIZE_B__0_OFFSET))(this);
		}

	};
}
