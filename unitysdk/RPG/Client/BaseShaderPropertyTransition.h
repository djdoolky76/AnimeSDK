#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DitherSourcePriority.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class DEBEAKKOHLN;
class NEOCEOCDEAF;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_AWAKE_OFFSET UNITYSDK_OFFSET(0xC7ECB90)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_CLEARCAMERADITHERALPHA_OFFSET UNITYSDK_OFFSET(0xC7EC690)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_CLEARDITHERALPHA_OFFSET UNITYSDK_OFFSET(0xC7EC560)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_CTOR_OFFSET UNITYSDK_OFFSET(0xC7EDA80)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7ED4A0)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_DPGBCBIBFPA_OFFSET UNITYSDK_OFFSET(0xC7ED330)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_FPCGLOBFPIM_OFFSET UNITYSDK_OFFSET(0xC7EC4C0)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_GETCURRENTDITHERALPHA_OFFSET UNITYSDK_OFFSET(0xC7EB890)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_GETDITHERANIMTIME_OFFSET UNITYSDK_OFFSET(0xC7EB970)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_GETDITHERTRANSITIONINFO_OFFSET UNITYSDK_OFFSET(0xC7EBA80)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_GETOWNERENTITY_OFFSET UNITYSDK_OFFSET(0xC7ECAF0)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_GETTARGETDITHERALPHA_OFFSET UNITYSDK_OFFSET(0xC7EB8E0)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_GET_DITHERTIMESCALE_OFFSET UNITYSDK_OFFSET(0xC7ED9E0)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_GET_GORENDERERCACHE_OFFSET UNITYSDK_OFFSET(0xC7ED9D0)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_GET_ISFORBIDCAMERADITHER_OFFSET UNITYSDK_OFFSET(0xC7EDA00)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_GMFJLFNIDDJ_OFFSET UNITYSDK_OFFSET(0xC7EC340)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_HBPKIAAKMPE_OFFSET UNITYSDK_OFFSET(0xC7EBC40)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_IPFADMBNFLC_OFFSET UNITYSDK_OFFSET(0xC7EC750)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_ISDITHERANIMFINISH_OFFSET UNITYSDK_OFFSET(0xC7EBA20)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_LATETICK_OFFSET UNITYSDK_OFFSET(0xC7ED160)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_LMNDPDPGJFB_OFFSET UNITYSDK_OFFSET(0xC7ED5F0)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_MBLPEHHAKNC_OFFSET UNITYSDK_OFFSET(0xC7ED8A0)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_NBIENICLFAN_OFFSET UNITYSDK_OFFSET(0xC7ED6C0)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_OMAOECNNEIJ_OFFSET UNITYSDK_OFFSET(0xC7ECE80)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC7ECC90)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_ONREFRESHMATERIALS_OFFSET UNITYSDK_OFFSET(0xC7ED3D0)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_RESET_OFFSET UNITYSDK_OFFSET(0xC7ECD40)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_SETDISTANCEDITHERALPHAVALUE_OFFSET UNITYSDK_OFFSET(0xC7EBF20)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_SETDITHERALPHAVALUEWITHANIMATION_OFFSET UNITYSDK_OFFSET(0xC7EC050)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_SETDITHERALPHAVALUE_OFFSET UNITYSDK_OFFSET(0xC7EBFC0)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_SETDITHERTIMESCALE_OFFSET UNITYSDK_OFFSET(0xC7ECB30)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_SETELEVATIONDITHERALPHAVALUE_OFFSET UNITYSDK_OFFSET(0xC7EBBB0)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_SETFINISHCURRENTDITHERTRANSITIONIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xC7EC3F0)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_SETOWNERENTITY_OFFSET UNITYSDK_OFFSET(0xC7EC980)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_SET_DITHERTIMESCALE_OFFSET UNITYSDK_OFFSET(0xC7ED9F0)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_START_OFFSET UNITYSDK_OFFSET(0xC7ECC50)
#define RPG_CLIENT_BASESHADERPROPERTYTRANSITION_TICK_OFFSET UNITYSDK_OFFSET(0xC7ED120)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseShaderPropertyTransition_TypeDefinitionIndex = 68853;

	class BaseShaderPropertyTransition : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _DitherTimeScale_k__BackingField; // 0x18
		::System::Boolean StartDitherAnimation; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Single TargetDitherAlpha; // 0x20
		::System::Single AnimationDuration; // 0x24
		::RPG::Client::DitherSourcePriority CurrentControlSource; // 0x28
		::System::Single ElevationDitherAlpha; // 0x2C
		::System::Single DistanceDitherAlpha; // 0x30
		::System::Boolean IsLogicComponent; // 0x34
		::System::Boolean JOFINGEJFEA; // 0x35
		::System::Boolean IDBEBIDMHME; // 0x36
		::System::Byte _padding1[0x1];
		::System::Int32 NPNJJGOIJNF; // 0x38
		::System::Byte _padding2[0x4];
		::DEBEAKKOHLN* OIDAGBPPNBJ; // 0x40
		::RPG::GameCore::GameEntity* JOIPPIKNILC; // 0x48
		::UnityEngine::MaterialPropertyBlock* KHELAKLGGJL; // 0x50
		::NEOCEOCDEAF* OPPMPMINLDE; // 0x58
		::System::Action* DJNDEALNHLJ; // 0x60
		::System::Single OGALBACFGPH; // 0x68
		::System::Int32 KHDNAOBEOND; // 0x6C
		::RPG::Client::DitherSourcePriority NPJFMPLCHEB; // 0x70
		::System::Boolean GMFFJLCKCMJ; // 0x74
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_CTOR_OFFSET))(this);
		}

		::System::Single GetCurrentDitherAlpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_GETCURRENTDITHERALPHA_OFFSET))(this);
		}

		::System::Single GetTargetDitherAlpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_GETTARGETDITHERALPHA_OFFSET))(this);
		}

		::System::Single GetDitherAnimTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_GETDITHERANIMTIME_OFFSET))(this);
		}

		::System::Boolean IsDitherAnimFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_ISDITHERANIMFINISH_OFFSET))(this);
		}

		::System::Void GetDitherTransitionInfo(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_GETDITHERTRANSITIONINFO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetElevationDitherAlphaValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_SETELEVATIONDITHERALPHAVALUE_OFFSET))(this, a1);
		}

		::System::Void SetDistanceDitherAlphaValue(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_SETDISTANCEDITHERALPHAVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void SetDitherAlphaValue(::System::Single a1, ::RPG::Client::DitherSourcePriority a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::Client::DitherSourcePriority, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_SETDITHERALPHAVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean SetDitherAlphaValueWithAnimation(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4, ::RPG::Client::DitherSourcePriority a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action*, ::RPG::Client::DitherSourcePriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_SETDITHERALPHAVALUEWITHANIMATION_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ClearDitherAlpha()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_CLEARDITHERALPHA_OFFSET))(this);
		}

		::System::Void ClearCameraDitherAlpha()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_CLEARCAMERADITHERALPHA_OFFSET))(this);
		}

		::System::Void SetFinishCurrentDitherTransitionImmediately()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_SETFINISHCURRENTDITHERTRANSITIONIMMEDIATELY_OFFSET))(this);
		}

		::System::Void SetOwnerEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_SETOWNERENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* GetOwnerEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_GETOWNERENTITY_OFFSET))(this);
		}

		::System::Void SetDitherTimeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_SETDITHERTIMESCALE_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_ONDESTROY_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_RESET_OFFSET))(this);
		}

		::System::Void Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_TICK_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_LATETICK_OFFSET))(this, a1);
		}

		::System::Void OnRefreshMaterials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_ONREFRESHMATERIALS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_DISPOSE_OFFSET))(this);
		}

		::System::Void FPCGLOBFPIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_FPCGLOBFPIM_OFFSET))(this);
		}

		::System::Void DPGBCBIBFPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_DPGBCBIBFPA_OFFSET))(this);
		}

		::System::Void OMAOECNNEIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_OMAOECNNEIJ_OFFSET))(this);
		}

		::System::Boolean GMFJLFNIDDJ(::System::Boolean a1, ::RPG::Client::DitherSourcePriority a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::RPG::Client::DitherSourcePriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_GMFJLFNIDDJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean HBPKIAAKMPE(::System::Single a1, ::RPG::Client::DitherSourcePriority a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::RPG::Client::DitherSourcePriority, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_HBPKIAAKMPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LMNDPDPGJFB(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_LMNDPDPGJFB_OFFSET))(this, a1, a2);
		}

		::System::Void NBIENICLFAN(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_NBIENICLFAN_OFFSET))(this, a1, a2);
		}

		::System::Void IPFADMBNFLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_IPFADMBNFLC_OFFSET))(this);
		}

		::System::Void MBLPEHHAKNC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_MBLPEHHAKNC_OFFSET))(this, a1);
		}

		::DEBEAKKOHLN* get_GoRendererCache()
		{
			return ((::DEBEAKKOHLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_GET_GORENDERERCACHE_OFFSET))(this);
		}

		::System::Single get_DitherTimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_GET_DITHERTIMESCALE_OFFSET))(this);
		}

		::System::Void set_DitherTimeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_SET_DITHERTIMESCALE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsForbidCameraDither()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASESHADERPROPERTYTRANSITION_GET_ISFORBIDCAMERADITHER_OFFSET))(this);
		}

	};
}
