#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AudienceGroupInstance_KFOGMJHJEMJ.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/RPG/Client/AudienceLayoutConfig_DensityLevel.h"
#include "unitysdk/RPG/Client/AudienceStanceConfig_CellConfig.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FLCGFGDOAAP;
class FLIGGMCNCHM;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class AudienceLayoutConfig; }
namespace RPG::Client { class AudiencePrefabConfig; }
namespace RPG::Client { class AudienceStanceConfig; }
namespace RPG::GameCore { class LevelAudienceMemberCurveInfo; }
namespace RPG::GameCore { class LevelAudienceMemberInfo; }
namespace RPG::GameCore { class LevelCurveInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_ALGGPFNPOPB_OFFSET UNITYSDK_OFFSET(0xC6AD410)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_CCLFEJBODML_OFFSET UNITYSDK_OFFSET(0xC6ADE20)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_CCTOR_OFFSET UNITYSDK_OFFSET(0xC6B1480)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_COLCCFGLOPC_OFFSET UNITYSDK_OFFSET(0xC6AD190)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_CPKPAGFDGNN_OFFSET UNITYSDK_OFFSET(0xC6B0480)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0xC6B1470)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_DJJODJAAIGA_OFFSET UNITYSDK_OFFSET(0xC6B02A0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_DNACJIEKHFG_OFFSET UNITYSDK_OFFSET(0xC6AD6D0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_EPJOCGBDDHK_OFFSET UNITYSDK_OFFSET(0xC6AD200)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_GETAUDIENCEMOODMAPCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xC6ADCE0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_GET_ID_OFFSET UNITYSDK_OFFSET(0xC6B1400)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_GET_ISSTARTED_OFFSET UNITYSDK_OFFSET(0xC6B13F0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_GET_LAYOUTPATH_OFFSET UNITYSDK_OFFSET(0xC6AB1F0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_GET_MEMBERINFO_OFFSET UNITYSDK_OFFSET(0xC6B1420)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_GET_RENDERERENABLE_OFFSET UNITYSDK_OFFSET(0xC6B1460)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_GET_STANCEPATH_OFFSET UNITYSDK_OFFSET(0xC6AB210)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_GET_VISIBLE_OFFSET UNITYSDK_OFFSET(0xC6B1440)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_JBGDFFIHDIP_OFFSET UNITYSDK_OFFSET(0xC6AD0C0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_JDBLFHJEENE_OFFSET UNITYSDK_OFFSET(0xC6AB280)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_JMGMGNDCLOK_OFFSET UNITYSDK_OFFSET(0xC6AB420)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_KCNIPBCAOJA_OFFSET UNITYSDK_OFFSET(0xC6AD920)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_LOADSAVEDSTATE_OFFSET UNITYSDK_OFFSET(0xC6B11C0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_MENOAGLEENO_OFFSET UNITYSDK_OFFSET(0xC6B1370)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_MPGEHCJNGNN_OFFSET UNITYSDK_OFFSET(0xC6ADBA0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_NJEFDGHLICC_OFFSET UNITYSDK_OFFSET(0xC6AD780)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_NOTIFYANIMGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0xC6B0F70)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC6AAFC0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_ONLAYOUTLOADED_OFFSET UNITYSDK_OFFSET(0xC6AB230)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_ONSTANCELOADED_OFFSET UNITYSDK_OFFSET(0xC6AB3D0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_OOBHKHGLANH_OFFSET UNITYSDK_OFFSET(0xC6B06F0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_RESTART_OFFSET UNITYSDK_OFFSET(0xC6B09D0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_SAVESTATE_OFFSET UNITYSDK_OFFSET(0xC6B1170)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_SETRENDERERENABLE_OFFSET UNITYSDK_OFFSET(0xC6B0DD0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_SET_ID_OFFSET UNITYSDK_OFFSET(0xC6B1410)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_SET_MEMBERINFO_OFFSET UNITYSDK_OFFSET(0xC6B1430)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_SET_VISIBLE_OFFSET UNITYSDK_OFFSET(0xC6B1450)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_STARTUP_OFFSET UNITYSDK_OFFSET(0xC6B0880)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_TICK_OFFSET UNITYSDK_OFFSET(0xC6B0C40)

namespace RPG::Client
{
	inline static constexpr unsigned int AudienceGroupInstance_TypeDefinitionIndex = 69141;

	class AudienceGroupInstance : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::AudienceLayoutConfig* KGDIKFPFFMN; // 0x18
		::RPG::Client::AudienceStanceConfig* JKBAKAOKELK; // 0x20
		::RPG::GameCore::LevelCurveInstance* PNOHBBMHGLB; // 0x28
		::System::Boolean HKOPHLNFBIO; // 0x30
		::System::Byte _padding0[0x7];
		::FLCGFGDOAAP* MHAEBFAEFCG; // 0x38
		::System::Collections::Generic::List_1<::FLIGGMCNCHM*>* CHGEEINKDII; // 0x40
		::RPG::Client::AudienceGroupInstance_KFOGMJHJEMJ PHJGDGGICLI; // 0x48
		::System::Boolean BLPDPHFBBIJ; // 0x58
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::NPCBodySize, ::System::Int32>* IBNFLLDOHMI; // 0x60
		::System::String* clipGroupName; // 0x68
		::Il2CppArray<::System::Object*>* areas; // 0x70
		::System::UInt32 _ID_k__BackingField; // 0x78
		::System::Byte _padding2[0x4];
		::RPG::GameCore::LevelAudienceMemberInfo* _MemberInfo_k__BackingField; // 0x80
		::System::Boolean _Visible_k__BackingField; // 0x88
		static ::Il2CppArray<::System::String*>** StaticGet_CrowdQualityStrs()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.Client", "AudienceGroupInstance")->GetStaticField(0x58990);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_CCTOR_OFFSET))();
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_ONDESTROY_OFFSET))(this);
		}

		::System::String* get_LayoutPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_GET_LAYOUTPATH_OFFSET))(this);
		}

		::System::String* get_StancePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_GET_STANCEPATH_OFFSET))(this);
		}

		::System::Void OnLayoutLoaded(::RPG::Client::AudienceLayoutConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudienceLayoutConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_ONLAYOUTLOADED_OFFSET))(this, a1);
		}

		::System::Void OnStanceLoaded(::RPG::Client::AudienceStanceConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudienceStanceConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_ONSTANCELOADED_OFFSET))(this, a1);
		}

		::System::Void JMGMGNDCLOK(::RPG::Client::AudienceLayoutConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudienceLayoutConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_JMGMGNDCLOK_OFFSET))(this, a1);
		}

		::System::Void CCLFEJBODML(::RPG::Client::AudienceLayoutConfig* a1, ::RPG::GameCore::LevelCurveInstance* a2, ::Il2CppArray<::RPG::GameCore::LevelAudienceMemberCurveInfo*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudienceLayoutConfig*, ::RPG::GameCore::LevelCurveInstance*, ::Il2CppArray<::RPG::GameCore::LevelAudienceMemberCurveInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_CCLFEJBODML_OFFSET))(this, a1, a2, a3);
		}

		static ::System::String* MPGEHCJNGNN(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_MPGEHCJNGNN_OFFSET))(a1);
		}

		::System::Boolean JBGDFFIHDIP(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_JBGDFFIHDIP_OFFSET))(this, a1, a2);
		}

		::System::Void EPJOCGBDDHK(::Collections::Pooled::PooledList_1<::System::Int32>* a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::Client::AudienceLayoutConfig_DensityLevel a4)
		{
			return ((::System::Void(*)(::PVOID, ::Collections::Pooled::PooledList_1<::System::Int32>*, ::System::Int32, ::System::Int32, ::RPG::Client::AudienceLayoutConfig_DensityLevel))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_EPJOCGBDDHK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::UnityEngine::Vector2, ::System::Object*>>* DNACJIEKHFG(::UnityEngine::Vector2 a1, ::RPG::Client::AudienceStanceConfig_CellConfig a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::UnityEngine::Vector2, ::System::Object*>>*(*)(::PVOID, ::UnityEngine::Vector2, ::RPG::Client::AudienceStanceConfig_CellConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_DNACJIEKHFG_OFFSET))(this, a1, a2);
		}

		::RPG::Client::AudienceStanceConfig_CellConfig ALGGPFNPOPB(::System::Int32 a1)
		{
			return ((::RPG::Client::AudienceStanceConfig_CellConfig(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_ALGGPFNPOPB_OFFSET))(this, a1);
		}

		::System::String* KCNIPBCAOJA(::RPG::GameCore::NPCBodySize a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_KCNIPBCAOJA_OFFSET))(this, a1);
		}

		::RPG::Client::AudiencePrefabConfig* NJEFDGHLICC(::RPG::Client::AudienceLayoutConfig* a1, ::RPG::GameCore::NPCBodySize a2)
		{
			return ((::RPG::Client::AudiencePrefabConfig*(*)(::PVOID, ::RPG::Client::AudienceLayoutConfig*, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_NJEFDGHLICC_OFFSET))(this, a1, a2);
		}

		::RPG::Client::AudienceLayoutConfig_DensityLevel COLCCFGLOPC(::RPG::Client::AudienceLayoutConfig* a1)
		{
			return ((::RPG::Client::AudienceLayoutConfig_DensityLevel(*)(::PVOID, ::RPG::Client::AudienceLayoutConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_COLCCFGLOPC_OFFSET))(this, a1);
		}

		::System::Boolean CPKPAGFDGNN(::RPG::Client::AudienceLayoutConfig* a1, ::RPG::GameCore::NPCBodySize a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AudienceLayoutConfig*, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_CPKPAGFDGNN_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 DJJODJAAIGA(::RPG::Client::AudienceLayoutConfig_DensityLevel a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::RPG::Client::AudienceLayoutConfig_DensityLevel, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_DJJODJAAIGA_OFFSET))(a1, a2);
		}

		static ::System::Single OOBHKHGLANH()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_OOBHKHGLANH_OFFSET))();
		}

		::System::Void Startup(::FLCGFGDOAAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLCGFGDOAAP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_STARTUP_OFFSET))(this, a1);
		}

		::System::Void Restart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_RESTART_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_TICK_OFFSET))(this, a1);
		}

		::System::Void SetRendererEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_SETRENDERERENABLE_OFFSET))(this, a1);
		}

		::System::Void NotifyAnimGroupChanged(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_NOTIFYANIMGROUPCHANGED_OFFSET))(this, a1);
		}

		::System::Void SaveState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_SAVESTATE_OFFSET))(this);
		}

		::System::Void LoadSavedState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_LOADSAVEDSTATE_OFFSET))(this);
		}

		::System::String* GetAudienceMoodMapConfigPath(::RPG::Client::AudiencePrefabConfig* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::AudiencePrefabConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_GETAUDIENCEMOODMAPCONFIGPATH_OFFSET))(this, a1);
		}

		::System::Void JDBLFHJEENE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_JDBLFHJEENE_OFFSET))(this);
		}

		::System::Void MENOAGLEENO(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_MENOAGLEENO_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsStarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_GET_ISSTARTED_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelAudienceMemberInfo* get_MemberInfo()
		{
			return ((::RPG::GameCore::LevelAudienceMemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_GET_MEMBERINFO_OFFSET))(this);
		}

		::System::Void set_MemberInfo(::RPG::GameCore::LevelAudienceMemberInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelAudienceMemberInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_SET_MEMBERINFO_OFFSET))(this, a1);
		}

		::System::Boolean get_Visible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_GET_VISIBLE_OFFSET))(this);
		}

		::System::Void set_Visible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_SET_VISIBLE_OFFSET))(this, a1);
		}

		::System::Boolean get_RendererEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_GET_RENDERERENABLE_OFFSET))(this);
		}

	};
}
