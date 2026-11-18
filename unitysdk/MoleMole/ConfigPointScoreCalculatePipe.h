#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigPointScoreCalacutor.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LHCGANEGALN.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGPOINTSCORECALCULATEPIPE_LLCPLICBCCF_OFFSET UNITYSDK_OFFSET(0x180C9B60)
#define MOLEMOLE_CONFIGPOINTSCORECALCULATEPIPE__CTOR_OFFSET UNITYSDK_OFFSET(0x180C9B50)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigPointScoreCalculatePipe_TypeDefinitionIndex = 75385;

	class ConfigPointScoreCalculatePipe : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::ConfigPointScoreCalacutor>* calculators; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPOINTSCORECALCULATEPIPE__CTOR_OFFSET))(this);
		}

		::System::Void LLCPLICBCCF(::LHCGANEGALN& AAOCANGHBDG)
		{
			return ((::System::Void(*)(::PVOID, ::LHCGANEGALN&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPOINTSCORECALCULATEPIPE_LLCPLICBCCF_OFFSET))(this, AAOCANGHBDG);
		}
	};
}
