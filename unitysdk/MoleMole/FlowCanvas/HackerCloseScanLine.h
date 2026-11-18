#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_HACKERCLOSESCANLINE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7BA800)
#define MOLEMOLE_FLOWCANVAS_HACKERCLOSESCANLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7BB230)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerCloseScanLine_TypeDefinitionIndex = 64265;

	class HackerCloseScanLine
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERCLOSESCANLINE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERCLOSESCANLINE_INVOKE_OFFSET))(this, a);
		}
	};
}
