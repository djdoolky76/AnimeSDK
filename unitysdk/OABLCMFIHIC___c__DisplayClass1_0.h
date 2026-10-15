#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AlleyBuffGridItemData; }

#define OABLCMFIHIC___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBD195D0)
#define OABLCMFIHIC___C__DISPLAYCLASS1_0__GETATTACHMENTDATA_B__0_OFFSET UNITYSDK_OFFSET(0xBD1A190)

inline static constexpr unsigned int OABLCMFIHIC___c__DisplayClass1_0_TypeDefinitionIndex = 62352;

	class OABLCMFIHIC___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::UInt32 x; // 0x10
		::System::UInt32 y; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABLCMFIHIC___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAttachmentData_b__0(::RPG::GameCore::AlleyBuffGridItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AlleyBuffGridItemData*))((::PBYTE)hIl2Cpp + OABLCMFIHIC___C__DISPLAYCLASS1_0__GETATTACHMENTDATA_B__0_OFFSET))(this, a1);
		}

	};
