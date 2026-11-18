#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define LBAINOMNKFD_GPMBLEIAIII_EMPKHDKOAII_OFFSET UNITYSDK_OFFSET(0x17737FE0)
#define LBAINOMNKFD_GPMBLEIAIII_GNDKPBGIBBI_OFFSET UNITYSDK_OFFSET(0x17738030)
#define LBAINOMNKFD_GPMBLEIAIII__CTOR_OFFSET UNITYSDK_OFFSET(0x17737FD0)

inline static constexpr unsigned int LBAINOMNKFD_GPMBLEIAIII_TypeDefinitionIndex = 53385;

class LBAINOMNKFD_GPMBLEIAIII : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAINOMNKFD_GPMBLEIAIII__CTOR_OFFSET))(this);
	}

	::System::Void EMPKHDKOAII(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LBAINOMNKFD_GPMBLEIAIII_EMPKHDKOAII_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void GNDKPBGIBBI(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LBAINOMNKFD_GPMBLEIAIII_GNDKPBGIBBI_OFFSET))(this, PIIPCLCCOIG);
	}
};
