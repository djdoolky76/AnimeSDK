#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CHLBJILOJMK_KCKBIOBGKBH_OFFSET UNITYSDK_OFFSET(0x139C9270)
#define CHLBJILOJMK_KDJHFDIBHAB_OFFSET UNITYSDK_OFFSET(0x139C8EE0)
#define CHLBJILOJMK_PBNBMAAGONA_OFFSET UNITYSDK_OFFSET(0x139C8A70)
#define CHLBJILOJMK__CCTOR_OFFSET UNITYSDK_OFFSET(0x139C8A60)
#define CHLBJILOJMK__CTOR_OFFSET UNITYSDK_OFFSET(0x139C89D0)

inline static constexpr unsigned int CHLBJILOJMK_TypeDefinitionIndex = 71351;

class CHLBJILOJMK : public ::System::Object
{
public:
	static ::CHLBJILOJMK** StaticGet_KIFOJFGAMMF()
	{
		return (::CHLBJILOJMK**)Il2CppClass::FromTypeDefinitionIndex(CHLBJILOJMK_TypeDefinitionIndex)->GetStaticField(0x4F2E0);
	}
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>*>* IGMELHMONDG; // 0x10
	::System::Boolean PADCDBKDGIO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLBJILOJMK__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHLBJILOJMK__CCTOR_OFFSET))();
	}

	::System::Void PBNBMAAGONA(::System::Action* AHJBJBOFODH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CHLBJILOJMK_PBNBMAAGONA_OFFSET))(this, AHJBJBOFODH);
	}

	::System::Void KDJHFDIBHAB(::UnityEngine::GameObject* NJOAJLDJCCJ, ::System::String* AELLPLBJELA, ::System::Action* DMPEOJCCCLO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CHLBJILOJMK_KDJHFDIBHAB_OFFSET))(this, NJOAJLDJCCJ, AELLPLBJELA, DMPEOJCCCLO);
	}

	static ::CHLBJILOJMK* KCKBIOBGKBH()
	{
		return ((::CHLBJILOJMK*(*)())((::PBYTE)hIl2Cpp + CHLBJILOJMK_KCKBIOBGKBH_OFFSET))();
	}
};
