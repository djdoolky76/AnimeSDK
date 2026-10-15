#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class LoopTowerAnimBehavior_CLNGNPDGIHJ; }
namespace RPG::Client { class LoopTowerAnimBehavior_LoopTowerSlide; }
namespace RPG::Client { class LoopTowerAnimMonoPlugin; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xD4E3C00)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_CMMLLEFOFFK_1_OFFSET UNITYSDK_OFFSET(0xD4E3E10)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_CMMLLEFOFFK_OFFSET UNITYSDK_OFFSET(0xD4E3BB0)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xD4E4E90)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_EDJPJIEMFGD_OFFSET UNITYSDK_OFFSET(0xD4E1D10)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_EPHLGLKBMHF_OFFSET UNITYSDK_OFFSET(0xD4E23A0)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xD4E2320)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_HBEPKJGPCHF_OFFSET UNITYSDK_OFFSET(0xD4E3AE0)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_HFMALHCIGHI_OFFSET UNITYSDK_OFFSET(0xD4E2E70)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_HMPABFMDGAH_OFFSET UNITYSDK_OFFSET(0xD4E1640)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_IFFPBDHNDIK_OFFSET UNITYSDK_OFFSET(0xD4E39D0)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_IKEIFJKJDFM_OFFSET UNITYSDK_OFFSET(0xD4E1840)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xD4E4DD0)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xD4E3C70)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xD4E43E0)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xD4E4E30)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_PADPGDLBDFD_OFFSET UNITYSDK_OFFSET(0xD4E1540)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xD4E4380)
#define RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xD4E4440)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopTowerAnimBehavior_TypeDefinitionIndex = 70917;

	class LoopTowerAnimBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _TowerSliders; // 0x38
		::RPG::Client::LoopTowerAnimBehavior_CLNGNPDGIHJ* _RandomBezierCurveGenerator; // 0x40
		::UnityEngine::Vector3 _UpDir; // 0x48
		::System::Single _RotateY; // 0x54
		::System::Single _TotalTime; // 0x58
		::System::Boolean _ForceAsignNext; // 0x5C
		::System::Byte _padding0[0x3];
		::System::Int32 _ForceAsignNextIndex; // 0x60
		static ::System::Boolean* StaticGet_DisableShakeSource()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "LoopTowerAnimBehavior")->GetStaticField(0x5430);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void PADPGDLBDFD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_PADPGDLBDFD_OFFSET))(this, a1);
		}

		::System::Void HMPABFMDGAH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_HMPABFMDGAH_OFFSET))(this, a1);
		}

		::System::Boolean IKEIFJKJDFM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_IKEIFJKJDFM_OFFSET))(this);
		}

		::System::Boolean EDJPJIEMFGD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_EDJPJIEMFGD_OFFSET))(this);
		}

		::RPG::Client::LoopTowerAnimBehavior_LoopTowerSlide* HFMALHCIGHI()
		{
			return ((::RPG::Client::LoopTowerAnimBehavior_LoopTowerSlide*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_HFMALHCIGHI_OFFSET))(this);
		}

		static ::System::Void EPHLGLKBMHF(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_EPHLGLKBMHF_OFFSET))(a1);
		}

		static ::System::Void IFFPBDHNDIK(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_IFFPBDHNDIK_OFFSET))(a1);
		}

		::System::Void HBEPKJGPCHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_HBEPKJGPCHF_OFFSET))(this);
		}

		::System::Void CMMLLEFOFFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_CMMLLEFOFFK_OFFSET))(this);
		}

		::System::Void CMMLLEFOFFK_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_CMMLLEFOFFK_1_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::RPG::Client::LoopTowerAnimMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::LoopTowerAnimMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
