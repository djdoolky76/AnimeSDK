#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
class PLPHBLLCFBF;
namespace System { template <typename T> class Action_1; }

#define EKINIOLOOOE_AHOFFGCJKEN_EEKKFHFFMIK_OFFSET UNITYSDK_OFFSET(0x16159120)
#define EKINIOLOOOE_AHOFFGCJKEN_LBBEPENINGB_OFFSET UNITYSDK_OFFSET(0x16159190)
#define EKINIOLOOOE_AHOFFGCJKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x16159110)

inline static constexpr unsigned int EKINIOLOOOE_AHOFFGCJKEN_TypeDefinitionIndex = 51593;

class EKINIOLOOOE_AHOFFGCJKEN : public ::System::Object
{
public:
	::System::Action_1<::PLPHBLLCFBF*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKINIOLOOOE_AHOFFGCJKEN__CTOR_OFFSET))(this);
	}

	::System::Void EEKKFHFFMIK(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EKINIOLOOOE_AHOFFGCJKEN_EEKKFHFFMIK_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void LBBEPENINGB(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EKINIOLOOOE_AHOFFGCJKEN_LBBEPENINGB_OFFSET))(this, NAPFALLANDL);
	}
};
