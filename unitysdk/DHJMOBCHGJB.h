#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BCLKDMAHONE;
class DDPLLJEOLHD;
class GLLIPCNMDBO;
class HJMFDDMHOJC;
class IJLIGGBIDBA;
class LAECFLNNOFH;
class NJKFCOIBIOK;
class PMGIMPDMIKC;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::LittleGame::PixAir { class BasePixAirView; }
namespace RPG::GameCore { class PixAirCastCondition; }
namespace RPG::GameCore { class PixAirSkillConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define DHJMOBCHGJB_AAAMDIIILIE_OFFSET UNITYSDK_OFFSET(0xEBE2B00)
#define DHJMOBCHGJB_ADOMFABEKNB_OFFSET UNITYSDK_OFFSET(0xEBE1550)
#define DHJMOBCHGJB_AGBKKFHBAGL_OFFSET UNITYSDK_OFFSET(0xEBE0F50)
#define DHJMOBCHGJB_BIGKLEEGPPL_OFFSET UNITYSDK_OFFSET(0xEBDF430)
#define DHJMOBCHGJB_CCBFCJGLJHM_OFFSET UNITYSDK_OFFSET(0xEBE0110)
#define DHJMOBCHGJB_CJPFMHHNHHF_OFFSET UNITYSDK_OFFSET(0xEBE2610)
#define DHJMOBCHGJB_CTOR_OFFSET UNITYSDK_OFFSET(0xEBDE6C0)
#define DHJMOBCHGJB_DFGLNDFHNHN_OFFSET UNITYSDK_OFFSET(0xEBE2EF0)
#define DHJMOBCHGJB_FBGNGHADJPP_OFFSET UNITYSDK_OFFSET(0xEBDE800)
#define DHJMOBCHGJB_FDICNGMKPKE_OFFSET UNITYSDK_OFFSET(0xEBE2290)
#define DHJMOBCHGJB_FEKKFMMJEPD_OFFSET UNITYSDK_OFFSET(0xEBE1A60)
#define DHJMOBCHGJB_HGIPKCMENKC_OFFSET UNITYSDK_OFFSET(0xEBE2770)
#define DHJMOBCHGJB_IDGDNKHELAD_OFFSET UNITYSDK_OFFSET(0xEBE1D80)
#define DHJMOBCHGJB_IJAPMGHNBPA_OFFSET UNITYSDK_OFFSET(0xEBE2920)
#define DHJMOBCHGJB_JNKAMNAGGIN_OFFSET UNITYSDK_OFFSET(0xEBE2FA0)
#define DHJMOBCHGJB_KABOMBOOGNI_OFFSET UNITYSDK_OFFSET(0xEBE0A70)
#define DHJMOBCHGJB_KDCFPEEOINJ_OFFSET UNITYSDK_OFFSET(0xEBE10A0)
#define DHJMOBCHGJB_LAOLGLFIMMB_OFFSET UNITYSDK_OFFSET(0xEBE1820)
#define DHJMOBCHGJB_MJBCAGHJCMB_OFFSET UNITYSDK_OFFSET(0xEBE1160)
#define DHJMOBCHGJB_MNHOCNCGOLJ_OFFSET UNITYSDK_OFFSET(0xEBE2E50)
#define DHJMOBCHGJB_NFOMIEFAGBJ_OFFSET UNITYSDK_OFFSET(0xEBDF1B0)
#define DHJMOBCHGJB_NIEPDCNKNLC_OFFSET UNITYSDK_OFFSET(0xEBE1F70)
#define DHJMOBCHGJB_OCKMIKDLPAF_OFFSET UNITYSDK_OFFSET(0xEBE0260)
#define DHJMOBCHGJB_OJNHPINFMOK_OFFSET UNITYSDK_OFFSET(0xEBE2C60)
#define DHJMOBCHGJB_PIPBOMLCDCJ_OFFSET UNITYSDK_OFFSET(0xEBE0830)

inline static constexpr unsigned int DHJMOBCHGJB_TypeDefinitionIndex = 77304;

	class DHJMOBCHGJB : public ::System::Object
	{
	public:
		::LAECFLNNOFH* FKINCGODJEP; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* GDHKMMIKCFO; // 0x18
		::NJKFCOIBIOK* JDILNDANFCO; // 0x20
		::System::Collections::Generic::LinkedList_1<::RPG::Client::LittleGame::PixAir::BasePixAirView*>* DGDFLJOFCDB; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::LinkedListNode_1<::RPG::Client::LittleGame::PixAir::BasePixAirView*>*>* DKGLKCFJPEH; // 0x30
		// static const ::System::Object OJEHBDIBAGI; // 0x0
		::System::Void _ctor(::LAECFLNNOFH* a1, ::NJKFCOIBIOK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LAECFLNNOFH*, ::NJKFCOIBIOK*))((::PBYTE)hIl2Cpp + DHJMOBCHGJB_CTOR_OFFSET))(this, a1, a2);
		}

		::BCLKDMAHONE* FBGNGHADJPP(::HJMFDDMHOJC* a1)
		{
			return ((::BCLKDMAHONE*(*)(::PVOID, ::HJMFDDMHOJC*))((::PBYTE)hIl2Cpp + DHJMOBCHGJB_FBGNGHADJPP_OFFSET))(this, a1);
		}

		::System::Void CCBFCJGLJHM(::Il2CppArray<::DDPLLJEOLHD*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::DDPLLJEOLHD*>*))((::PBYTE)hIl2Cpp + DHJMOBCHGJB_CCBFCJGLJHM_OFFSET))(this, a1);
		}

		::BCLKDMAHONE* BIGKLEEGPPL(::PMGIMPDMIKC* a1, ::BCLKDMAHONE* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::BCLKDMAHONE*(*)(::PVOID, ::PMGIMPDMIKC*, ::BCLKDMAHONE*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DHJMOBCHGJB_BIGKLEEGPPL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void KABOMBOOGNI(::PMGIMPDMIKC* a1, ::BCLKDMAHONE* a2, ::BCLKDMAHONE* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::PMGIMPDMIKC*, ::BCLKDMAHONE*, ::BCLKDMAHONE*, ::System::Int32))((::PBYTE)hIl2Cpp + DHJMOBCHGJB_KABOMBOOGNI_OFFSET))(this, a1, a2, a3, a4);
		}

		::GLLIPCNMDBO* PIPBOMLCDCJ(::IJLIGGBIDBA* a1, ::BCLKDMAHONE* a2)
		{
			return ((::GLLIPCNMDBO*(*)(::PVOID, ::IJLIGGBIDBA*, ::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + DHJMOBCHGJB_PIPBOMLCDCJ_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::PixAirCastCondition* KDCFPEEOINJ(::RPG::GameCore::PixAirSkillConfig* a1)
		{
			return ((::RPG::GameCore::PixAirCastCondition*(*)(::PVOID, ::RPG::GameCore::PixAirSkillConfig*))((::PBYTE)hIl2Cpp + DHJMOBCHGJB_KDCFPEEOINJ_OFFSET))(this, a1);
		}

		::BCLKDMAHONE* MJBCAGHJCMB(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3, ::System::Action* a4, ::UnityEngine::Vector3 a5, ::System::String* a6, ::System::String* a7, ::System::Single a8)
		{
			return ((::BCLKDMAHONE*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Action*, ::UnityEngine::Vector3, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + DHJMOBCHGJB_MJBCAGHJCMB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void FEKKFMMJEPD(::RPG::Client::MonoEffect* a1, ::BCLKDMAHONE* a2, ::System::Int32 a3, ::System::String* a4, ::System::Single a5, ::System::UInt32 a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Vector3 a8)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::BCLKDMAHONE*, ::System::Int32, ::System::String*, ::System::Single, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DHJMOBCHGJB_FEKKFMMJEPD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::BCLKDMAHONE* FDICNGMKPKE(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3, ::System::String* a4, ::System::String* a5, ::System::String* a6)
		{
			return ((::BCLKDMAHONE*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + DHJMOBCHGJB_FDICNGMKPKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void NIEPDCNKNLC(::RPG::Client::LittleGame::PixAir::BasePixAirView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::PixAir::BasePixAirView*))((::PBYTE)hIl2Cpp + DHJMOBCHGJB_NIEPDCNKNLC_OFFSET))(this, a1);
		}

		::System::Void HGIPKCMENKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHJMOBCHGJB_HGIPKCMENKC_OFFSET))(this);
		}

		::System::Void IJAPMGHNBPA(::RPG::Client::LittleGame::PixAir::BasePixAirView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::PixAir::BasePixAirView*))((::PBYTE)hIl2Cpp + DHJMOBCHGJB_IJAPMGHNBPA_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 ADOMFABEKNB(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHJMOBCHGJB_ADOMFABEKNB_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* CJPFMHHNHHF(::System::Int32 a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHJMOBCHGJB_CJPFMHHNHHF_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* AAAMDIIILIE(::System::Int32 a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHJMOBCHGJB_AAAMDIIILIE_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* IDGDNKHELAD(::System::Int32 a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHJMOBCHGJB_IDGDNKHELAD_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 LAOLGLFIMMB(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHJMOBCHGJB_LAOLGLFIMMB_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 OJNHPINFMOK(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHJMOBCHGJB_OJNHPINFMOK_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* AGBKKFHBAGL(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DHJMOBCHGJB_AGBKKFHBAGL_OFFSET))(this, a1);
		}

		::System::Void NFOMIEFAGBJ(::HJMFDDMHOJC* a1, ::BCLKDMAHONE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HJMFDDMHOJC*, ::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + DHJMOBCHGJB_NFOMIEFAGBJ_OFFSET))(this, a1, a2);
		}

		::System::Void MNHOCNCGOLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHJMOBCHGJB_MNHOCNCGOLJ_OFFSET))(this);
		}

		::System::Void DFGLNDFHNHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHJMOBCHGJB_DFGLNDFHNHN_OFFSET))(this);
		}

		::System::Void JNKAMNAGGIN(::System::Collections::Generic::Queue_1<::HJMFDDMHOJC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Queue_1<::HJMFDDMHOJC*>*))((::PBYTE)hIl2Cpp + DHJMOBCHGJB_JNKAMNAGGIN_OFFSET))(this, a1);
		}

		::System::Void OCKMIKDLPAF(::BCLKDMAHONE* a1, ::HJMFDDMHOJC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BCLKDMAHONE*, ::HJMFDDMHOJC*))((::PBYTE)hIl2Cpp + DHJMOBCHGJB_OCKMIKDLPAF_OFFSET))(this, a1, a2);
		}

	};
