#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/ParkourGame/EffectConfig.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CFALFIPEHJH;
class DGAPILJDBON;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginCharaMaterialBlock; }
namespace RPG::Client::ParkourGame { class MonoParkourEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CEHPHKFBPCG_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0xC9DE0D0)
#define CEHPHKFBPCG_AGFMCIDDGNF_OFFSET UNITYSDK_OFFSET(0xC9DCE90)
#define CEHPHKFBPCG_APIIPMLKMIG_OFFSET UNITYSDK_OFFSET(0xC9DD1D0)
#define CEHPHKFBPCG_BGEBEKMJIPD_OFFSET UNITYSDK_OFFSET(0xC9DDBA0)
#define CEHPHKFBPCG_CALNFPMKHIB_OFFSET UNITYSDK_OFFSET(0xC9DE330)
#define CEHPHKFBPCG_CCTOR_OFFSET UNITYSDK_OFFSET(0xC9DEA90)
#define CEHPHKFBPCG_CTOR_OFFSET UNITYSDK_OFFSET(0xC9DD4B0)
#define CEHPHKFBPCG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC9DD520)
#define CEHPHKFBPCG_EJAINBJHGEJ_OFFSET UNITYSDK_OFFSET(0xC9DDE50)
#define CEHPHKFBPCG_HJCJOJFAELB_OFFSET UNITYSDK_OFFSET(0xC9DDFB0)
#define CEHPHKFBPCG_JCDPDHIHEJK_OFFSET UNITYSDK_OFFSET(0xC9DC890)
#define CEHPHKFBPCG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC9DE4F0)
#define CEHPHKFBPCG_KFAODCNFCHE_OFFSET UNITYSDK_OFFSET(0xC9DE060)
#define CEHPHKFBPCG_LBIMLFMAJPL_OFFSET UNITYSDK_OFFSET(0xC9DD680)
#define CEHPHKFBPCG_LICHDOMHPBE_OFFSET UNITYSDK_OFFSET(0xC9DE3A0)
#define CEHPHKFBPCG_LNEGHAPLHOI_OFFSET UNITYSDK_OFFSET(0xC9DE280)
#define CEHPHKFBPCG_NHBBDMIKBEL_OFFSET UNITYSDK_OFFSET(0xC9DCFC0)
#define CEHPHKFBPCG_POBAGGGKFHM_OFFSET UNITYSDK_OFFSET(0xC9DDF00)

	class CEHPHKFBPCG : public ::System::Object
	{
	public:
		::RPG::Client::ParkourGame::MonoParkourEffect* HECGJKBHOMI; // 0x10
		::RPG::Client::AttachPointMapping* KHJHNEEFBKL; // 0x18
		::RPG::Client::MonoEffectPluginCharaMaterialBlock* KIMKBICIOLN; // 0x20
		::System::Collections::Generic::List_1<::DGAPILJDBON*>* APPIAANONPF; // 0x28
		::RPG::Client::MonoEffectPluginCharaMaterialBlock* JOMNCDLEPND; // 0x30
		::CFALFIPEHJH* CFKHNPGEAJA; // 0x38
		::RPG::Client::MonoEffectPluginCharaMaterialBlock* CBLCKEJELCF; // 0x40
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_NFLGONJHPBB()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)UnitySDK::FromName("", "CEHPHKFBPCG")->GetStaticField(0x1A6A0);
		}

		::System::Void _ctor(::CFALFIPEHJH* a1, ::RPG::Client::AttachPointMapping* a2, ::RPG::Client::ParkourGame::MonoParkourEffect* a3)
		{
			return ((::System::Void(*)(::PVOID, ::CFALFIPEHJH*, ::RPG::Client::AttachPointMapping*, ::RPG::Client::ParkourGame::MonoParkourEffect*))((::PBYTE)hIl2Cpp + CEHPHKFBPCG_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEHPHKFBPCG_CCTOR_OFFSET))();
		}

		static ::System::Void JCDPDHIHEJK(::UnityEngine::Transform* a1, ::RPG::Client::ParkourGame::EffectConfig a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::RPG::Client::ParkourGame::EffectConfig, ::System::String*))((::PBYTE)hIl2Cpp + CEHPHKFBPCG_JCDPDHIHEJK_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AGFMCIDDGNF(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CEHPHKFBPCG_AGFMCIDDGNF_OFFSET))(a1);
		}

		static ::System::Void NHBBDMIKBEL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEHPHKFBPCG_NHBBDMIKBEL_OFFSET))();
		}

		static ::System::Void APIIPMLKMIG(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CEHPHKFBPCG_APIIPMLKMIG_OFFSET))(a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHPHKFBPCG_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::MonoEffect* LBIMLFMAJPL()
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHPHKFBPCG_LBIMLFMAJPL_OFFSET))(this);
		}

		::RPG::Client::MonoEffect* EJAINBJHGEJ(::System::Func_1<::System::Boolean>* a1)
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CEHPHKFBPCG_EJAINBJHGEJ_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEffect* POBAGGGKFHM(::System::Func_1<::System::Boolean>* a1)
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CEHPHKFBPCG_POBAGGGKFHM_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEffect* HJCJOJFAELB()
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHPHKFBPCG_HJCJOJFAELB_OFFSET))(this);
		}

		::System::Void KFAODCNFCHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHPHKFBPCG_KFAODCNFCHE_OFFSET))(this);
		}

		::RPG::Client::MonoEffect* LNEGHAPLHOI()
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHPHKFBPCG_LNEGHAPLHOI_OFFSET))(this);
		}

		::System::Void CALNFPMKHIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHPHKFBPCG_CALNFPMKHIB_OFFSET))(this);
		}

		::RPG::Client::MonoEffect* BGEBEKMJIPD(::System::String* a1, ::RPG::Client::ParkourGame::EffectConfig a2, ::System::Func_1<::System::Boolean>* a3)
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::System::String*, ::RPG::Client::ParkourGame::EffectConfig, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CEHPHKFBPCG_BGEBEKMJIPD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AALCFBOGFKP(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CEHPHKFBPCG_AALCFBOGFKP_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CEHPHKFBPCG_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Int32 LICHDOMHPBE(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CEHPHKFBPCG_LICHDOMHPBE_OFFSET))(this, a1);
		}

	};
