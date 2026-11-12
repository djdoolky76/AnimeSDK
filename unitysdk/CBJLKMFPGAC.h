#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class OEMOIGDNPNP;

#define CBJLKMFPGAC_CTOR_OFFSET UNITYSDK_OFFSET(0xCE182D0)
#define CBJLKMFPGAC_HMPDCLHIPHI_OFFSET UNITYSDK_OFFSET(0xCE18170)

inline static constexpr unsigned int CBJLKMFPGAC_TypeDefinitionIndex = 57285;

	class CBJLKMFPGAC : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint NNACKOBKFGE; // 0x10
		::System::UInt32 FEHABNJEENK; // 0x18
		::System::Boolean KKKIONIDKFA; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJLKMFPGAC_CTOR_OFFSET))(this);
		}

		::OEMOIGDNPNP* HMPDCLHIPHI()
		{
			return ((::OEMOIGDNPNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJLKMFPGAC_HMPDCLHIPHI_OFFSET))(this);
		}

	};
