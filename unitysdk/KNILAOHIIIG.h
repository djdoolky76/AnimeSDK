#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }

#define KNILAOHIIIG__CTOR_OFFSET UNITYSDK_OFFSET(0x157FFE60)

inline static constexpr unsigned int KNILAOHIIIG_TypeDefinitionIndex = 40689;

class KNILAOHIIIG : public ::System::Object
{
public:
	::System::Action_2<::System::Single, ::System::Boolean>* BJHDHKKIKCL; // 0x10
	::System::Boolean NPFIONPDFED; // 0x18
	::System::Byte _padding0[0x3];
	::System::Single BFGHPIFHKAO; // 0x1C
	::System::Single AGHMBEANEBJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNILAOHIIIG__CTOR_OFFSET))(this);
	}
};
