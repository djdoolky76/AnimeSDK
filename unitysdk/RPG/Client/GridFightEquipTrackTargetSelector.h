#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCMCEDELOJL;
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKTARGETSELECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0xD11E240)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKTARGETSELECTOR_GETSELECTORTARGET_OFFSET UNITYSDK_OFFSET(0xD11CF60)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKTARGETSELECTOR__COMPAREROLE_OFFSET UNITYSDK_OFFSET(0xD12A8F0)

namespace RPG::Client
{
	class GridFightEquipTrackTargetSelector : public ::System::Object
	{
	public:
		::GCMCEDELOJL* _TrackContext; // 0x10
		::System::Void _ctor(::GCMCEDELOJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCMCEDELOJL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKTARGETSELECTOR_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGridMember* GetSelectorTarget(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightGridMember*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKTARGETSELECTOR_GETSELECTORTARGET_OFFSET))(this, a1);
		}

		::System::Int32 _CompareRole(::RPG::Client::GridFightRole* a1, ::RPG::Client::GridFightRole* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightRole*, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKTARGETSELECTOR__COMPAREROLE_OFFSET))(this, a1, a2);
		}

	};
}
