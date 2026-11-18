#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BDCKHDEBKKK;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }
template <typename T> class DFDEIDBBGHG_1;

#define IBHGDJGJLEI_KONEGNDNDAL_HPELNOKHNLO_OFFSET UNITYSDK_OFFSET(0x16F57A20)
#define IBHGDJGJLEI_KONEGNDNDAL__CTOR_OFFSET UNITYSDK_OFFSET(0x16F57A10)

inline static constexpr unsigned int IBHGDJGJLEI_KONEGNDNDAL_TypeDefinitionIndex = 55796;

class IBHGDJGJLEI_KONEGNDNDAL : public ::System::Object
{
public:
	::System::Action_1<::DFDEIDBBGHG_1<::BDCKHDEBKKK*>*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_KONEGNDNDAL__CTOR_OFFSET))(this);
	}

	::System::Void HPELNOKHNLO(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_KONEGNDNDAL_HPELNOKHNLO_OFFSET))(this, GLAOEHCGCFO);
	}
};
