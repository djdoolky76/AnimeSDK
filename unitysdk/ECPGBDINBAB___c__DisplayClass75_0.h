#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJPAOLMBKEC;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define ECPGBDINBAB___C__DISPLAYCLASS75_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1330BB70)
#define ECPGBDINBAB___C__DISPLAYCLASS75_0___GETDYNAMICCELLLOOKATPOSITION_B__0_OFFSET UNITYSDK_OFFSET(0x1330CE70)

inline static constexpr unsigned int ECPGBDINBAB___c__DisplayClass75_0_TypeDefinitionIndex = 78017;

	class ECPGBDINBAB___c__DisplayClass75_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::PJPAOLMBKEC*>* overrideGrids; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB___C__DISPLAYCLASS75_0_CTOR_OFFSET))(this);
		}

		::System::Int32 __GetDynamicCellLookAtPosition_b__0(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ECPGBDINBAB___C__DISPLAYCLASS75_0___GETDYNAMICCELLLOOKATPOSITION_B__0_OFFSET))(this, a1, a2);
		}

	};
