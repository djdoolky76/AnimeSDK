#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class FOAAPOIKKMA;
class MIFPBGCMINO;

#define MOLEMOLE_UISOCIALCIRCLENEWSROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x182630B0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleNewsRowContext_TypeDefinitionIndex = 57274;

	class UISocialCircleNewsRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MIFPBGCMINO* LogData; // 0x28
		::FOAAPOIKKMA* NewsData; // 0x30
		::System::Boolean IsTimeTitle; // 0x38
		::System::Byte _padding0[0x3];
		::System::Int32 Day; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLENEWSROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
