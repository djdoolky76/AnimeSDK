#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define KIJBBIHJKAF_GLGKDFBEFCA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x199568B0)
#define KIJBBIHJKAF_GLGKDFBEFCA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19956980)
#define KIJBBIHJKAF_GLGKDFBEFCA_INVOKE_OFFSET UNITYSDK_OFFSET(0x19956210)
#define KIJBBIHJKAF_GLGKDFBEFCA__CTOR_OFFSET UNITYSDK_OFFSET(0x19956200)

inline static constexpr unsigned int KIJBBIHJKAF_GLGKDFBEFCA_TypeDefinitionIndex = 71439;

class KIJBBIHJKAF_GLGKDFBEFCA : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + KIJBBIHJKAF_GLGKDFBEFCA__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Single PMNLNNGEIFM, ::PKMJPMFCNBK* KALMJJDEECB, ::System::Single KECKLBEIGEA, ::UnityEngine::AnimatorStateInfo& KAJBCDNNDHA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + KIJBBIHJKAF_GLGKDFBEFCA_INVOKE_OFFSET))(this, KECKGDFIALJ, PMNLNNGEIFM, KALMJJDEECB, KECKLBEIGEA, KAJBCDNNDHA);
	}

	::System::IAsyncResult* BeginInvoke(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Single PMNLNNGEIFM, ::PKMJPMFCNBK* KALMJJDEECB, ::System::Single KECKLBEIGEA, ::UnityEngine::AnimatorStateInfo& KAJBCDNNDHA, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single, ::UnityEngine::AnimatorStateInfo&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + KIJBBIHJKAF_GLGKDFBEFCA_BEGININVOKE_OFFSET))(this, KECKGDFIALJ, PMNLNNGEIFM, KALMJJDEECB, KECKLBEIGEA, KAJBCDNNDHA, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::UnityEngine::AnimatorStateInfo& KAJBCDNNDHA, ::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + KIJBBIHJKAF_GLGKDFBEFCA_ENDINVOKE_OFFSET))(this, KAJBCDNNDHA, IGAAKDOIPNN);
	}
};
