#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/BF62A85A97DF5E8E.h"

#define E59F19D607F278CA__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E59F19D607F278CA_TypeDefinitionIndex = 7954;

class E59F19D607F278CA : public ::E379DE61A548837D
{
public:
	::System::UInt32 B398D24F33F54A05; // 0x38
	::System::UInt32 E4A97BA4499AEA45; // 0x3C
	::System::UInt32 FBBB0B49CA2C4C8E; // 0x40
	::System::UInt32 B98764913FF8298E; // 0x44
	::E68AA4EB51923C98::BF62A85A97DF5E8E A235E5CC98C6CCE7; // 0x48
	::System::Boolean E12249F056834FD7; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E59F19D607F278CA__CTOR_OFFSET))(this);
	}
};
