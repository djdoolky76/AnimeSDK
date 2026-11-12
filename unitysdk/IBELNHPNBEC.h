#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IBELNHPNBEC_ModifyValueStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleScoringDisplayType.h"
#include "unitysdk/RPG/GameCore/ScoringShowType.h"
class BPPEMKKNJCJ;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class BattleScoringChangeParams; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationState; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define IBELNHPNBEC_AEMMOCODPOI_OFFSET UNITYSDK_OFFSET(0x16DD7DA0)
#define IBELNHPNBEC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16DD84F0)
#define IBELNHPNBEC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16DD87B0)
#define IBELNHPNBEC_BIKPOJENBNO_OFFSET UNITYSDK_OFFSET(0x16DD7620)
#define IBELNHPNBEC_BJHHJKNJGOM_OFFSET UNITYSDK_OFFSET(0x16DD8050)
#define IBELNHPNBEC_BOLHIJCDIOG_OFFSET UNITYSDK_OFFSET(0x16DD8360)
#define IBELNHPNBEC_CCTOR_OFFSET UNITYSDK_OFFSET(0x16DD8A90)
#define IBELNHPNBEC_CLDGOKIHILL_OFFSET UNITYSDK_OFFSET(0x16DD7340)
#define IBELNHPNBEC_CTOR_OFFSET UNITYSDK_OFFSET(0x16DD8A40)
#define IBELNHPNBEC_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0x16DD7490)
#define IBELNHPNBEC_FMOJFGEMHCM_OFFSET UNITYSDK_OFFSET(0x16DD7680)
#define IBELNHPNBEC_FOHDONOPDFK_OFFSET UNITYSDK_OFFSET(0x16DD8420)
#define IBELNHPNBEC_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x16DD6CA0)
#define IBELNHPNBEC_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x16DD6CC0)
#define IBELNHPNBEC_HHFDFLEPPNN_OFFSET UNITYSDK_OFFSET(0x16DD7070)
#define IBELNHPNBEC_ILDBHNDGCIJ_OFFSET UNITYSDK_OFFSET(0x16DD7E00)
#define IBELNHPNBEC_INDKDAEMMFA_OFFSET UNITYSDK_OFFSET(0x16DD7B00)
#define IBELNHPNBEC_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x16DD7130)
#define IBELNHPNBEC_KGDIPFNECJH_OFFSET UNITYSDK_OFFSET(0x16DD7280)
#define IBELNHPNBEC_LJDOJCKMMDD_OFFSET UNITYSDK_OFFSET(0x16DD82A0)
#define IBELNHPNBEC_LPADLLEKOEE_OFFSET UNITYSDK_OFFSET(0x16DD7A70)
#define IBELNHPNBEC_MBLKJMFPIEO_OFFSET UNITYSDK_OFFSET(0x16DD7A00)
#define IBELNHPNBEC_MIGCMFNPKHM_OFFSET UNITYSDK_OFFSET(0x16DD76F0)
#define IBELNHPNBEC_NKAFFAJJKIE_OFFSET UNITYSDK_OFFSET(0x16DD7F70)
#define IBELNHPNBEC_NOHNKOBPDDN_OFFSET UNITYSDK_OFFSET(0x16DD6940)
#define IBELNHPNBEC_OBDKJBCFAHM_OFFSET UNITYSDK_OFFSET(0x16DD7900)
#define IBELNHPNBEC_OGMJALJIKNO_OFFSET UNITYSDK_OFFSET(0x16DD7FE0)
#define IBELNHPNBEC_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x16DD6CB0)
#define IBELNHPNBEC__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x16DD6D00)
#define IBELNHPNBEC__ONBIND_OFFSET UNITYSDK_OFFSET(0x16DD66B0)
#define IBELNHPNBEC__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x16DD7240)
#define IBELNHPNBEC__ONTICK_OFFSET UNITYSDK_OFFSET(0x16DD71E0)
#define IBELNHPNBEC__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x16DD6E80)

inline static constexpr unsigned int IBELNHPNBEC_TypeDefinitionIndex = 73557;

	class IBELNHPNBEC : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x60
		::Il2CppArray<::BPPEMKKNJCJ*>* ENAIOFCCCBJ; // 0x68
		::UnityEngine::ParticleSystem* NBMAJJLINGG; // 0x70
		::UnityEngine::UI::Text* JOMIDDFEFDK; // 0x78
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x80
		::UnityEngine::Animation* BAFAAEFEBPJ; // 0x88
		::RPG::GameCore::LevelDataComponent* OOGADIKBBBA; // 0x90
		::UnityEngine::AnimationState* DFGNANDJMGI; // 0x98
		::System::Int32 MIHIDJPABDK; // 0xA0
		::IBELNHPNBEC_ModifyValueStatus MNGCKPBFFBC; // 0xA4
		::RPG::GameCore::ScoringShowType IPBPELECDBK; // 0xA8
		::System::Single OOIDHDNKAFP; // 0xAC
		::System::Int32 DEBFEIKENAO; // 0xB0
		::System::Int32 _Index_k__BackingField; // 0xB4
		::System::Int32 LBDLCOKPMPL; // 0xB8
		::System::Boolean EOCGLLBKHCF; // 0xBC
		::System::Boolean AKBPNMEFGAO; // 0xBD
		::System::Boolean AIAOGICLMDP; // 0xBE
		static ::RPG::GameCore::BattleScoringDisplayType* StaticGet_PGBDJCMFMLA()
		{
			return (::RPG::GameCore::BattleScoringDisplayType*)UnitySDK::FromName("", "IBELNHPNBEC")->GetStaticField(0x9B00);
		}

		static ::RPG::Client::TextID* StaticGet_DNGJPMIKNJN()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("", "IBELNHPNBEC")->GetStaticField(0x9B08);
		}

		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* IIFENECAOBG; // 0x0
		// static const ::System::String* CGNGHKIIGCM; // 0x0
		// static const ::System::String* KOKPKMKKOLE; // 0x0
		// static const ::System::String* MAJLGCMMDJM; // 0x0
		// static const ::System::Object NKIMAJCMKEE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBELNHPNBEC_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBELNHPNBEC_CCTOR_OFFSET))();
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBELNHPNBEC__ONBIND_OFFSET))(this);
		}

		::System::Void NOHNKOBPDDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBELNHPNBEC_NOHNKOBPDDN_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBELNHPNBEC_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IBELNHPNBEC_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBELNHPNBEC_GET_TRANS_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBELNHPNBEC__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBELNHPNBEC__SETUPVIEW_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IBELNHPNBEC_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IBELNHPNBEC__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBELNHPNBEC__ONDISPOSE_OFFSET))(this);
		}

		::System::Void KGDIPFNECJH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IBELNHPNBEC_KGDIPFNECJH_OFFSET))(this, a1);
		}

		::System::Void CLDGOKIHILL(::RPG::GameCore::BattleScoringChangeParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleScoringChangeParams*))((::PBYTE)hIl2Cpp + IBELNHPNBEC_CLDGOKIHILL_OFFSET))(this, a1);
		}

		::System::Void DOFNOIEDPFN(::RPG::GameCore::LevelGameModeStateChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + IBELNHPNBEC_DOFNOIEDPFN_OFFSET))(this, a1);
		}

		::System::Void BIKPOJENBNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBELNHPNBEC_BIKPOJENBNO_OFFSET))(this);
		}

		::System::Void HHFDFLEPPNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBELNHPNBEC_HHFDFLEPPNN_OFFSET))(this);
		}

		::System::Void FMOJFGEMHCM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IBELNHPNBEC_FMOJFGEMHCM_OFFSET))(this, a1);
		}

		::System::Void MIGCMFNPKHM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IBELNHPNBEC_MIGCMFNPKHM_OFFSET))(this, a1);
		}

		::System::Void OBDKJBCFAHM(::RPG::GameCore::BattleScoringChangeParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleScoringChangeParams*))((::PBYTE)hIl2Cpp + IBELNHPNBEC_OBDKJBCFAHM_OFFSET))(this, a1);
		}

		::System::Void MBLKJMFPIEO(::RPG::GameCore::ScoringShowType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScoringShowType))((::PBYTE)hIl2Cpp + IBELNHPNBEC_MBLKJMFPIEO_OFFSET))(this, a1);
		}

		::System::Void INDKDAEMMFA(::IBELNHPNBEC_ModifyValueStatus a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::IBELNHPNBEC_ModifyValueStatus, ::System::Boolean))((::PBYTE)hIl2Cpp + IBELNHPNBEC_INDKDAEMMFA_OFFSET))(this, a1, a2);
		}

		::System::Void AEMMOCODPOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBELNHPNBEC_AEMMOCODPOI_OFFSET))(this);
		}

		::System::Void LPADLLEKOEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBELNHPNBEC_LPADLLEKOEE_OFFSET))(this);
		}

		::System::Void ILDBHNDGCIJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IBELNHPNBEC_ILDBHNDGCIJ_OFFSET))(this, a1);
		}

		::System::Void NKAFFAJJKIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBELNHPNBEC_NKAFFAJJKIE_OFFSET))(this);
		}

		::System::Void OGMJALJIKNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBELNHPNBEC_OGMJALJIKNO_OFFSET))(this);
		}

		::RPG::Client::TextID BJHHJKNJGOM()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + IBELNHPNBEC_BJHHJKNJGOM_OFFSET))(this);
		}

		::System::Void LJDOJCKMMDD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBELNHPNBEC_LJDOJCKMMDD_OFFSET))(this, a1);
		}

		::System::Void BOLHIJCDIOG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBELNHPNBEC_BOLHIJCDIOG_OFFSET))(this, a1);
		}

		::System::Void FOHDONOPDFK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBELNHPNBEC_FOHDONOPDFK_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBELNHPNBEC_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBELNHPNBEC_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
