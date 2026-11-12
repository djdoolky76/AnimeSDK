#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBOCABOPCON_FGIHJGKPONO;
namespace RPG::Client { class UIDraggableManager; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define OBOCABOPCON_ADD_DRAGENDED_OFFSET UNITYSDK_OFFSET(0xC650AF0)
#define OBOCABOPCON_ADD_DRAGENTERPANEL_OFFSET UNITYSDK_OFFSET(0xC650DF0)
#define OBOCABOPCON_ADD_DRAGEXCEEDED_OFFSET UNITYSDK_OFFSET(0xC650BF0)
#define OBOCABOPCON_ADD_DRAGEXITPANEL_OFFSET UNITYSDK_OFFSET(0xC650CF0)
#define OBOCABOPCON_ADD_DRAGSTARTED_OFFSET UNITYSDK_OFFSET(0xC6509F0)
#define OBOCABOPCON_AJOBJHFLAHC_OFFSET UNITYSDK_OFFSET(0xC651260)
#define OBOCABOPCON_AMNPMJHOCAB_OFFSET UNITYSDK_OFFSET(0xC6506C0)
#define OBOCABOPCON_ANFDHLNJJLH_OFFSET UNITYSDK_OFFSET(0xC651320)
#define OBOCABOPCON_BBNAEKIFOHM_OFFSET UNITYSDK_OFFSET(0xC6513E0)
#define OBOCABOPCON_CTOR_OFFSET UNITYSDK_OFFSET(0xC650690)
#define OBOCABOPCON_DJJNMHGABFL_OFFSET UNITYSDK_OFFSET(0xC650EF0)
#define OBOCABOPCON_FAJFOPGNLNO_OFFSET UNITYSDK_OFFSET(0xC6514B0)
#define OBOCABOPCON_GJOJLFDBAMK_OFFSET UNITYSDK_OFFSET(0xC651130)
#define OBOCABOPCON_JKDPOJFDGDJ_OFFSET UNITYSDK_OFFSET(0xC650FD0)
#define OBOCABOPCON_NHNMPMJILPK_OFFSET UNITYSDK_OFFSET(0xC651050)
#define OBOCABOPCON_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xC6510C0)
#define OBOCABOPCON_PKONPECCLIN_OFFSET UNITYSDK_OFFSET(0xC651180)
#define OBOCABOPCON_REMOVE_DRAGENDED_OFFSET UNITYSDK_OFFSET(0xC650B70)
#define OBOCABOPCON_REMOVE_DRAGENTERPANEL_OFFSET UNITYSDK_OFFSET(0xC650E70)
#define OBOCABOPCON_REMOVE_DRAGEXCEEDED_OFFSET UNITYSDK_OFFSET(0xC650C70)
#define OBOCABOPCON_REMOVE_DRAGEXITPANEL_OFFSET UNITYSDK_OFFSET(0xC650D70)
#define OBOCABOPCON_REMOVE_DRAGSTARTED_OFFSET UNITYSDK_OFFSET(0xC650A70)

inline static constexpr unsigned int OBOCABOPCON_TypeDefinitionIndex = 84037;

	class OBOCABOPCON : public ::System::Object
	{
	public:
		::System::Action_1<::System::Object*>* DragEnterPanel; // 0x10
		::System::Action_1<::System::Object*>* DragStarted; // 0x18
		::OBOCABOPCON_FGIHJGKPONO* OGDJGLDLICK; // 0x20
		::System::Action_1<::System::Object*>* DragExceeded; // 0x28
		::RPG::Client::UIDraggableManager* KLEMKIPNDHM; // 0x30
		::System::Object* DIBIACGMNIA; // 0x38
		::System::Action_1<::System::Object*>* DragExitPanel; // 0x40
		::System::Action_1<::System::Object*>* DragEnded; // 0x48
		::System::Boolean HPBDPJBADHL; // 0x50
		::System::Void _ctor(::RPG::Client::UIDraggableManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIDraggableManager*))((::PBYTE)hIl2Cpp + OBOCABOPCON_CTOR_OFFSET))(this, a1);
		}

		::System::Void add_DragStarted(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OBOCABOPCON_ADD_DRAGSTARTED_OFFSET))(this, a1);
		}

		::System::Void remove_DragStarted(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OBOCABOPCON_REMOVE_DRAGSTARTED_OFFSET))(this, a1);
		}

		::System::Void add_DragEnded(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OBOCABOPCON_ADD_DRAGENDED_OFFSET))(this, a1);
		}

		::System::Void remove_DragEnded(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OBOCABOPCON_REMOVE_DRAGENDED_OFFSET))(this, a1);
		}

		::System::Void add_DragExceeded(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OBOCABOPCON_ADD_DRAGEXCEEDED_OFFSET))(this, a1);
		}

		::System::Void remove_DragExceeded(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OBOCABOPCON_REMOVE_DRAGEXCEEDED_OFFSET))(this, a1);
		}

		::System::Void add_DragExitPanel(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OBOCABOPCON_ADD_DRAGEXITPANEL_OFFSET))(this, a1);
		}

		::System::Void remove_DragExitPanel(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OBOCABOPCON_REMOVE_DRAGEXITPANEL_OFFSET))(this, a1);
		}

		::System::Void add_DragEnterPanel(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OBOCABOPCON_ADD_DRAGENTERPANEL_OFFSET))(this, a1);
		}

		::System::Void remove_DragEnterPanel(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OBOCABOPCON_REMOVE_DRAGENTERPANEL_OFFSET))(this, a1);
		}

		::System::Void DJJNMHGABFL(::UnityEngine::GameObject* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*))((::PBYTE)hIl2Cpp + OBOCABOPCON_DJJNMHGABFL_OFFSET))(this, a1, a2);
		}

		::System::Void JKDPOJFDGDJ(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OBOCABOPCON_JKDPOJFDGDJ_OFFSET))(this, a1);
		}

		::System::Void NHNMPMJILPK(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + OBOCABOPCON_NHNMPMJILPK_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOCABOPCON_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void GJOJLFDBAMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOCABOPCON_GJOJLFDBAMK_OFFSET))(this);
		}

		::System::Void AMNPMJHOCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOCABOPCON_AMNPMJHOCAB_OFFSET))(this);
		}

		::System::Void PKONPECCLIN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBOCABOPCON_PKONPECCLIN_OFFSET))(this, a1);
		}

		::System::Void AJOBJHFLAHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOCABOPCON_AJOBJHFLAHC_OFFSET))(this);
		}

		::System::Void ANFDHLNJJLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOCABOPCON_ANFDHLNJJLH_OFFSET))(this);
		}

		::System::Void BBNAEKIFOHM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBOCABOPCON_BBNAEKIFOHM_OFFSET))(this, a1);
		}

		::System::Void FAJFOPGNLNO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBOCABOPCON_FAJFOPGNLNO_OFFSET))(this, a1);
		}

	};
