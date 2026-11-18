#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define NMMDCJGKHOB_BGDLEHNJBKB_DHDNGPFAEAP_OFFSET UNITYSDK_OFFSET(0x10DA9B00)
#define NMMDCJGKHOB_BGDLEHNJBKB_IOCHHPBPCIH_OFFSET UNITYSDK_OFFSET(0x10DA9B50)
#define NMMDCJGKHOB_BGDLEHNJBKB__CTOR_OFFSET UNITYSDK_OFFSET(0x10DA32E0)

inline static constexpr unsigned int NMMDCJGKHOB_BGDLEHNJBKB_TypeDefinitionIndex = 54816;

class NMMDCJGKHOB_BGDLEHNJBKB : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_BGDLEHNJBKB__CTOR_OFFSET))(this);
	}

	::System::Void DHDNGPFAEAP(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_BGDLEHNJBKB_DHDNGPFAEAP_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void IOCHHPBPCIH(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_BGDLEHNJBKB_IOCHHPBPCIH_OFFSET))(this, PIIPCLCCOIG);
	}
};
