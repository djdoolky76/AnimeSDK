#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIPINBALLBALLSELECTPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x147EAD00)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballBallSelectPageController_Context_TypeDefinitionIndex = 67679;

	class UIPinballBallSelectPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* BallIDList; // 0x28
		::System::Boolean IsIllustrationBook; // 0x30
		::System::Byte _padding0[0x3];
		::System::Int32 DefaultBallID; // 0x34
		::System::Int32 LevelID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBALLSELECTPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
