#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define PBBBNIOEKML_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x150AE020)
#define PBBBNIOEKML_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x150ADF20)
#define PBBBNIOEKML__CTOR_OFFSET UNITYSDK_OFFSET(0x150AE010)

inline static constexpr unsigned int PBBBNIOEKML_TypeDefinitionIndex = 68059;

class PBBBNIOEKML : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* BPLCMMDMCFL; // 0x18
	::UnityEngine::Transform* ONDPMDEBPME; // 0x20
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x28
	::UnityEngine::Animator* IDBPHIOJPJI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBBBNIOEKML__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PBBBNIOEKML_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PBBBNIOEKML_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
