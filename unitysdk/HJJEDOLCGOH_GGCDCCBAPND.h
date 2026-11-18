#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define HJJEDOLCGOH_GGCDCCBAPND_AFODIIOIIJO_OFFSET UNITYSDK_OFFSET(0x15DBBAF0)
#define HJJEDOLCGOH_GGCDCCBAPND__CTOR_OFFSET UNITYSDK_OFFSET(0x15DBBAE0)

inline static constexpr unsigned int HJJEDOLCGOH_GGCDCCBAPND_TypeDefinitionIndex = 87731;

class HJJEDOLCGOH_GGCDCCBAPND : public ::System::Object
{
public:
	::System::Action* DMPEOJCCCLO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_GGCDCCBAPND__CTOR_OFFSET))(this);
	}

	::System::Void AFODIIOIIJO(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_GGCDCCBAPND_AFODIIOIIJO_OFFSET))(this, PIIPCLCCOIG);
	}
};
