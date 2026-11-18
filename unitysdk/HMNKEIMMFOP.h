#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define HMNKEIMMFOP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE9FE290)
#define HMNKEIMMFOP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE9FE1B0)
#define HMNKEIMMFOP__CTOR_OFFSET UNITYSDK_OFFSET(0xE9FE280)

inline static constexpr unsigned int HMNKEIMMFOP_TypeDefinitionIndex = 40878;

class HMNKEIMMFOP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* BKEDNKNJGAI; // 0x18
	::UnityEngine::Transform* OPFLGLFMOLB; // 0x20
	::UnityEngine::Transform* EJHNNMBHAPK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMNKEIMMFOP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HMNKEIMMFOP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HMNKEIMMFOP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
