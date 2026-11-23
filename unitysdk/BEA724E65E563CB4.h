#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define BEA724E65E563CB4__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BEA724E65E563CB4_TypeDefinitionIndex = 4003;

class BEA724E65E563CB4 : public ::E379DE61A548837D
{
public:
	::Il2CppArray<::System::Int32>* AB87E491666A5C1C; // 0x38
	::System::Boolean FFA3A26F9BE03A17; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEA724E65E563CB4__CTOR_OFFSET))(this);
	}
};
