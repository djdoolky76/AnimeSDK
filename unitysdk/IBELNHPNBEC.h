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

#define IBELNHPNBEC_AEMMOCODPOI_OFFSET UNITYSDK_OFFSET(0x15E21480)
#define IBELNHPNBEC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15E21980)
#define IBELNHPNBEC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15E21C40)
#define IBELNHPNBEC_BIKPOJENBNO_OFFSET UNITYSDK_OFFSET(0x15E20E00)
#define IBELNHPNBEC_BJHHJKNJGOM_OFFSET UNITYSDK_OFFSET(0x15E214E0)
#define IBELNHPNBEC_BOLHIJCDIOG_OFFSET UNITYSDK_OFFSET(0x15E217F0)
#define IBELNHPNBEC_CCTOR_OFFSET UNITYSDK_OFFSET(0x15E21F10)
#define IBELNHPNBEC_CLDGOKIHILL_OFFSET UNITYSDK_OFFSET(0x15E20A30)
#define IBELNHPNBEC_CTOR_OFFSET UNITYSDK_OFFSET(0x15E21EC0)
#define IBELNHPNBEC_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0x15E20C80)
#define IBELNHPNBEC_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15E20330)
#define IBELNHPNBEC_FMOJFGEMHCM_OFFSET UNITYSDK_OFFSET(0x15E21310)
#define IBELNHPNBEC_FOHDONOPDFK_OFFSET UNITYSDK_OFFSET(0x15E218B0)
#define IBELNHPNBEC_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x15E20150)
#define IBELNHPNBEC_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x15E20170)
#define IBELNHPNBEC_HHFDFLEPPNN_OFFSET UNITYSDK_OFFSET(0x15E20520)
#define IBELNHPNBEC_ILDBHNDGCIJ_OFFSET UNITYSDK_OFFSET(0x15E207D0)
#define IBELNHPNBEC_INDKDAEMMFA_OFFSET UNITYSDK_OFFSET(0x15E20E60)
#define IBELNHPNBEC_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x15E20650)
#define IBELNHPNBEC_KGDIPFNECJH_OFFSET UNITYSDK_OFFSET(0x15E20970)
#define IBELNHPNBEC_LJDOJCKMMDD_OFFSET UNITYSDK_OFFSET(0x15E21730)
#define IBELNHPNBEC_LPADLLEKOEE_OFFSET UNITYSDK_OFFSET(0x15E213F0)
#define IBELNHPNBEC_MBLKJMFPIEO_OFFSET UNITYSDK_OFFSET(0x15E21380)
#define IBELNHPNBEC_MIGCMFNPKHM_OFFSET UNITYSDK_OFFSET(0x15E21100)
#define IBELNHPNBEC_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x15E201B0)
#define IBELNHPNBEC_NKAFFAJJKIE_OFFSET UNITYSDK_OFFSET(0x15E20700)
#define IBELNHPNBEC_NOHNKOBPDDN_OFFSET UNITYSDK_OFFSET(0x15E1FDF0)
#define IBELNHPNBEC_OBDKJBCFAHM_OFFSET UNITYSDK_OFFSET(0x15E20B80)
#define IBELNHPNBEC_OGMJALJIKNO_OFFSET UNITYSDK_OFFSET(0x15E205E0)
#define IBELNHPNBEC_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x15E20160)
#define IBELNHPNBEC__ONBIND_OFFSET UNITYSDK_OFFSET(0x15E1FCE0)
#define IBELNHPNBEC__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x15E20930)
#define IBELNHPNBEC__ONTICK_OFFSET UNITYSDK_OFFSET(0x15E20770)

inline static constexpr unsigned int IBELNHPNBEC_TypeDefinitionIndex = 71569;

	class IBELNHPNBEC : public ::FMPCODLIOLG
	{
	public:
		::Il2CppArray<::BPPEMKKNJCJ*>* ENAIOFCCCBJ; // 0x60
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x68
		::RPG::GameCore::LevelDataComponent* OOGADIKBBBA; // 0x70
		::UnityEngine::AnimationState* DFGNANDJMGI; // 0x78
		::UnityEngine::UI::Text* JOMIDDFEFDK; // 0x80
		::UnityEngine::Animation* BAFAAEFEBPJ; // 0x88
		::UnityEngine::ParticleSystem* NBMAJJLINGG; // 0x90
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x98
		::RPG::GameCore::ScoringShowType IPBPELECDBK; // 0xA0
		::System::Boolean AKBPNMEFGAO; // 0xA4
		::System::Boolean AIAOGICLMDP; // 0xA5
		::System::Boolean EOCGLLBKHCF; // 0xA6
		::System::Byte _padding0[0x1];
		::IBELNHPNBEC_ModifyValueStatus MNGCKPBFFBC; // 0xA8
		::System::Int32 _Index_k__BackingField; // 0xAC
		::System::Int32 DEBFEIKENAO; // 0xB0
		::System::Int32 MIHIDJPABDK; // 0xB4
		::System::Int32 LBDLCOKPMPL; // 0xB8
		::System::Single OOIDHDNKAFP; // 0xBC
		static ::RPG::Client::TextID* StaticGet_DNGJPMIKNJN()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("", "IBELNHPNBEC")->GetStaticField(0xBDD0);
		}

		static ::RPG::GameCore::BattleScoringDisplayType* StaticGet_PGBDJCMFMLA()
		{
			return (::RPG::GameCore::BattleScoringDisplayType*)UnitySDK::FromName("", "IBELNHPNBEC")->GetStaticField(0xBDE0);
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

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBELNHPNBEC_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBELNHPNBEC_EKGCGIDIFJJ_OFFSET))(this);
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
