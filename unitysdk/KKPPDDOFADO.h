#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class CIEEHMBGEIF;
class OFAKEFLLHNP;

#define KKPPDDOFADO_CTOR_OFFSET UNITYSDK_OFFSET(0xB4D54E0)
#define KKPPDDOFADO_GEMKFCFDNDO_OFFSET UNITYSDK_OFFSET(0xB4D54A0)
#define KKPPDDOFADO_PAMKOLICNOL_OFFSET UNITYSDK_OFFSET(0xB4D53C0)

inline static constexpr unsigned int KKPPDDOFADO_TypeDefinitionIndex = 65134;

	class KKPPDDOFADO : public ::System::Object
	{
	public:
		::CIEEHMBGEIF* IAFNNMFIMOI; // 0x10
		::System::Boolean FJMFKJEIOIO; // 0x18
		::System::Boolean AKPACJGDDPC; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPPDDOFADO_CTOR_OFFSET))(this);
		}

		::OFAKEFLLHNP* PAMKOLICNOL(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::OFAKEFLLHNP*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + KKPPDDOFADO_PAMKOLICNOL_OFFSET))(this, a1);
		}

		::System::Void GEMKFCFDNDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPPDDOFADO_GEMKFCFDNDO_OFFSET))(this);
		}

	};
