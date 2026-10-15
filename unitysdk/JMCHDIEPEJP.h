#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LevelDialogInfo; }
namespace System { class String; }

#define JMCHDIEPEJP_CTOR_OFFSET UNITYSDK_OFFSET(0xB25E5D0)
#define JMCHDIEPEJP_GNCMNBHMIPE_OFFSET UNITYSDK_OFFSET(0xB25E560)

inline static constexpr unsigned int JMCHDIEPEJP_TypeDefinitionIndex = 65657;

	class JMCHDIEPEJP : public ::System::Object
	{
	public:
		::System::String* KIAOBNHIAPO; // 0x10
		::RPG::GameCore::LevelDialogInfo* ONHHCMNCOLI; // 0x18
		::System::String* OJDMHBKCEEM; // 0x20
		::System::UInt32 DLIBPIIIAIB; // 0x28
		::System::Boolean CFEFFDMCKKO; // 0x2C
		::System::Boolean PDNGFBJEDCL; // 0x2D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMCHDIEPEJP_CTOR_OFFSET))(this);
		}

		::System::Void GNCMNBHMIPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMCHDIEPEJP_GNCMNBHMIPE_OFFSET))(this);
		}

	};
