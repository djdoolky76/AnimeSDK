#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MCONJOMJABJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EKPFDNANCLC_CIBIBBBAMHC_CCEHIGNCJMK_OFFSET UNITYSDK_OFFSET(0x11A99760)
#define EKPFDNANCLC_CIBIBBBAMHC__CTOR_OFFSET UNITYSDK_OFFSET(0x11A99750)

inline static constexpr unsigned int EKPFDNANCLC_CIBIBBBAMHC_TypeDefinitionIndex = 73134;

class EKPFDNANCLC_CIBIBBBAMHC : public ::System::Object
{
public:
	::System::Action* LDDCKKNAKJJ; // 0x10
	::System::Collections::Generic::List_1<::MCONJOMJABJ*>* JJBAHJNJPEL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPFDNANCLC_CIBIBBBAMHC__CTOR_OFFSET))(this);
	}

	::System::Void CCEHIGNCJMK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPFDNANCLC_CIBIBBBAMHC_CCEHIGNCJMK_OFFSET))(this);
	}
};
