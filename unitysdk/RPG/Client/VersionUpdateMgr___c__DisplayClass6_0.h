#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJLIOMPMHHI;
class JIAFOPELMJJ;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC67CF0)
#define RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS6_0__GETDOWNLOADALLSIZEWITHBLACKLIST_B__0_OFFSET UNITYSDK_OFFSET(0x1BC6E8A0)

namespace RPG::Client
{
	inline static constexpr unsigned int VersionUpdateMgr___c__DisplayClass6_0_TypeDefinitionIndex = 62667;

	class VersionUpdateMgr___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* taskIds; // 0x10
		::System::Action_2<::System::Int64, ::System::Int64>* callback; // 0x18
		::JIAFOPELMJJ* board; // 0x20
		::EJLIOMPMHHI* queue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Void _GetDownloadAllSizeWithBlackList_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS6_0__GETDOWNLOADALLSIZEWITHBLACKLIST_B__0_OFFSET))(this);
		}

	};
}
