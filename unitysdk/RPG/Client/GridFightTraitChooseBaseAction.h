#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingSelectableBaseAction.h"
class CJLEJIGIKOF;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_ADDFINISHACTION_OFFSET UNITYSDK_OFFSET(0x1D3EB410)
#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_ADDHANDLERSPACTION_OFFSET UNITYSDK_OFFSET(0x1D3EB4D0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3EB2C0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_FINISH_OFFSET UNITYSDK_OFFSET(0x1D3EB350)
#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_GETSCRIPTPATH_OFFSET UNITYSDK_OFFSET(0x1D3EB570)
#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_GET_EFFECTID_OFFSET UNITYSDK_OFFSET(0x1D3EB600)
#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_GET_TRAITID_OFFSET UNITYSDK_OFFSET(0x1D3EB5E0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_REMOVEFINISHACTION_OFFSET UNITYSDK_OFFSET(0x1D3EB480)
#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_SET_EFFECTID_OFFSET UNITYSDK_OFFSET(0x1D3EB610)
#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_SET_TRAITID_OFFSET UNITYSDK_OFFSET(0x1D3EB5F0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0x1D3EB2D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitChooseBaseAction_TypeDefinitionIndex = 67138;

	class GridFightTraitChooseBaseAction : public ::RPG::Client::GridFightPendingSelectableBaseAction
	{
	public:
		::System::Action* _OnFinishAction; // 0x18
		::System::Action_1<::System::Boolean>* _HandleRspAction; // 0x20
		::System::UInt32 _TraitID_k__BackingField; // 0x28
		::System::UInt32 _EffectID_k__BackingField; // 0x2C
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void SyncHandleRsp(::CJLEJIGIKOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJLEJIGIKOF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_SYNCHANDLERSP_OFFSET))(this, a1);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_FINISH_OFFSET))(this);
		}

		::System::Void AddFinishAction(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_ADDFINISHACTION_OFFSET))(this, a1);
		}

		::System::Void RemoveFinishAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_REMOVEFINISHACTION_OFFSET))(this);
		}

		::System::Void AddHandleRspAction(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_ADDHANDLERSPACTION_OFFSET))(this, a1);
		}

		::System::String* GetScriptPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_GETSCRIPTPATH_OFFSET))(this);
		}

		::System::UInt32 get_TraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_GET_TRAITID_OFFSET))(this);
		}

		::System::Void set_TraitID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_SET_TRAITID_OFFSET))(this, a1);
		}

		::System::UInt32 get_EffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_GET_EFFECTID_OFFSET))(this);
		}

		::System::Void set_EffectID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEBASEACTION_SET_EFFECTID_OFFSET))(this, a1);
		}

	};
}
