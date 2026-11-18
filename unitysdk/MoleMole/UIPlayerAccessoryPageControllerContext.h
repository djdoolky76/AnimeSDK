#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFIAMAJCAOA.h"
#include "unitysdk/KGHDNIGKJPM.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/OPNIGGOPDDD.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x147ED1F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryPageControllerContext_TypeDefinitionIndex = 90282;

	class UIPlayerAccessoryPageControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* AvatarIDList; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* SkinIDList; // 0x30
		::System::Int32 TabID; // 0x38
		::KGHDNIGKJPM PageType; // 0x3C
		::System::Int32 InitSkinID; // 0x40
		::HFIAMAJCAOA InitSkinType; // 0x44
		::OPNIGGOPDDD SkinPreviewType; // 0x48
		::System::Int32 InitAvatarID; // 0x4C
		::System::Int32 AccId; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
