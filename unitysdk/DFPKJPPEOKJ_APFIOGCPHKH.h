#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define DFPKJPPEOKJ_APFIOGCPHKH_DMPJOFAMFDH_OFFSET UNITYSDK_OFFSET(0x19A41110)
#define DFPKJPPEOKJ_APFIOGCPHKH__CTOR_OFFSET UNITYSDK_OFFSET(0x19A41100)

inline static constexpr unsigned int DFPKJPPEOKJ_APFIOGCPHKH_TypeDefinitionIndex = 76781;

class DFPKJPPEOKJ_APFIOGCPHKH : public ::System::Object
{
public:
	::System::Action* MGAKJHJAGJI; // 0x10
	::System::Int32 HBINAGPODHA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_APFIOGCPHKH__CTOR_OFFSET))(this);
	}

	::System::Void DMPJOFAMFDH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_APFIOGCPHKH_DMPJOFAMFDH_OFFSET))(this);
	}
};
