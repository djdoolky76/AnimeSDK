#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define MJDCEGKHJEG_MGBLJIGJDBE_ANGNJDGJFIM_OFFSET UNITYSDK_OFFSET(0x11A059E0)
#define MJDCEGKHJEG_MGBLJIGJDBE_PIIPDFBJLGM_OFFSET UNITYSDK_OFFSET(0x11A059F0)
#define MJDCEGKHJEG_MGBLJIGJDBE__CTOR_OFFSET UNITYSDK_OFFSET(0x11A059D0)

inline static constexpr unsigned int MJDCEGKHJEG_MGBLJIGJDBE_TypeDefinitionIndex = 56437;

class MJDCEGKHJEG_MGBLJIGJDBE : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_MGBLJIGJDBE__CTOR_OFFSET))(this);
	}

	::System::Void ANGNJDGJFIM(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_MGBLJIGJDBE_ANGNJDGJFIM_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void PIIPDFBJLGM(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_MGBLJIGJDBE_PIIPDFBJLGM_OFFSET))(this, PIIPCLCCOIG);
	}
};
