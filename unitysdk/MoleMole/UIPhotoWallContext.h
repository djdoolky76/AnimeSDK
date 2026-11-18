#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FPGPDMONAAN.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class JGBMOOJHMBF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIPHOTOWALLCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14CA8E80)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoWallContext_TypeDefinitionIndex = 63660;

	class UIPhotoWallContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JGBMOOJHMBF* CurrentSys; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* FriendSysInfos; // 0x30
		::FPGPDMONAAN OpenMode; // 0x38
		::System::Int32 Index; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
