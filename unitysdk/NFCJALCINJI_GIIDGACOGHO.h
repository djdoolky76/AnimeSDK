#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FEKNDOFCGGA;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define NFCJALCINJI_GIIDGACOGHO_HNGBGDLONAD_OFFSET UNITYSDK_OFFSET(0x16B6B750)
#define NFCJALCINJI_GIIDGACOGHO__CTOR_OFFSET UNITYSDK_OFFSET(0x16B6B740)

inline static constexpr unsigned int NFCJALCINJI_GIIDGACOGHO_TypeDefinitionIndex = 47542;

class NFCJALCINJI_GIIDGACOGHO : public ::System::Object
{
public:
	::System::Action_1<::FEKNDOFCGGA*>* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCJALCINJI_GIIDGACOGHO__CTOR_OFFSET))(this);
	}

	::System::Void HNGBGDLONAD(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NFCJALCINJI_GIIDGACOGHO_HNGBGDLONAD_OFFSET))(this, GLAOEHCGCFO);
	}
};
