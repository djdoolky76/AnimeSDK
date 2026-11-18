#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FNLFLIJLBJP;
class GBGMOCDJLLC;
class MACLIDNIBBE;
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define DDLEDKOIALD_BFMFPHKHFEF_OFFSET UNITYSDK_OFFSET(0x1EE90E10)
#define DDLEDKOIALD__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE90D90)

inline static constexpr unsigned int DDLEDKOIALD_TypeDefinitionIndex = 7973;

class DDLEDKOIALD : public ::System::Object
{
public:
	::GBGMOCDJLLC* OFAJAJOFGNC; // 0x10

	::System::Void _ctor(::GBGMOCDJLLC* AOKHOHCJNFJ)
	{
		return ((::System::Void(*)(::PVOID, ::GBGMOCDJLLC*))((::PBYTE)hIl2Cpp + DDLEDKOIALD__CTOR_OFFSET))(this, AOKHOHCJNFJ);
	}

	::FNLFLIJLBJP* BFMFPHKHFEF(::MACLIDNIBBE* EENEBNINEOB, ::System::Action_1<::System::Exception*>* ADNIDJNEDGO)
	{
		return ((::FNLFLIJLBJP*(*)(::PVOID, ::MACLIDNIBBE*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + DDLEDKOIALD_BFMFPHKHFEF_OFFSET))(this, EENEBNINEOB, ADNIDJNEDGO);
	}
};
