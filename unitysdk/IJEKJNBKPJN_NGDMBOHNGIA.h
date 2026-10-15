#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJEKJNBKPJN_LOHGPAPLCHA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
class DEBEAKKOHLN;
class IJEKJNBKPJN;
class KLKMCNOECAL;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelNPCPossessionInfo; }
namespace RPG::GameCore { class PossessionConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define IJEKJNBKPJN_NGDMBOHNGIA_CKCLHEIEGJD_OFFSET UNITYSDK_OFFSET(0x16466720)
#define IJEKJNBKPJN_NGDMBOHNGIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1645DA90)
#define IJEKJNBKPJN_NGDMBOHNGIA_DBAEIGPJAGL_OFFSET UNITYSDK_OFFSET(0x16466BC0)
#define IJEKJNBKPJN_NGDMBOHNGIA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16464C80)
#define IJEKJNBKPJN_NGDMBOHNGIA_DNMAHMCLKFC_OFFSET UNITYSDK_OFFSET(0x16466ED0)
#define IJEKJNBKPJN_NGDMBOHNGIA_EGKNKHEANAN_OFFSET UNITYSDK_OFFSET(0x16463900)
#define IJEKJNBKPJN_NGDMBOHNGIA_GFIJGKKMMIP_OFFSET UNITYSDK_OFFSET(0x164626C0)
#define IJEKJNBKPJN_NGDMBOHNGIA_HHKKAOJKGHH_OFFSET UNITYSDK_OFFSET(0x16464AE0)
#define IJEKJNBKPJN_NGDMBOHNGIA_HIONDOHGILM_OFFSET UNITYSDK_OFFSET(0x1645CE20)
#define IJEKJNBKPJN_NGDMBOHNGIA_HMBAAFHNFDH_OFFSET UNITYSDK_OFFSET(0x16466E70)
#define IJEKJNBKPJN_NGDMBOHNGIA_IBMCDLEBFIC_OFFSET UNITYSDK_OFFSET(0x16466270)
#define IJEKJNBKPJN_NGDMBOHNGIA_INEBDDNHCOE_OFFSET UNITYSDK_OFFSET(0x16466DE0)
#define IJEKJNBKPJN_NGDMBOHNGIA_JDKCDJNJAOL_OFFSET UNITYSDK_OFFSET(0x16465EF0)
#define IJEKJNBKPJN_NGDMBOHNGIA_KDCFGABEEOD_OFFSET UNITYSDK_OFFSET(0x164666A0)
#define IJEKJNBKPJN_NGDMBOHNGIA_LKELMCDNIPD_OFFSET UNITYSDK_OFFSET(0x1645C820)
#define IJEKJNBKPJN_NGDMBOHNGIA_LPECCHEODPF_OFFSET UNITYSDK_OFFSET(0x16466570)
#define IJEKJNBKPJN_NGDMBOHNGIA_MHFCKDHKLIA_OFFSET UNITYSDK_OFFSET(0x164665D0)
#define IJEKJNBKPJN_NGDMBOHNGIA_NMHMIKIICEA_OFFSET UNITYSDK_OFFSET(0x16466FB0)
#define IJEKJNBKPJN_NGDMBOHNGIA_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x16465F00)

inline static constexpr unsigned int IJEKJNBKPJN_NGDMBOHNGIA_TypeDefinitionIndex = 57146;

	class IJEKJNBKPJN_NGDMBOHNGIA : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* JOIPPIKNILC; // 0x10
		::KLKMCNOECAL* FMMGLEKLHML; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* POLGHOLICMA; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* IBIHAHMDJOG; // 0x28
		::RPG::GameCore::LevelNPCPossessionInfo* OOLIBINJNHI; // 0x30
		::IJEKJNBKPJN_LOHGPAPLCHA DHNLFNGPPHE; // 0x38
		::System::String* GEJIJFFILEB; // 0x48
		::UnityEngine::GameObject* AFGEEDIJOJF; // 0x50
		::UnityEngine::Animator* APPGGMLEPLN; // 0x58
		::UnityEngine::Transform* LLKDMBLKFPM; // 0x60
		::RPG::GameCore::PossessionConfigRow* LGECLNIGGFH; // 0x68
		::IJEKJNBKPJN* JHFKOHNKLMH; // 0x70
		::System::String* ODHMHECLFCO; // 0x78
		::System::Action_1<::UnityEngine::GameObject*>* LMONILAPCFA; // 0x80
		::System::String* KHHGBMCHGPL; // 0x88
		::DEBEAKKOHLN* OIDAGBPPNBJ; // 0x90
		::UnityEngine::Vector3 MFMKGEIJFNF; // 0x98
		::System::Boolean DIMECBLLOGB; // 0xA4
		::System::Boolean OCFKLDHGPHA; // 0xA5
		::System::Byte _padding0[0x2];
		::UnityEngine::Quaternion CHKMEHAGLJL; // 0xA8
		::UnityEngine::Vector3 EDHPDNPMDFC; // 0xB8
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::IJEKJNBKPJN* a2, ::RPG::GameCore::LevelNPCPossessionInfo* a3, ::RPG::GameCore::PossessionConfigRow* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::IJEKJNBKPJN*, ::RPG::GameCore::LevelNPCPossessionInfo*, ::RPG::GameCore::PossessionConfigRow*))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_NGDMBOHNGIA_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean JDKCDJNJAOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_NGDMBOHNGIA_JDKCDJNJAOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_NGDMBOHNGIA_DISPOSE_OFFSET))(this);
		}

		::System::Void EGKNKHEANAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_NGDMBOHNGIA_EGKNKHEANAN_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_NGDMBOHNGIA_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void HIONDOHGILM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_NGDMBOHNGIA_HIONDOHGILM_OFFSET))(this);
		}

		::System::Void HHKKAOJKGHH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_NGDMBOHNGIA_HHKKAOJKGHH_OFFSET))(this, a1);
		}

		::System::Void LKELMCDNIPD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_NGDMBOHNGIA_LKELMCDNIPD_OFFSET))(this, a1);
		}

		::System::Void MHFCKDHKLIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_NGDMBOHNGIA_MHFCKDHKLIA_OFFSET))(this);
		}

		::System::Void GFIJGKKMMIP(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_NGDMBOHNGIA_GFIJGKKMMIP_OFFSET))(this, a1, a2);
		}

		::System::Void IBMCDLEBFIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_NGDMBOHNGIA_IBMCDLEBFIC_OFFSET))(this);
		}

		::System::Void KDCFGABEEOD(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_NGDMBOHNGIA_KDCFGABEEOD_OFFSET))(this, a1);
		}

		::System::Void DBAEIGPJAGL(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_NGDMBOHNGIA_DBAEIGPJAGL_OFFSET))(this, a1, a2);
		}

		::System::Void CKCLHEIEGJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_NGDMBOHNGIA_CKCLHEIEGJD_OFFSET))(this);
		}

		::System::Void INEBDDNHCOE(::RPG::GameCore::CharacterModelComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterModelComponent*))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_NGDMBOHNGIA_INEBDDNHCOE_OFFSET))(this, a1);
		}

		::System::Void HMBAAFHNFDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_NGDMBOHNGIA_HMBAAFHNFDH_OFFSET))(this);
		}

		::System::Void LPECCHEODPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_NGDMBOHNGIA_LPECCHEODPF_OFFSET))(this);
		}

		::System::Void DNMAHMCLKFC(::UnityEngine::Renderer* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_NGDMBOHNGIA_DNMAHMCLKFC_OFFSET))(this, a1, a2);
		}

		::System::Void NMHMIKIICEA(::UnityEngine::Renderer* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_NGDMBOHNGIA_NMHMIKIICEA_OFFSET))(this, a1, a2);
		}

	};
