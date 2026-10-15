#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KDPNDCMKOKD_CTOR_OFFSET UNITYSDK_OFFSET(0xB3683B0)

inline static constexpr unsigned int KDPNDCMKOKD_TypeDefinitionIndex = 74903;

	class KDPNDCMKOKD : public ::System::Object
	{
	public:
		::System::UInt32 GJEMOLIJJMP; // 0x10
		::System::UInt32 LNLDJDODOIL; // 0x14
		::System::UInt32 AILLFLECICB; // 0x18
		::System::UInt32 CECFNAHHIKG; // 0x1C
		::System::UInt32 BEGLJAJNODJ; // 0x20
		::System::UInt32 NBJFAIOOHIH; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPNDCMKOKD_CTOR_OFFSET))(this);
		}

	};
