#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define OIPAFACEMMK_OJCDCBJJKOG_IAPDCEDNALO_OFFSET UNITYSDK_OFFSET(0x12935490)
#define OIPAFACEMMK_OJCDCBJJKOG_JECDIIGHOLI_OFFSET UNITYSDK_OFFSET(0x12935600)
#define OIPAFACEMMK_OJCDCBJJKOG__CTOR_OFFSET UNITYSDK_OFFSET(0x12935480)

inline static constexpr unsigned int OIPAFACEMMK_OJCDCBJJKOG_TypeDefinitionIndex = 40825;

class OIPAFACEMMK_OJCDCBJJKOG : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* EMAMDEIDFMF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPAFACEMMK_OJCDCBJJKOG__CTOR_OFFSET))(this);
	}

	::System::Void IAPDCEDNALO(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OIPAFACEMMK_OJCDCBJJKOG_IAPDCEDNALO_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void JECDIIGHOLI(::OAEFGCLEHHO* JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OIPAFACEMMK_OJCDCBJJKOG_JECDIIGHOLI_OFFSET))(this, JMFEPDAHBED);
	}
};
