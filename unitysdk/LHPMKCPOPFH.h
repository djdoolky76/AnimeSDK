#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define LHPMKCPOPFH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x158E1600)
#define LHPMKCPOPFH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x158E14C0)
#define LHPMKCPOPFH__CTOR_OFFSET UNITYSDK_OFFSET(0x158E15F0)

inline static constexpr unsigned int LHPMKCPOPFH_TypeDefinitionIndex = 88265;

class LHPMKCPOPFH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* NNCDLLDGMFC; // 0x18
	::UnityEngine::Transform* IEAHDNHJCHJ; // 0x20
	::UnityEngine::GameObject* AIJGKEKFJOM; // 0x28
	::UnityEngine::Transform* BGOEMOBHEMO; // 0x30
	::UnityEngine::Transform* GPELFIEICOB; // 0x38
	::UnityEngine::Transform* LIEJMNIEKDJ; // 0x40
	::UnityEngine::Camera* OCIBCMLGGKJ; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPMKCPOPFH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LHPMKCPOPFH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LHPMKCPOPFH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
