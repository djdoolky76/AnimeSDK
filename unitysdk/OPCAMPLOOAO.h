#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OOFEFCIBGBJ.h"
#include "unitysdk/System/Object.h"

#define OPCAMPLOOAO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x12956F70)
#define OPCAMPLOOAO__CTOR_OFFSET UNITYSDK_OFFSET(0x12956F60)

inline static constexpr unsigned int OPCAMPLOOAO_TypeDefinitionIndex = 56003;

class OPCAMPLOOAO : public ::System::Object
{
public:
	::System::Int32 OGJPAAPMNKO; // 0x10
	::System::Boolean NAKMAFKINMP; // 0x14
	::System::Boolean IHJPBPGILOD; // 0x15
	::System::Byte _padding0[0x2];
	::System::Int32 OCDIEGIGHAC; // 0x18
	::System::Int32 JJANEHMJDEN; // 0x1C
	::OOFEFCIBGBJ KFFNLIAMLPA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCAMPLOOAO__CTOR_OFFSET))(this);
	}

	static ::OPCAMPLOOAO* DGNAAPGKIPL(::OPCAMPLOOAO* LIBPKNHDIGP)
	{
		return ((::OPCAMPLOOAO*(*)(::OPCAMPLOOAO*))((::PBYTE)hIl2Cpp + OPCAMPLOOAO_DGNAAPGKIPL_OFFSET))(LIBPKNHDIGP);
	}
};
