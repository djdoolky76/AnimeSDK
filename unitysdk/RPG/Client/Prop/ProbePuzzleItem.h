#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class PKLHDDGKKOC;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x17452210)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x17452200)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_INIT_OFFSET UNITYSDK_OFFSET(0x174518C0)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_IPKEKKIJBJL_OFFSET UNITYSDK_OFFSET(0x17451EC0)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_LINAFDLFKLM_OFFSET UNITYSDK_OFFSET(0x17451F10)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x174520F0)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17451FE0)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETDISTANCELV_OFFSET UNITYSDK_OFFSET(0x17451670)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETROTATERATIO_OFFSET UNITYSDK_OFFSET(0x17451860)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETROTATETARGETATCONSTANTSPEED_OFFSET UNITYSDK_OFFSET(0x17451AF0)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETSCANCALLBACK_OFFSET UNITYSDK_OFFSET(0x17451620)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETTREASUREFIND_OFFSET UNITYSDK_OFFSET(0x17451720)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETTREASURE_OFFSET UNITYSDK_OFFSET(0x17451D40)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETTRIGGERDISAPPEAR_OFFSET UNITYSDK_OFFSET(0x1744EF60)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETTRIGGERSCAN_OFFSET UNITYSDK_OFFSET(0x174517C0)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x17451D90)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ProbePuzzleItem_TypeDefinitionIndex = 81514;

	class ProbePuzzleItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _rotateRatio; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* AIALICECJOJ; // 0x20
		::PKLHDDGKKOC* NAHOHKAHBPK; // 0x28
		::System::Action_1<::System::Single>* LNBDGMFCHAP; // 0x30
		::UnityEngine::Quaternion KICIGEMOJKB; // 0x38
		::UnityEngine::Quaternion LEEFKBFPEHL; // 0x48
		::System::Single DCNOGDMDJGF; // 0x58
		::System::Single DJIKPFCFAPO; // 0x5C
		static ::System::String** StaticGet_CJBKIMGOPOK()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "ProbePuzzleItem")->GetStaticField(0x5D3A0);
		}

		static ::System::String** StaticGet_GCJJAOGJPFG()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "ProbePuzzleItem")->GetStaticField(0x5D3A8);
		}

		static ::System::String** StaticGet_EFLNDNGCCGN()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "ProbePuzzleItem")->GetStaticField(0x5D3B0);
		}

		static ::System::String** StaticGet_LNDCCOAHLEN()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "ProbePuzzleItem")->GetStaticField(0x5D3B8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_CCTOR_OFFSET))();
		}

		::System::Void Init(::PKLHDDGKKOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKLHDDGKKOC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_INIT_OFFSET))(this, a1);
		}

		::System::Void SetTreasure(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETTREASURE_OFFSET))(this, a1);
		}

		::System::Void SetRotateRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETROTATERATIO_OFFSET))(this, a1);
		}

		::System::Void SetTreasureFind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETTREASUREFIND_OFFSET))(this);
		}

		::System::Void SetTriggerScan()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETTRIGGERSCAN_OFFSET))(this);
		}

		::System::Void SetTriggerDisappear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETTRIGGERDISAPPEAR_OFFSET))(this);
		}

		::System::Void SetDistanceLv(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETDISTANCELV_OFFSET))(this, a1);
		}

		::System::Void SetRotateTargetAtConstantSpeed(::UnityEngine::Transform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETROTATETARGETATCONSTANTSPEED_OFFSET))(this, a1, a2);
		}

		::System::Void SetScanCallBack(::System::Action_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETSCANCALLBACK_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_UPDATE_OFFSET))(this);
		}

		::System::Void IPKEKKIJBJL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_IPKEKKIJBJL_OFFSET))(this, a1);
		}

		::System::Void LINAFDLFKLM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_LINAFDLFKLM_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_ONDISABLE_OFFSET))(this);
		}

	};
}
