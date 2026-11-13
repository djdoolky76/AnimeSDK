#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class OEMOIGDNPNP;

#define CBJLKMFPGAC_CTOR_OFFSET UNITYSDK_OFFSET(0x18FE5300)
#define CBJLKMFPGAC_HMPDCLHIPHI_OFFSET UNITYSDK_OFFSET(0x18FE51A0)

inline static constexpr unsigned int CBJLKMFPGAC_TypeDefinitionIndex = 57285;

	class CBJLKMFPGAC : public ::System::Object
	{
	public:
		::System::Boolean KKKIONIDKFA; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 FEHABNJEENK; // 0x14
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
