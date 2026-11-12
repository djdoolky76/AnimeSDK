#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJLIOMPMHHI;
class JIAFOPELMJJ;
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xEF00C30)
#define RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS5_0__GETDOWNLOADALLSIZE_B__0_OFFSET UNITYSDK_OFFSET(0xEF07910)

namespace RPG::Client
{
	inline static constexpr unsigned int VersionUpdateMgr___c__DisplayClass5_0_TypeDefinitionIndex = 62666;

	class VersionUpdateMgr___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::JIAFOPELMJJ* board; // 0x10
		::System::Action_1<::System::Int64>* callback; // 0x18
		::EJLIOMPMHHI* queue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void _GetDownloadAllSize_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS5_0__GETDOWNLOADALLSIZE_B__0_OFFSET))(this);
		}

	};
}
