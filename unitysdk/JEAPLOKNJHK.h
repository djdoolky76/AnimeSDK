#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralBtn03WidgetController; }
namespace UnityEngine { class GameObject; }
template <typename T> class MEKABAIJMNM_1;

#define JEAPLOKNJHK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14FA9E70)
#define JEAPLOKNJHK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14FA9DE0)
#define JEAPLOKNJHK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14FA9C90)
#define JEAPLOKNJHK__CTOR_OFFSET UNITYSDK_OFFSET(0x14FA9E60)

inline static constexpr unsigned int JEAPLOKNJHK_TypeDefinitionIndex = 57245;

class JEAPLOKNJHK : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIGeneralBtn03WidgetController*>* ONNFLOIPMEF; // 0x18
	::UnityEngine::GameObject* KKNNBNKPFHH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEAPLOKNJHK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JEAPLOKNJHK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEAPLOKNJHK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JEAPLOKNJHK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
