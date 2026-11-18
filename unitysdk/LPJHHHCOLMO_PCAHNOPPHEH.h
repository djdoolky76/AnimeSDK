#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAHAIEHANOH.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define LPJHHHCOLMO_PCAHNOPPHEH_DNJCJBBAAKK_OFFSET UNITYSDK_OFFSET(0x13D0DC90)
#define LPJHHHCOLMO_PCAHNOPPHEH_PPFFCKHHEHA_OFFSET UNITYSDK_OFFSET(0x13D0DC40)
#define LPJHHHCOLMO_PCAHNOPPHEH__CTOR_OFFSET UNITYSDK_OFFSET(0x13D0DC30)

inline static constexpr unsigned int LPJHHHCOLMO_PCAHNOPPHEH_TypeDefinitionIndex = 46642;

class LPJHHHCOLMO_PCAHNOPPHEH : public ::System::Object
{
public:
	::System::Action_1<::DAHAIEHANOH>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_PCAHNOPPHEH__CTOR_OFFSET))(this);
	}

	::System::Void PPFFCKHHEHA(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_PCAHNOPPHEH_PPFFCKHHEHA_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void DNJCJBBAAKK(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_PCAHNOPPHEH_DNJCJBBAAKK_OFFSET))(this, NAPFALLANDL);
	}
};
