#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class OEMOIGDNPNP;

#define CBJLKMFPGAC_CTOR_OFFSET UNITYSDK_OFFSET(0xC4AF2D0)
#define CBJLKMFPGAC_HMPDCLHIPHI_OFFSET UNITYSDK_OFFSET(0xC4AF170)

	class CBJLKMFPGAC : public ::System::Object
	{
	public:
		::System::UInt32 FEHABNJEENK; // 0x10
		::System::Boolean KKKIONIDKFA; // 0x14
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FixPoint NNACKOBKFGE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJLKMFPGAC_CTOR_OFFSET))(this);
		}

		::OEMOIGDNPNP* HMPDCLHIPHI()
		{
			return ((::OEMOIGDNPNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJLKMFPGAC_HMPDCLHIPHI_OFFSET))(this);
		}

	};
