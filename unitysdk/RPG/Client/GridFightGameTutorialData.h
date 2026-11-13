#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightFunctionNodeType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGameSession; }
namespace RPG::Client { class GridFightGameTutorialTopHintParam; }
namespace RPG::Client { class GridFightTutorialStageConfig; }
namespace RPG::GameCore { class GridFightPrepTutorialSubToastHintParam; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_CLEAROPTASKPARAM_OFFSET UNITYSDK_OFFSET(0x1CD71F80)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD72DA0)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CD71E60)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_GETTUTORIALSTAGECONFIG_OFFSET UNITYSDK_OFFSET(0x1CD72020)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_GET_ISTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1CD72110)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_GET_NEEDBACKTO3C_OFFSET UNITYSDK_OFFSET(0x1CD72200)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_GET_SHOWTOPHINT_OFFSET UNITYSDK_OFFSET(0x1CD72C50)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_GET_SUBTOASTHINTPARAM_OFFSET UNITYSDK_OFFSET(0x1CD72CD0)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_GET_TOPHINTPARAM_OFFSET UNITYSDK_OFFSET(0x1CD72C90)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_GET_TUTORIALNODEVISIBLEDICT_OFFSET UNITYSDK_OFFSET(0x1CD72D60)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_GET_TUTORIALSTAGECONFIGDICT_OFFSET UNITYSDK_OFFSET(0x1CD720D0)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_INIT_OFFSET UNITYSDK_OFFSET(0x1CD71BE0)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISSHOWEXTRAWRONGPOSTAG_OFFSET UNITYSDK_OFFSET(0x1CD72A70)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISTUTORIALFORBIDAUTOSHOWSHOP_OFFSET UNITYSDK_OFFSET(0x1CD72820)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISTUTORIALFORBIDMONSTERREVEAL_OFFSET UNITYSDK_OFFSET(0x1CD72340)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISTUTORIALFORBIDROLESELL_OFFSET UNITYSDK_OFFSET(0x1CD723B0)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISTUTORIALFORBIDROUTESHOW_OFFSET UNITYSDK_OFFSET(0x1CD72990)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISTUTORIALFORBIDSHOWBOSSTOAST_OFFSET UNITYSDK_OFFSET(0x1CD728B0)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISTUTORIALFORBIDSHOWENEMYDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1CD72B20)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISTUTORIALFORBIDSHOWEQUIPRECOMMEND_OFFSET UNITYSDK_OFFSET(0x1CD72920)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISTUTORIALUSETRIALAVATAR_OFFSET UNITYSDK_OFFSET(0x1CD72A00)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_SETCONTEXT_OFFSET UNITYSDK_OFFSET(0x1CD71E10)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_SETNODEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1CD72BC0)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_SETSHOWTOPHINT_OFFSET UNITYSDK_OFFSET(0x1CD72B60)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_SET_SUBTOASTHINTPARAM_OFFSET UNITYSDK_OFFSET(0x1CD72D10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameTutorialData_TypeDefinitionIndex = 67414;

	class GridFightGameTutorialData : public ::System::Object
	{
	public:
		::RPG::Client::GridFightGameTutorialTopHintParam* _TopHintParam; // 0x10
		::RPG::GameCore::GridFightPrepTutorialSubToastHintParam* _SubToastHintParam; // 0x18
		::RPG::Client::GridFightGameSession* _CurSession; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightTutorialStageConfig*>* _TutorialStageConfigDict; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightFunctionNodeType, ::System::Boolean>* _TutorialNodeVisibleDict; // 0x30
		::System::Boolean _ShowTopHint; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_INIT_OFFSET))(this);
		}

		::System::Void SetContext(::RPG::Client::GridFightGameSession* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_SETCONTEXT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::GridFightTutorialStageConfig* GetTutorialStageConfig(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTutorialStageConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_GETTUTORIALSTAGECONFIG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightTutorialStageConfig*>* get_TutorialStageConfigDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightTutorialStageConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_GET_TUTORIALSTAGECONFIGDICT_OFFSET))(this);
		}

		::System::Boolean get_IsTutorial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_GET_ISTUTORIAL_OFFSET))(this);
		}

		::System::Boolean get_NeedBackTo3C()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_GET_NEEDBACKTO3C_OFFSET))(this);
		}

		::System::Boolean IsTutorialForbidMonsterReveal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISTUTORIALFORBIDMONSTERREVEAL_OFFSET))(this);
		}

		::System::Boolean IsTutorialForbidRoleSell(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISTUTORIALFORBIDROLESELL_OFFSET))(this, a1);
		}

		::System::Boolean IsTutorialForbidAutoShowShop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISTUTORIALFORBIDAUTOSHOWSHOP_OFFSET))(this);
		}

		::System::Boolean IsTutorialForbidShowBossToast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISTUTORIALFORBIDSHOWBOSSTOAST_OFFSET))(this);
		}

		::System::Boolean IsTutorialForbidShowEquipRecommend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISTUTORIALFORBIDSHOWEQUIPRECOMMEND_OFFSET))(this);
		}

		::System::Boolean IsTutorialForbidRouteShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISTUTORIALFORBIDROUTESHOW_OFFSET))(this);
		}

		::System::Boolean IsTutorialUseTrialAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISTUTORIALUSETRIALAVATAR_OFFSET))(this);
		}

		::System::Boolean IsShowExtraWrongPosTag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISSHOWEXTRAWRONGPOSTAG_OFFSET))(this);
		}

		::System::Boolean IsTutorialForbidShowEnemyDifficulty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_ISTUTORIALFORBIDSHOWENEMYDIFFICULTY_OFFSET))(this);
		}

		::System::Void ClearOpTaskParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_CLEAROPTASKPARAM_OFFSET))(this);
		}

		::System::Void SetShowTopHint(::System::Boolean a1, ::RPG::Client::GridFightGameTutorialTopHintParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::GridFightGameTutorialTopHintParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_SETSHOWTOPHINT_OFFSET))(this, a1, a2);
		}

		::System::Void SetNodeVisible(::RPG::GameCore::GridFightFunctionNodeType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightFunctionNodeType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_SETNODEVISIBLE_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_ShowTopHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_GET_SHOWTOPHINT_OFFSET))(this);
		}

		::RPG::Client::GridFightGameTutorialTopHintParam* get_TopHintParam()
		{
			return ((::RPG::Client::GridFightGameTutorialTopHintParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_GET_TOPHINTPARAM_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPrepTutorialSubToastHintParam* get_SubToastHintParam()
		{
			return ((::RPG::GameCore::GridFightPrepTutorialSubToastHintParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_GET_SUBTOASTHINTPARAM_OFFSET))(this);
		}

		::System::Void set_SubToastHintParam(::RPG::GameCore::GridFightPrepTutorialSubToastHintParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightPrepTutorialSubToastHintParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_SET_SUBTOASTHINTPARAM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightFunctionNodeType, ::System::Boolean>* get_TutorialNodeVisibleDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightFunctionNodeType, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALDATA_GET_TUTORIALNODEVISIBLEDICT_OFFSET))(this);
		}

	};
}
