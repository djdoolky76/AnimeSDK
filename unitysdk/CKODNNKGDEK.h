#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHMPGNHBBLC.h"
#include "unitysdk/System/Object.h"
class CKODNNKGDEK;
class NLIOPBPOBHB;
class ONPOFJPEBMJ;
namespace RPG::Client { class IRogueTournGameLevelLayer; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CKODNNKGDEK_CTOR_OFFSET UNITYSDK_OFFSET(0xD76CAC0)
#define CKODNNKGDEK_DHLIKKJLOJJ_OFFSET UNITYSDK_OFFSET(0xD76CC20)
#define CKODNNKGDEK_GET_CURLAYER_OFFSET UNITYSDK_OFFSET(0xD76CC60)
#define CKODNNKGDEK_GET_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xD76CBE0)
#define CKODNNKGDEK_GET_LAYERS_OFFSET UNITYSDK_OFFSET(0xD76CCA0)
#define CKODNNKGDEK_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xD76CBA0)
#define CKODNNKGDEK_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xD76CA30)
#define CKODNNKGDEK_SYNCFULL_OFFSET UNITYSDK_OFFSET(0xD76CB00)
#define CKODNNKGDEK_SYNCINCREMENTAL_OFFSET UNITYSDK_OFFSET(0xD76CB50)

	class CKODNNKGDEK : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelLayer*>* _Layers_k__BackingField; // 0x10
		static ::CKODNNKGDEK** StaticGet_FLMODBLFAGD()
		{
			return (::CKODNNKGDEK**)UnitySDK::FromName("", "CKODNNKGDEK")->GetStaticField(0x49C60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKODNNKGDEK_CTOR_OFFSET))(this);
		}

		static ::CKODNNKGDEK* GGBLHEHJBDO()
		{
			return ((::CKODNNKGDEK*(*)())((::PBYTE)hIl2Cpp + CKODNNKGDEK_GGBLHEHJBDO_OFFSET))();
		}

		::System::Void SyncFull(::ONPOFJPEBMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONPOFJPEBMJ*))((::PBYTE)hIl2Cpp + CKODNNKGDEK_SYNCFULL_OFFSET))(this, a1);
		}

		::System::Void SyncIncremental(::NLIOPBPOBHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLIOPBPOBHB*))((::PBYTE)hIl2Cpp + CKODNNKGDEK_SYNCINCREMENTAL_OFFSET))(this, a1);
		}

		::NHMPGNHBBLC get_Status()
		{
			return ((::NHMPGNHBBLC(*)(::PVOID))((::PBYTE)hIl2Cpp + CKODNNKGDEK_GET_STATUS_OFFSET))(this);
		}

		::System::UInt32 get_LayerCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKODNNKGDEK_GET_LAYERCOUNT_OFFSET))(this);
		}

		::System::UInt32 DHLIKKJLOJJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKODNNKGDEK_DHLIKKJLOJJ_OFFSET))(this);
		}

		::RPG::Client::IRogueTournGameLevelLayer* get_CurLayer()
		{
			return ((::RPG::Client::IRogueTournGameLevelLayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKODNNKGDEK_GET_CURLAYER_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelLayer*>* get_Layers()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelLayer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKODNNKGDEK_GET_LAYERS_OFFSET))(this);
		}

	};
