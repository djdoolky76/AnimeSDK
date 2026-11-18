#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LogicMessageBase.h"

class HGAJKHIMKJP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MAINCITYREWARDPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1192D3E0)
#define MOLEMOLE_MAINCITYREWARDPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1192D2B0)

namespace MoleMole
{
	inline static constexpr unsigned int MainCityRewardPopShow_TypeDefinitionIndex = 92323;

	class MainCityRewardPopShow : public ::MoleMole::LogicMessageBase
	{
	public:
		::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* items; // 0x20

		::System::Void _ctor(::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* items)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYREWARDPOPSHOW__CTOR_OFFSET))(this, items);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYREWARDPOPSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
