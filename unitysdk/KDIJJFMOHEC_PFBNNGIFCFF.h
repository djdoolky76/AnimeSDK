#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::ActivityHipplen { class MonoHipplenGameBall; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }

#define KDIJJFMOHEC_PFBNNGIFCFF_CNIDLPKAEAD_OFFSET UNITYSDK_OFFSET(0xB361800)
#define KDIJJFMOHEC_PFBNNGIFCFF_CTOR_OFFSET UNITYSDK_OFFSET(0xB362EB0)
#define KDIJJFMOHEC_PFBNNGIFCFF_DBKGCJLIDFN_OFFSET UNITYSDK_OFFSET(0xB363450)
#define KDIJJFMOHEC_PFBNNGIFCFF_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB360860)
#define KDIJJFMOHEC_PFBNNGIFCFF_HGNBFGOFKAC_OFFSET UNITYSDK_OFFSET(0xB362DC0)
#define KDIJJFMOHEC_PFBNNGIFCFF_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0xB35FBA0)
#define KDIJJFMOHEC_PFBNNGIFCFF_HJCPDIACGEJ_OFFSET UNITYSDK_OFFSET(0xB360FB0)
#define KDIJJFMOHEC_PFBNNGIFCFF_INIJCJJLPKM_OFFSET UNITYSDK_OFFSET(0xB362E30)
#define KDIJJFMOHEC_PFBNNGIFCFF_JELOHMFIOHP_OFFSET UNITYSDK_OFFSET(0xB362CA0)
#define KDIJJFMOHEC_PFBNNGIFCFF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB362D40)
#define KDIJJFMOHEC_PFBNNGIFCFF_KHGDELPMIDA_OFFSET UNITYSDK_OFFSET(0xB362980)
#define KDIJJFMOHEC_PFBNNGIFCFF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB362EC0)
#define KDIJJFMOHEC_PFBNNGIFCFF_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0xB35FB40)
#define KDIJJFMOHEC_PFBNNGIFCFF_LHMFOOPLELC_OFFSET UNITYSDK_OFFSET(0xB3631F0)
#define KDIJJFMOHEC_PFBNNGIFCFF_MPFKCHHCIMO_OFFSET UNITYSDK_OFFSET(0xB361050)

inline static constexpr unsigned int KDIJJFMOHEC_PFBNNGIFCFF_TypeDefinitionIndex = 75566;

	class KDIJJFMOHEC_PFBNNGIFCFF : public ::System::Object
	{
	public:
		::UnityEngine::Rigidbody* HPAGDLDHKFC; // 0x10
		::RPG::Client::ActivityHipplen::MonoHipplenGameBall* FEDDDIPIJOH; // 0x18
		::System::String* EBANJMDFGKI; // 0x20
		::System::Boolean KMBLGAPGGIO; // 0x28
		::System::Boolean DLGFMPNEHGO; // 0x29
		::System::Byte _padding0[0x2];
		::System::Single GLHFPIGMBLN; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_PFBNNGIFCFF_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::GameObject* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Action*))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_PFBNNGIFCFF_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_PFBNNGIFCFF_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HJCPDIACGEJ(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_PFBNNGIFCFF_HJCPDIACGEJ_OFFSET))(this, a1);
		}

		::System::Void JELOHMFIOHP(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_PFBNNGIFCFF_JELOHMFIOHP_OFFSET))(this, a1);
		}

		::System::Void INIJCJJLPKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_PFBNNGIFCFF_INIJCJJLPKM_OFFSET))(this);
		}

		::System::Void MPFKCHHCIMO(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_PFBNNGIFCFF_MPFKCHHCIMO_OFFSET))(this, a1, a2);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_PFBNNGIFCFF_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Boolean DBKGCJLIDFN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_PFBNNGIFCFF_DBKGCJLIDFN_OFFSET))(this);
		}

		::System::Void LHMFOOPLELC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_PFBNNGIFCFF_LHMFOOPLELC_OFFSET))(this);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_PFBNNGIFCFF_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Boolean HGNBFGOFKAC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_PFBNNGIFCFF_HGNBFGOFKAC_OFFSET))(this);
		}

		::UnityEngine::GameObject* CNIDLPKAEAD()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_PFBNNGIFCFF_CNIDLPKAEAD_OFFSET))(this);
		}

		::UnityEngine::Vector3 HHMFILFAMNA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_PFBNNGIFCFF_HHMFILFAMNA_OFFSET))(this);
		}

		::UnityEngine::Rigidbody* KHGDELPMIDA()
		{
			return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_PFBNNGIFCFF_KHGDELPMIDA_OFFSET))(this);
		}

	};
