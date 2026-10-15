#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class OEMOIGDNPNP;

#define CBJLKMFPGAC_CTOR_OFFSET UNITYSDK_OFFSET(0xC4A7E40)
#define CBJLKMFPGAC_HMPDCLHIPHI_OFFSET UNITYSDK_OFFSET(0xC4A7CE0)

inline static constexpr unsigned int CBJLKMFPGAC_TypeDefinitionIndex = 56073;

	class CBJLKMFPGAC : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint NNACKOBKFGE; // 0x10
		::System::Boolean KKKIONIDKFA; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 FEHABNJEENK; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJLKMFPGAC_CTOR_OFFSET))(this);
		}

		::OEMOIGDNPNP* HMPDCLHIPHI()
		{
			return ((::OEMOIGDNPNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJLKMFPGAC_HMPDCLHIPHI_OFFSET))(this);
		}

	};
