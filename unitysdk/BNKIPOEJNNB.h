#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define BNKIPOEJNNB_ELCJOJDGAAM_OFFSET UNITYSDK_OFFSET(0x150986D0)
#define BNKIPOEJNNB_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x150984B0)
#define BNKIPOEJNNB_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0x15098490)
#define BNKIPOEJNNB_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x15098270)
#define BNKIPOEJNNB_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x15098760)
#define BNKIPOEJNNB_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x150987E0)
#define BNKIPOEJNNB_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15097EA0)
#define BNKIPOEJNNB__CCTOR_OFFSET UNITYSDK_OFFSET(0x15098500)
#define BNKIPOEJNNB__CTOR_OFFSET UNITYSDK_OFFSET(0x15098580)

inline static constexpr unsigned int BNKIPOEJNNB_TypeDefinitionIndex = 39880;

class BNKIPOEJNNB : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xD; // 0x0
	::System::Collections::Generic::Stack_1<::UnityEngine::GameObject*>* LJFMHOMMJKJ; // 0x48
	::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>* IEBEFNLGCJI; // 0x50
	::UnityEngine::GameObject* PPJPEJEFCCK; // 0x58
	::System::String* KPHNNGCGFGI; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::GameObject*>* LIIJDBCBJCA; // 0x68

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNKIPOEJNNB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKIPOEJNNB__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKIPOEJNNB_ONCLEAN_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_soundGameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKIPOEJNNB_GET_SOUNDGAMEOBJECT_OFFSET))(this);
	}

	::System::String* get_soundActionSourceHint()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKIPOEJNNB_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKIPOEJNNB_GETCLASSID_OFFSET))(this);
	}

	::UnityEngine::Animator* ELCJOJDGAAM()
	{
		return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKIPOEJNNB_ELCJOJDGAAM_OFFSET))(this);
	}

	static ::BNKIPOEJNNB* JFDOOELFAOA()
	{
		return ((::BNKIPOEJNNB*(*)())((::PBYTE)hIl2Cpp + BNKIPOEJNNB_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKIPOEJNNB_MEFBHFEOKGH_OFFSET))(this);
	}
};
