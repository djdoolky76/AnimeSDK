#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class TextMesh; }
namespace UnityEngine::Playables { class PlayableDirector; }
template <typename T> class KNLFLMMHALL_1;

#define MICJNGGIPGA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11F4E430)
#define MICJNGGIPGA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11F4E3A0)
#define MICJNGGIPGA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11F4E170)
#define MICJNGGIPGA__CTOR_OFFSET UNITYSDK_OFFSET(0x11F4E420)

inline static constexpr unsigned int MICJNGGIPGA_TypeDefinitionIndex = 59562;

class MICJNGGIPGA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Camera* OCIBCMLGGKJ; // 0x18
	::UnityEngine::TextMesh* GDCMMJMDLBG; // 0x20
	::UnityEngine::TextMesh* AJPNNPOHCGI; // 0x28
	::UnityEngine::TextMesh* LLEFDJNFKFM; // 0x30
	::UnityEngine::TextMesh* MFAJHAEPCHI; // 0x38
	::UnityEngine::TextMesh* AFBFACODBAB; // 0x40
	::UnityEngine::TextMesh* CAJAGMPHJBC; // 0x48
	::UnityEngine::TextMesh* HGFHPDIOEGP; // 0x50
	::UnityEngine::GameObject* IBICBKMOIMK; // 0x58
	::KNLFLMMHALL_1<::System::Object*>* NIBHNHFIPKI; // 0x60
	::UnityEngine::Playables::PlayableDirector* MKNALFMFHNF; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICJNGGIPGA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MICJNGGIPGA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MICJNGGIPGA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICJNGGIPGA_KGEBDLGBGNM_OFFSET))(this);
	}
};
