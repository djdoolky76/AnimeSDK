#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LoopGenerator_TrackMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/Client/LoopGenerator_GenerateConfig.h"
#include "unitysdk/RPG/Client/LoopGenerator_MONPJCICDFH.h"
#include "unitysdk/RPG/Client/LoopGenerator_SliderTemplate.h"
namespace RPG::Client { class LoopGenerator_RuntimeSlider; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LOOPGENERATOR_AJAGKOKBPMJ_OFFSET UNITYSDK_OFFSET(0xD4E5550)
#define RPG_CLIENT_LOOPGENERATOR_AWAKE_OFFSET UNITYSDK_OFFSET(0xD4E42A0)
#define RPG_CLIENT_LOOPGENERATOR_BEIIPHJDGPH_OFFSET UNITYSDK_OFFSET(0xD4E4200)
#define RPG_CLIENT_LOOPGENERATOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xD4E6B30)
#define RPG_CLIENT_LOOPGENERATOR_CNGOABKBJKM_OFFSET UNITYSDK_OFFSET(0xD4E5D80)
#define RPG_CLIENT_LOOPGENERATOR_COLLECTALLREFASSETPATH_OFFSET UNITYSDK_OFFSET(0xD4E4020)
#define RPG_CLIENT_LOOPGENERATOR_CTOR_OFFSET UNITYSDK_OFFSET(0xD4E69A0)
#define RPG_CLIENT_LOOPGENERATOR_FNNNGIGFNIK_OFFSET UNITYSDK_OFFSET(0xD4E5800)
#define RPG_CLIENT_LOOPGENERATOR_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xD4E40B0)
#define RPG_CLIENT_LOOPGENERATOR_GINJIIKHKNN_OFFSET UNITYSDK_OFFSET(0xD4E40D0)
#define RPG_CLIENT_LOOPGENERATOR_IHAENAIGJAE_OFFSET UNITYSDK_OFFSET(0xD4E47B0)
#define RPG_CLIENT_LOOPGENERATOR_KCLCNKKKKNG_OFFSET UNITYSDK_OFFSET(0xD4E5DF0)
#define RPG_CLIENT_LOOPGENERATOR_LLLLFHONDPF_OFFSET UNITYSDK_OFFSET(0xD4E4180)
#define RPG_CLIENT_LOOPGENERATOR_MELHIAFPIJF_OFFSET UNITYSDK_OFFSET(0xD4E6190)
#define RPG_CLIENT_LOOPGENERATOR_MNDCJFDCODG_OFFSET UNITYSDK_OFFSET(0xD4E5EB0)
#define RPG_CLIENT_LOOPGENERATOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD4E5380)
#define RPG_CLIENT_LOOPGENERATOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD4E4F00)
#define RPG_CLIENT_LOOPGENERATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD4E46D0)
#define RPG_CLIENT_LOOPGENERATOR_RELEASEALLSLIDERS_OFFSET UNITYSDK_OFFSET(0xD4E4F50)
#define RPG_CLIENT_LOOPGENERATOR_RESETSTATE_OFFSET UNITYSDK_OFFSET(0xD4E45A0)
#define RPG_CLIENT_LOOPGENERATOR_SETTEMPSPEED_OFFSET UNITYSDK_OFFSET(0xD4E6940)
#define RPG_CLIENT_LOOPGENERATOR_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xD4E40C0)
#define RPG_CLIENT_LOOPGENERATOR_SWITCHCONFIG_OFFSET UNITYSDK_OFFSET(0xD4E6630)
#define RPG_CLIENT_LOOPGENERATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0xD4E4740)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopGenerator_TypeDefinitionIndex = 72970;

	class LoopGenerator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::LoopGenerator_TrackMode _TrackMode; // 0x18
		::System::Single Length; // 0x1C
		::UnityEngine::Vector3 StartPos; // 0x20
		::System::Int32 DefaultConfigIndex; // 0x2C
		::System::Collections::Generic::List_1<::System::Object*>* GenerateConfigs; // 0x30
		::System::Int32 CurrentConfigIndex; // 0x38
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* RuntimeSliders; // 0x40
		::System::Collections::Generic::List_1<::System::Object*>* UnusedRuntimeSliders; // 0x48
		::System::Collections::Generic::List_1<::System::Object*>* LastUsedRuntimeSliders; // 0x50
		::System::Single _TimeScale_k__BackingField; // 0x58
		::System::Boolean ALJDNKEIFEE; // 0x5C
		::System::Byte _padding1[0x3];
		::System::Single FOPFCEMDIIE; // 0x60
		::System::Boolean BJAPLEMCIOE; // 0x64
		::System::Byte _padding2[0x3];
		::System::Single LPKLCGLBJDB; // 0x68
		::System::Byte _padding3[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* GGMEFHDMNDO; // 0x70
		::System::Collections::Generic::List_1<::System::Object*>* CIPHCLCEAHN; // 0x78
		::System::Collections::Generic::List_1<::System::Object*>* LDJPMFFAELF; // 0x80
		::UnityEngine::Vector2 EILIBDFLGMP; // 0x88
		::System::Int32 PAHLFAKCIEN; // 0x90
		::System::Int32 GEPLFDHECJK; // 0x94
		::System::Int32 BKGDBEACJJN; // 0x98
		::System::Boolean EMBGOMBBAJD; // 0x9C
		static ::System::Int32* StaticGet_CIFEKCAKFPL()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LoopGenerator")->GetStaticField(0xD6F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_CCTOR_OFFSET))();
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* CollectAllRefAssetPath()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_COLLECTALLREFASSETPATH_OFFSET))(this);
		}

		::System::Single get_TimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_GET_TIMESCALE_OFFSET))(this);
		}

		::System::Void set_TimeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_SET_TIMESCALE_OFFSET))(this, a1);
		}

		::RPG::Client::LoopGenerator_GenerateConfig GINJIIKHKNN()
		{
			return ((::RPG::Client::LoopGenerator_GenerateConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_GINJIIKHKNN_OFFSET))(this);
		}

		::System::Single LLLLFHONDPF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_LLLLFHONDPF_OFFSET))(this);
		}

		::System::Boolean BEIIPHJDGPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_BEIIPHJDGPH_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_ONDESTROY_OFFSET))(this);
		}

		::System::Void IHAENAIGJAE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_IHAENAIGJAE_OFFSET))(this, a1);
		}

		::System::Void AJAGKOKBPMJ(::RPG::Client::LoopGenerator_RuntimeSlider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoopGenerator_RuntimeSlider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_AJAGKOKBPMJ_OFFSET))(this, a1);
		}

		::System::Boolean CNGOABKBJKM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_CNGOABKBJKM_OFFSET))(this);
		}

		::RPG::Client::LoopGenerator_MONPJCICDFH KCLCNKKKKNG(::System::Single a1)
		{
			return ((::RPG::Client::LoopGenerator_MONPJCICDFH(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_KCLCNKKKKNG_OFFSET))(this, a1);
		}

		::RPG::Client::LoopGenerator_RuntimeSlider* MNDCJFDCODG(::RPG::Client::LoopGenerator_SliderTemplate a1)
		{
			return ((::RPG::Client::LoopGenerator_RuntimeSlider*(*)(::PVOID, ::RPG::Client::LoopGenerator_SliderTemplate))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_MNDCJFDCODG_OFFSET))(this, a1);
		}

		::System::Void MELHIAFPIJF(::UnityEngine::GameObject* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_MELHIAFPIJF_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LoopGenerator_RuntimeSlider* FNNNGIGFNIK()
		{
			return ((::RPG::Client::LoopGenerator_RuntimeSlider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_FNNNGIGFNIK_OFFSET))(this);
		}

		::System::Void ReleaseAllSliders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_RELEASEALLSLIDERS_OFFSET))(this);
		}

		::System::Void ResetState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_RESETSTATE_OFFSET))(this);
		}

		::System::Void SwitchConfig(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_SWITCHCONFIG_OFFSET))(this, a1, a2);
		}

		::System::Void SetTempSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_SETTEMPSPEED_OFFSET))(this, a1);
		}

	};
}
