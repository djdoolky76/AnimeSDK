#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define KKJEIOKPFHO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A2CEB70)
#define KKJEIOKPFHO_HBDFPCIFIMM_OFFSET UNITYSDK_OFFSET(0x1A2CEA10)
#define KKJEIOKPFHO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A2CE900)
#define KKJEIOKPFHO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2CEB60)

inline static constexpr unsigned int KKJEIOKPFHO_TypeDefinitionIndex = 47640;

class KKJEIOKPFHO : public ::GIBMJLOJLKD
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* FPEDKLEGFPI; // 0x18
	::UnityEngine::GameObject* EIBJHMDONIA; // 0x20
	::UnityEngine::GameObject* GHFKLCKMHLO; // 0x28
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x30
	::UnityEngine::RectTransform* LBPDNFJFODH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJEIOKPFHO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KKJEIOKPFHO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* HBDFPCIFIMM(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KKJEIOKPFHO_HBDFPCIFIMM_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KKJEIOKPFHO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
