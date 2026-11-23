#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class A4B8A0A2231B996A;
class AB642D1382756991;

#define AA4E113FC2BA3061__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int AA4E113FC2BA3061_TypeDefinitionIndex = 96;

class AA4E113FC2BA3061 : public ::E379DE61A548837D
{
public:
	::A4B8A0A2231B996A* E503CF3EAE138E9D; // 0x38
	::AB642D1382756991* F24F89B03931F93E; // 0x40
	::System::Boolean F95BFD7F4B51A765; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA4E113FC2BA3061__CTOR_OFFSET))(this);
	}
};
