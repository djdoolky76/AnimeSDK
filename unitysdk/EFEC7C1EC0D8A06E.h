#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/BF62A85A97DF5E8E.h"

class EB11DE8A8A1E3314;

#define EFEC7C1EC0D8A06E__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int EFEC7C1EC0D8A06E_TypeDefinitionIndex = 284;

class EFEC7C1EC0D8A06E : public ::E379DE61A548837D
{
public:
	::System::UInt32 EDB42C4C835AAD90; // 0x38
	::System::UInt32 B98764913FF8298E; // 0x3C
	::EB11DE8A8A1E3314* A5FFCDE5177DE276; // 0x40
	::System::Int32 F633093681D27327; // 0x48
	::E68AA4EB51923C98::BF62A85A97DF5E8E ADE0BF19E4580C39; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFEC7C1EC0D8A06E__CTOR_OFFSET))(this);
	}
};
