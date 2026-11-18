#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define JHPKNLBALEK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1557C5B0)
#define JHPKNLBALEK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19813830)
#define JHPKNLBALEK__CTOR_OFFSET UNITYSDK_OFFSET(0x1557C5A0)

inline static constexpr unsigned int JHPKNLBALEK_TypeDefinitionIndex = 39746;

class JHPKNLBALEK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* KIFGIGMLLHL; // 0x18
	::UnityEngine::GameObject* DJAGGOLIHEL; // 0x20
	::UnityEngine::GameObject* JBPBNFIIAIL; // 0x28
	::UnityEngine::Camera* OCIBCMLGGKJ; // 0x30
	::UnityEngine::GameObject* BMCPELPHPOE; // 0x38
	::UnityEngine::GameObject* FIHOBBELHMK; // 0x40
	::GCIMMDDIFBJ* DHCKPIBEKNB; // 0x48
	::UnityEngine::Playables::PlayableDirector* MAFDICIGDNI; // 0x50
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHPKNLBALEK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JHPKNLBALEK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JHPKNLBALEK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
