#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define BFKAFBICKBH_DKKLFNLNIND_OFFSET UNITYSDK_OFFSET(0x1866B970)
#define BFKAFBICKBH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1866BAD0)
#define BFKAFBICKBH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1866B890)
#define BFKAFBICKBH__CTOR_OFFSET UNITYSDK_OFFSET(0x1866BAC0)

inline static constexpr unsigned int BFKAFBICKBH_TypeDefinitionIndex = 82392;

class BFKAFBICKBH : public ::GIBMJLOJLKD
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* CHPJFFGHKCL; // 0x18
	::UnityEngine::Transform* FEAIJDMODDI; // 0x20
	::UnityEngine::Transform* CFPHBOFADDO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKAFBICKBH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BFKAFBICKBH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* DKKLFNLNIND(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BFKAFBICKBH_DKKLFNLNIND_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BFKAFBICKBH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
