#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEffectPluginNumber; }
namespace RPG::Client { class MonoEffectPluginNumber_RendererDigitData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MonoBehaviour; }

#define PGAMAPPLPKF_CJIFNBGABEF_OFFSET UNITYSDK_OFFSET(0xC21BF50)
#define PGAMAPPLPKF_CTOR_OFFSET UNITYSDK_OFFSET(0xC21C710)
#define PGAMAPPLPKF_EEEAKGNDPDO_OFFSET UNITYSDK_OFFSET(0xC21C270)
#define PGAMAPPLPKF_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0xC21C6F0)
#define PGAMAPPLPKF_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xC21C4C0)
#define PGAMAPPLPKF_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0xC21BEC0)
#define PGAMAPPLPKF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC21BE50)
#define PGAMAPPLPKF_LLGMBGIFKNH_OFFSET UNITYSDK_OFFSET(0xC21C530)
#define PGAMAPPLPKF_PGJDCHNGHNK_OFFSET UNITYSDK_OFFSET(0xC21BFB0)
#define PGAMAPPLPKF_SET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0xC21C700)

	class PGAMAPPLPKF : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* FIPFGHCFNCD; // 0x18
		::System::Int32 _CurrentValue_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGAMAPPLPKF_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + PGAMAPPLPKF_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void KLIOBGEPFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGAMAPPLPKF_KLIOBGEPFEH_OFFSET))(this);
		}

		::System::Void CJIFNBGABEF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PGAMAPPLPKF_CJIFNBGABEF_OFFSET))(this, a1);
		}

		::System::Void PGJDCHNGHNK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PGAMAPPLPKF_PGJDCHNGHNK_OFFSET))(this, a1);
		}

		::System::Void EEEAKGNDPDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGAMAPPLPKF_EEEAKGNDPDO_OFFSET))(this);
		}

		::System::Void LLGMBGIFKNH(::RPG::Client::MonoEffectPluginNumber_RendererDigitData* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginNumber_RendererDigitData*, ::System::Int32))((::PBYTE)hIl2Cpp + PGAMAPPLPKF_LLGMBGIFKNH_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_CurrentValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGAMAPPLPKF_GET_CURRENTVALUE_OFFSET))(this);
		}

		::System::Void set_CurrentValue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PGAMAPPLPKF_SET_CURRENTVALUE_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEffectPluginNumber* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginNumber*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGAMAPPLPKF_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
