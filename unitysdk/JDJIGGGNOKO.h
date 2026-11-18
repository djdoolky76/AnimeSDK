#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define JDJIGGGNOKO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13833860)
#define JDJIGGGNOKO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13833670)
#define JDJIGGGNOKO__CTOR_OFFSET UNITYSDK_OFFSET(0x13833850)

inline static constexpr unsigned int JDJIGGGNOKO_TypeDefinitionIndex = 68799;

class JDJIGGGNOKO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* PBHGKKNAMDN; // 0x18
	::UnityEngine::GameObject* LJFPEIEDEBK; // 0x20
	::UnityEngine::GameObject* PAGLAAODIPH; // 0x28
	::UnityEngine::GameObject* JEGPJHIKBOK; // 0x30
	::UnityEngine::GameObject* GPFDMKJHDDH; // 0x38
	::UnityEngine::Transform* CFPHBOFADDO; // 0x40
	::UnityEngine::GameObject* DNCHDMMALLL; // 0x48
	::UnityEngine::GameObject* IGECMINMEMD; // 0x50
	::UnityEngine::GameObject* LAOCOMBLGJC; // 0x58
	::UnityEngine::GameObject* COJFKCGNCKL; // 0x60
	::UnityEngine::Camera* OCIBCMLGGKJ; // 0x68
	::UnityEngine::GameObject* CJKPNEGBOIG; // 0x70
	::UnityEngine::GameObject* MCLKFNEFHLL; // 0x78
	::UnityEngine::Transform* HBJFIIPBMDG; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDJIGGGNOKO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JDJIGGGNOKO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JDJIGGGNOKO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
