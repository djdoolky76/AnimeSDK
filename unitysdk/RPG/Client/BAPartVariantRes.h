#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BAPartVariantRes_LoadState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MJMCCBBANDN.h"
class CFCBPHCGEJI;
class KLDLJMJNFHJ;
namespace RPG::Client { class BAPartVariantRef; }
namespace RPG::Client { class BAPartVariantRes; }
namespace RPG::Client { class BatchAnimationVariantAsset; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define RPG_CLIENT_BAPARTVARIANTRES_ACOEGFPLPCJ_OFFSET UNITYSDK_OFFSET(0xC7D2DC0)
#define RPG_CLIENT_BAPARTVARIANTRES_CABHEAGLNDD_OFFSET UNITYSDK_OFFSET(0xC7D2120)
#define RPG_CLIENT_BAPARTVARIANTRES_CCTOR_OFFSET UNITYSDK_OFFSET(0xC7D3360)
#define RPG_CLIENT_BAPARTVARIANTRES_CTOR_OFFSET UNITYSDK_OFFSET(0xC7D32E0)
#define RPG_CLIENT_BAPARTVARIANTRES_FHMALMGDJJM_OFFSET UNITYSDK_OFFSET(0xC7D2B20)
#define RPG_CLIENT_BAPARTVARIANTRES_GGIJLOAIFHK_OFFSET UNITYSDK_OFFSET(0xC7D3200)
#define RPG_CLIENT_BAPARTVARIANTRES_HEHBAIALFHE_OFFSET UNITYSDK_OFFSET(0xC7D2BB0)
#define RPG_CLIENT_BAPARTVARIANTRES_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC7D22A0)
#define RPG_CLIENT_BAPARTVARIANTRES_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xC7D2200)
#define RPG_CLIENT_BAPARTVARIANTRES_LCBBNHFKBAD_OFFSET UNITYSDK_OFFSET(0xC7D21B0)
#define RPG_CLIENT_BAPARTVARIANTRES_LFOFKBGMKBH_OFFSET UNITYSDK_OFFSET(0xC7D2250)
#define RPG_CLIENT_BAPARTVARIANTRES_LNGDBLEKGHG_OFFSET UNITYSDK_OFFSET(0xC7D3270)
#define RPG_CLIENT_BAPARTVARIANTRES_NOFHFKNDBAO_OFFSET UNITYSDK_OFFSET(0xC7D2D30)
#define RPG_CLIENT_BAPARTVARIANTRES_PIDMPPLLAHC_OFFSET UNITYSDK_OFFSET(0xC7D2AA0)
#define RPG_CLIENT_BAPARTVARIANTRES_RESET_OFFSET UNITYSDK_OFFSET(0xC7D2020)

namespace RPG::Client
{
	class BAPartVariantRes : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::BatchAnimationInstance* instance; // 0x10
		::KLDLJMJNFHJ* loadCb; // 0x18
		::Il2CppArray<::CFCBPHCGEJI*>* resLods; // 0x20
		::System::Single fadeTime; // 0x28
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::Client::BAPartVariantRef*>* _loadedRes; // 0x30
		::System::Int32 _currentLod; // 0x38
		::System::Int32 _changeLodMask; // 0x3C
		::System::Boolean _needReleaseRes; // 0x40
		::System::Byte _padding1[0x3];
		::RPG::Client::BAPartVariantRes_LoadState _loadState; // 0x44
		::System::Single _fadeProgress; // 0x48
		::System::Boolean _isFirstFrame; // 0x4C
		::System::Byte _padding2[0x3];
		::UnityEngine::MaterialPropertyBlock* _dithermpb; // 0x50
		static ::System::Int32* StaticGet_CommonPartCount()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "BAPartVariantRes")->GetStaticField(0x7110);
		}

		static ::System::Int32* StaticGet__DitherAlpha()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "BAPartVariantRes")->GetStaticField(0x7114);
		}

		static ::System::Int32* StaticGet__UsingDitherAlpha()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "BAPartVariantRes")->GetStaticField(0x7118);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTRES_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTRES_CCTOR_OFFSET))();
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTRES_RESET_OFFSET))(this);
		}

		::System::Void CABHEAGLNDD(::System::Collections::Generic::Queue_1<::RPG::Client::BAPartVariantRes*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Queue_1<::RPG::Client::BAPartVariantRes*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTRES_CABHEAGLNDD_OFFSET))(this, a1);
		}

		::System::Void LCBBNHFKBAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTRES_LCBBNHFKBAD_OFFSET))(this);
		}

		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTRES_KKKIONIDKFA_OFFSET))(this);
		}

		::System::Void LFOFKBGMKBH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTRES_LFOFKBGMKBH_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::RPG::Client::BatchAnimationVariantAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BatchAnimationVariantAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTRES_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void GGIJLOAIFHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTRES_GGIJLOAIFHK_OFFSET))(this);
		}

		::System::Void LNGDBLEKGHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTRES_LNGDBLEKGHG_OFFSET))(this);
		}

		::System::Void NOFHFKNDBAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTRES_NOFHFKNDBAO_OFFSET))(this);
		}

		::System::Void ACOEGFPLPCJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTRES_ACOEGFPLPCJ_OFFSET))(this, a1);
		}

		::System::Boolean FHMALMGDJJM(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTRES_FHMALMGDJJM_OFFSET))(this, a1, a2);
		}

		::System::Void HEHBAIALFHE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTRES_HEHBAIALFHE_OFFSET))(this, a1);
		}

		::System::Boolean PIDMPPLLAHC(::MJMCCBBANDN a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MJMCCBBANDN, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTRES_PIDMPPLLAHC_OFFSET))(this, a1, a2);
		}

	};
}
