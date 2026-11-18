#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/System/Object.h"

#define FFNGHJHNBJJ_BADJCLBEELD_OFFSET UNITYSDK_OFFSET(0x140F06B0)
#define FFNGHJHNBJJ_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x140F0710)
#define FFNGHJHNBJJ_JBFMFIECFCA_OFFSET UNITYSDK_OFFSET(0x140F0780)
#define FFNGHJHNBJJ_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x140F0800)
#define FFNGHJHNBJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x140F06A0)

inline static constexpr unsigned int FFNGHJHNBJJ_TypeDefinitionIndex = 83448;

class FFNGHJHNBJJ : public ::System::Object
{
public:
	::MoleMole::Config::DamageElementType PGDKBJFNLOG; // 0x10
	::System::Int32 KJMHIDEJICJ; // 0x14
	::System::UInt32 BLBOGPJAJGG; // 0x18
	::System::Int32 ILHLKLMPOAP; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFNGHJHNBJJ__CTOR_OFFSET))(this);
	}

	::System::Int32 BADJCLBEELD(::System::Int32 BIOGEIHKABE)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FFNGHJHNBJJ_BADJCLBEELD_OFFSET))(this, BIOGEIHKABE);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::DamageElementType EIILOAOBACD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + FFNGHJHNBJJ_BBOMJDBNHIC_OFFSET))(this, EIILOAOBACD);
	}

	::System::Int32 JBFMFIECFCA(::System::Int32 BIOGEIHKABE, ::System::UInt32 DEDOHCODKHN)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + FFNGHJHNBJJ_JBFMFIECFCA_OFFSET))(this, BIOGEIHKABE, DEDOHCODKHN);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFNGHJHNBJJ_NPOLNFDBOOD_OFFSET))(this);
	}
};
