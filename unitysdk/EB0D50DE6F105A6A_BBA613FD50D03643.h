#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EB0D50DE6F105A6A_BBA613FD50D03643_B6804839FAF41C3B_OFFSET UNITYSDK_OFFSET(0x29CEE60)
#define EB0D50DE6F105A6A_BBA613FD50D03643__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EB0D50DE6F105A6A_BBA613FD50D03643_TypeDefinitionIndex = 15646;

class EB0D50DE6F105A6A_BBA613FD50D03643 : public ::System::Object
{
public:
	::System::Int32 F29E9785517D391E; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* E41EB813C7FB644A; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EB0D50DE6F105A6A_BBA613FD50D03643__CTOR_OFFSET))(this);
	}

	::System::Void B6804839FAF41C3B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EB0D50DE6F105A6A_BBA613FD50D03643_B6804839FAF41C3B_OFFSET))(this);
	}
};
