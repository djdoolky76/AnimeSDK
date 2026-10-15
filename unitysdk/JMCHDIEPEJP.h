#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LevelDialogInfo; }
namespace System { class String; }

#define JMCHDIEPEJP_CTOR_OFFSET UNITYSDK_OFFSET(0xB2581D0)
#define JMCHDIEPEJP_GNCMNBHMIPE_OFFSET UNITYSDK_OFFSET(0xB258160)

inline static constexpr unsigned int JMCHDIEPEJP_TypeDefinitionIndex = 65657;

	class JMCHDIEPEJP : public ::System::Object
	{
	public:
		::System::String* OJDMHBKCEEM; // 0x10
		::System::String* KIAOBNHIAPO; // 0x18
		::RPG::GameCore::LevelDialogInfo* ONHHCMNCOLI; // 0x20
		::System::Boolean CFEFFDMCKKO; // 0x28
		::System::Boolean PDNGFBJEDCL; // 0x29
		::System::Byte _padding0[0x2];
		::System::UInt32 DLIBPIIIAIB; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMCHDIEPEJP_CTOR_OFFSET))(this);
		}

		::System::Void GNCMNBHMIPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMCHDIEPEJP_GNCMNBHMIPE_OFFSET))(this);
		}

	};
