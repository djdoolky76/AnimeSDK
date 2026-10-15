#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AlleyBlockAttachmentType.h"
#include "unitysdk/System/Object.h"
class PMNODEHAEDC;
namespace RPG::GameCore { class AlleyBaseGridItemData; }

#define PMNODEHAEDC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC328940)
#define PMNODEHAEDC_CTOR_OFFSET UNITYSDK_OFFSET(0xC3289C0)

	class PMNODEHAEDC : public ::System::Object
	{
	public:
		::RPG::Client::AlleyBlockAttachmentType HECHBDHCCPH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNODEHAEDC_CTOR_OFFSET))(this);
		}

		static ::PMNODEHAEDC* BPLPBPMEODA(::RPG::GameCore::AlleyBaseGridItemData* a1)
		{
			return ((::PMNODEHAEDC*(*)(::RPG::GameCore::AlleyBaseGridItemData*))((::PBYTE)hIl2Cpp + PMNODEHAEDC_BPLPBPMEODA_OFFSET))(a1);
		}

	};
