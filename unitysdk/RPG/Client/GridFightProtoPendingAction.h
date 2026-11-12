#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPreparationPendingAction.h"
class CHCHAJIANIM;
class CJLEJIGIKOF;

#define RPG_CLIENT_GRIDFIGHTPROTOPENDINGACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDC42060)
#define RPG_CLIENT_GRIDFIGHTPROTOPENDINGACTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0xDC42010)
#define RPG_CLIENT_GRIDFIGHTPROTOPENDINGACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xDC41FC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightProtoPendingAction_TypeDefinitionIndex = 66716;

	class GridFightProtoPendingAction : public ::RPG::Client::GridFightPreparationPendingAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROTOPENDINGACTION_CTOR_OFFSET))(this);
		}

		::System::Void Update(::CHCHAJIANIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHCHAJIANIM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROTOPENDINGACTION_UPDATE_OFFSET))(this, a1);
		}

		::System::Void SyncHandleRsp(::CJLEJIGIKOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJLEJIGIKOF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROTOPENDINGACTION_SYNCHANDLERSP_OFFSET))(this, a1);
		}

	};
}
