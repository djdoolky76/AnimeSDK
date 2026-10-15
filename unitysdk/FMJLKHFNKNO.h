#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DEBEAKKOHLN;
namespace RPG::Client { class CharacterShaderPropertyTransition; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ResidentPossessionInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define FMJLKHFNKNO_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x1585FF00)
#define FMJLKHFNKNO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1585F7E0)
#define FMJLKHFNKNO_CTOR_OFFSET UNITYSDK_OFFSET(0x15860BE0)
#define FMJLKHFNKNO_DNLCAJNDJKF_OFFSET UNITYSDK_OFFSET(0x1585FDF0)
#define FMJLKHFNKNO_EMLCILLOPDF_OFFSET UNITYSDK_OFFSET(0x15860AF0)
#define FMJLKHFNKNO_GFIJGKKMMIP_OFFSET UNITYSDK_OFFSET(0x1585FF80)
#define FMJLKHFNKNO_GFNFOFCJFMN_OFFSET UNITYSDK_OFFSET(0x15860A30)
#define FMJLKHFNKNO_HIONDOHGILM_OFFSET UNITYSDK_OFFSET(0x158600A0)
#define FMJLKHFNKNO_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0x1585FC90)
#define FMJLKHFNKNO_HMBAAFHNFDH_OFFSET UNITYSDK_OFFSET(0x158609D0)
#define FMJLKHFNKNO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1585FB60)
#define FMJLKHFNKNO_LPECCHEODPF_OFFSET UNITYSDK_OFFSET(0x1585FEA0)
#define FMJLKHFNKNO_ONCANCELSPAWN_OFFSET UNITYSDK_OFFSET(0x15860500)
#define FMJLKHFNKNO_ONSPAWNASYNC_OFFSET UNITYSDK_OFFSET(0x15860540)
#define FMJLKHFNKNO_PEECNCABGFD_OFFSET UNITYSDK_OFFSET(0x1585F8C0)
#define FMJLKHFNKNO_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x15860BA0)

	class FMJLKHFNKNO : public ::System::Object
	{
	public:
		::System::String* KHHGBMCHGPL; // 0x10
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* POLGHOLICMA; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* IBIHAHMDJOG; // 0x28
		::UnityEngine::GameObject* AFGEEDIJOJF; // 0x30
		::UnityEngine::Transform* OEPDOMNEOHO; // 0x38
		::System::String* BEGBPEHAEDM; // 0x40
		::RPG::GameCore::ResidentPossessionInfo* IGHAHBNLIJA; // 0x48
		::UnityEngine::Animator* APPGGMLEPLN; // 0x50
		::DEBEAKKOHLN* OIDAGBPPNBJ; // 0x58
		::RPG::Client::CharacterShaderPropertyTransition* EPOBIDJNGOL; // 0x60
		::System::String* ODHMHECLFCO; // 0x68
		::UnityEngine::Quaternion KCBAMAPIPFI; // 0x70
		::System::Boolean GGCFLAOOJNN; // 0x80
		::System::Byte _padding0[0x3];
		::System::Single CKIDJOPJMBP; // 0x84
		::UnityEngine::Vector3 FPILBEAAACE; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJLKHFNKNO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJLKHFNKNO_CLEAR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::RPG::Client::CharacterShaderPropertyTransition* a2, ::UnityEngine::Transform* a3, ::RPG::GameCore::ResidentPossessionInfo* a4, ::System::Boolean a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::CharacterShaderPropertyTransition*, ::UnityEngine::Transform*, ::RPG::GameCore::ResidentPossessionInfo*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + FMJLKHFNKNO_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void HKEPJLDBGIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJLKHFNKNO_HKEPJLDBGIG_OFFSET))(this);
		}

		::System::Void PEECNCABGFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJLKHFNKNO_PEECNCABGFD_OFFSET))(this);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FMJLKHFNKNO_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void GFIJGKKMMIP(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FMJLKHFNKNO_GFIJGKKMMIP_OFFSET))(this, a1, a2);
		}

		::System::Void HIONDOHGILM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJLKHFNKNO_HIONDOHGILM_OFFSET))(this);
		}

		::System::Void OnCancelSpawn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJLKHFNKNO_ONCANCELSPAWN_OFFSET))(this);
		}

		::System::Void OnSpawnAsync(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FMJLKHFNKNO_ONSPAWNASYNC_OFFSET))(this, a1);
		}

		::System::Void GFNFOFCJFMN(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + FMJLKHFNKNO_GFNFOFCJFMN_OFFSET))(this, a1);
		}

		::System::Void EMLCILLOPDF(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FMJLKHFNKNO_EMLCILLOPDF_OFFSET))(this, a1, a2);
		}

		::System::Void HMBAAFHNFDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJLKHFNKNO_HMBAAFHNFDH_OFFSET))(this);
		}

		::System::Void LPECCHEODPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJLKHFNKNO_LPECCHEODPF_OFFSET))(this);
		}

		::System::Boolean UseLightWeightDeactive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJLKHFNKNO_USELIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		static ::System::Void DNLCAJNDJKF(::UnityEngine::Transform* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + FMJLKHFNKNO_DNLCAJNDJKF_OFFSET))(a1, a2);
		}

	};
