#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBOCABOPCON_FGIHJGKPONO;
namespace RPG::Client { class UIDraggableManager; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define OBOCABOPCON_ADD_DRAGENDED_OFFSET UNITYSDK_OFFSET(0xBD4CAF0)
#define OBOCABOPCON_ADD_DRAGENTERPANEL_OFFSET UNITYSDK_OFFSET(0xBD4CDF0)
#define OBOCABOPCON_ADD_DRAGEXCEEDED_OFFSET UNITYSDK_OFFSET(0xBD4CBF0)
#define OBOCABOPCON_ADD_DRAGEXITPANEL_OFFSET UNITYSDK_OFFSET(0xBD4CCF0)
#define OBOCABOPCON_ADD_DRAGSTARTED_OFFSET UNITYSDK_OFFSET(0xBD4C9F0)
#define OBOCABOPCON_AJOBJHFLAHC_OFFSET UNITYSDK_OFFSET(0xBD4D270)
#define OBOCABOPCON_AMNPMJHOCAB_OFFSET UNITYSDK_OFFSET(0xBD4C6C0)
#define OBOCABOPCON_ANFDHLNJJLH_OFFSET UNITYSDK_OFFSET(0xBD4D330)
#define OBOCABOPCON_BBNAEKIFOHM_OFFSET UNITYSDK_OFFSET(0xBD4D3F0)
#define OBOCABOPCON_CTOR_OFFSET UNITYSDK_OFFSET(0xBD4C690)
#define OBOCABOPCON_DJJNMHGABFL_OFFSET UNITYSDK_OFFSET(0xBD4CEF0)
#define OBOCABOPCON_FAJFOPGNLNO_OFFSET UNITYSDK_OFFSET(0xBD4D4C0)
#define OBOCABOPCON_GJOJLFDBAMK_OFFSET UNITYSDK_OFFSET(0xBD4D130)
#define OBOCABOPCON_JKDPOJFDGDJ_OFFSET UNITYSDK_OFFSET(0xBD4CFD0)
#define OBOCABOPCON_NHNMPMJILPK_OFFSET UNITYSDK_OFFSET(0xBD4D050)
#define OBOCABOPCON_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xBD4D0C0)
#define OBOCABOPCON_PKONPECCLIN_OFFSET UNITYSDK_OFFSET(0xBD4D180)
#define OBOCABOPCON_REMOVE_DRAGENDED_OFFSET UNITYSDK_OFFSET(0xBD4CB70)
#define OBOCABOPCON_REMOVE_DRAGENTERPANEL_OFFSET UNITYSDK_OFFSET(0xBD4CE70)
#define OBOCABOPCON_REMOVE_DRAGEXCEEDED_OFFSET UNITYSDK_OFFSET(0xBD4CC70)
#define OBOCABOPCON_REMOVE_DRAGEXITPANEL_OFFSET UNITYSDK_OFFSET(0xBD4CD70)
#define OBOCABOPCON_REMOVE_DRAGSTARTED_OFFSET UNITYSDK_OFFSET(0xBD4CA70)

inline static constexpr unsigned int OBOCABOPCON_TypeDefinitionIndex = 81257;

	class OBOCABOPCON : public ::System::Object
	{
	public:
		::RPG::Client::UIDraggableManager* KLEMKIPNDHM; // 0x10
		::System::Action_1<::System::Object*>* DragEnded; // 0x18
		::System::Action_1<::System::Object*>* DragEnterPanel; // 0x20
		::System::Action_1<::System::Object*>* DragStarted; // 0x28
		::System::Action_1<::System::Object*>* DragExitPanel; // 0x30
		::System::Object* DIBIACGMNIA; // 0x38
		::System::Action_1<::System::Object*>* DragExceeded; // 0x40
		::OBOCABOPCON_FGIHJGKPONO* OGDJGLDLICK; // 0x48
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
