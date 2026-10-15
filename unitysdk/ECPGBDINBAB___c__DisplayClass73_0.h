#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECPGBDINBAB;
class PJPAOLMBKEC;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define ECPGBDINBAB___C__DISPLAYCLASS73_0_CTOR_OFFSET UNITYSDK_OFFSET(0x13306AA0)
#define ECPGBDINBAB___C__DISPLAYCLASS73_0__SYNCOVERRIDEGRIDS_B__0_OFFSET UNITYSDK_OFFSET(0x13308160)

inline static constexpr unsigned int ECPGBDINBAB___c__DisplayClass73_0_TypeDefinitionIndex = 78014;

	class ECPGBDINBAB___c__DisplayClass73_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::PJPAOLMBKEC*>* overrideGrids; // 0x10
		::ECPGBDINBAB* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB___C__DISPLAYCLASS73_0_CTOR_OFFSET))(this);
		}

		::System::Void _SyncOverrideGrids_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB___C__DISPLAYCLASS73_0__SYNCOVERRIDEGRIDS_B__0_OFFSET))(this);
		}

	};
