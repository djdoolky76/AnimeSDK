#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class MonoGameSceneObjectMap; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class Volume; }

#define OAJBPFIPALE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15F55E50)
#define OAJBPFIPALE_EEFJHFJECPB_OFFSET UNITYSDK_OFFSET(0x15F55CF0)
#define OAJBPFIPALE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15F55BB0)
#define OAJBPFIPALE__CTOR_OFFSET UNITYSDK_OFFSET(0x15F55E40)

inline static constexpr unsigned int OAJBPFIPALE_TypeDefinitionIndex = 71078;

class OAJBPFIPALE : public ::GIBMJLOJLKD
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* CKAPKCNIKDD; // 0x18
	::UnityEngine::Rendering::Volume* LOHBGLBONGK; // 0x20
	::UnityEngine::GameObject* KFMGMEJEIKD; // 0x28
	::UnityEngine::Camera* OPOCJJCGBGC; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* PHFOGPCBGOG; // 0x38
	::MoleMole::MonoGameSceneObjectMap* NLMNCALMDLJ; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAJBPFIPALE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OAJBPFIPALE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OAJBPFIPALE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* EEFJHFJECPB(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OAJBPFIPALE_EEFJHFJECPB_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
