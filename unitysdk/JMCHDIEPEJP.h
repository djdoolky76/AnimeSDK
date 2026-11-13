#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LevelDialogInfo; }
namespace System { class String; }

#define JMCHDIEPEJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1A0A6AC0)
#define JMCHDIEPEJP_GNCMNBHMIPE_OFFSET UNITYSDK_OFFSET(0x1A0A6A50)

inline static constexpr unsigned int JMCHDIEPEJP_TypeDefinitionIndex = 67579;

	class JMCHDIEPEJP : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelDialogInfo* ONHHCMNCOLI; // 0x10
		::System::String* KIAOBNHIAPO; // 0x18
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
