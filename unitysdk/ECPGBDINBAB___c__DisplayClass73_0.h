#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECPGBDINBAB;
class PJPAOLMBKEC;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define ECPGBDINBAB___C__DISPLAYCLASS73_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1330B710)
#define ECPGBDINBAB___C__DISPLAYCLASS73_0__SYNCOVERRIDEGRIDS_B__0_OFFSET UNITYSDK_OFFSET(0x1330CDD0)

inline static constexpr unsigned int ECPGBDINBAB___c__DisplayClass73_0_TypeDefinitionIndex = 78015;

	class ECPGBDINBAB___c__DisplayClass73_0 : public ::System::Object
	{
	public:
		::ECPGBDINBAB* __4__this; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::PJPAOLMBKEC*>* overrideGrids; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB___C__DISPLAYCLASS73_0_CTOR_OFFSET))(this);
		}

		::System::Void _SyncOverrideGrids_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPGBDINBAB___C__DISPLAYCLASS73_0__SYNCOVERRIDEGRIDS_B__0_OFFSET))(this);
		}

	};
