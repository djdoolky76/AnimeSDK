#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKEDJANMOBM_CBLHALGKNJC;
namespace RPG::GameCore { class TimeRewindAudioConfig; }
namespace UnityEngine { class GameObject; }

#define GKEDJANMOBM_AKEJHIHBIDL_OFFSET UNITYSDK_OFFSET(0x15A93B60)
#define GKEDJANMOBM_CTOR_OFFSET UNITYSDK_OFFSET(0x15A93640)
#define GKEDJANMOBM_EOHMFMGKAKI_OFFSET UNITYSDK_OFFSET(0x15A93780)
#define GKEDJANMOBM_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15A93EA0)
#define GKEDJANMOBM_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0x15A93C50)
#define GKEDJANMOBM_KAGHLGOIEIP_OFFSET UNITYSDK_OFFSET(0x15A93730)
#define GKEDJANMOBM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15A93650)
#define GKEDJANMOBM_NFMJCCCBMME_OFFSET UNITYSDK_OFFSET(0x15A93AD0)
#define GKEDJANMOBM_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0x15A93BE0)
#define GKEDJANMOBM_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x15A93D90)

inline static constexpr unsigned int GKEDJANMOBM_TypeDefinitionIndex = 59725;

	class GKEDJANMOBM : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* EAFMEEFNGMM; // 0x10
		::GKEDJANMOBM_CBLHALGKNJC* OAPBFOIHOLL; // 0x18
		::GKEDJANMOBM_CBLHALGKNJC* MEFIDEGHBAO; // 0x20
		::System::Boolean CJCMJAECEKN; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single OEJDOMCKKEO; // 0x2C
		::System::Void _ctor(::RPG::GameCore::TimeRewindAudioConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindAudioConfig*))((::PBYTE)hIl2Cpp + GKEDJANMOBM_CTOR_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::TimeRewindAudioConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindAudioConfig*))((::PBYTE)hIl2Cpp + GKEDJANMOBM_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void KAGHLGOIEIP(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + GKEDJANMOBM_KAGHLGOIEIP_OFFSET))(this, a1);
		}

		::System::Void EOHMFMGKAKI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKEDJANMOBM_EOHMFMGKAKI_OFFSET))(this, a1);
		}

		::System::Void NFMJCCCBMME(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKEDJANMOBM_NFMJCCCBMME_OFFSET))(this, a1);
		}

		::System::Void AKEJHIHBIDL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKEDJANMOBM_AKEJHIHBIDL_OFFSET))(this, a1);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEDJANMOBM_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void IECIAPPANHI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKEDJANMOBM_IECIAPPANHI_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEDJANMOBM_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEDJANMOBM_HADOHLNHHGB_OFFSET))(this);
		}

	};
