#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIHIPJNFDIA.h"
#include "unitysdk/System/Object.h"

class ICACMMBALGC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RUNTIMEAREAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x13A078A0)

namespace MoleMole
{
	inline static constexpr unsigned int SummerTideTreasuresSubSystem_RuntimeAreaInfo_TypeDefinitionIndex = 69675;

	class SummerTideTreasuresSubSystem_RuntimeAreaInfo : public ::System::Object
	{
	public:
		::ICACMMBALGC* config; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* points; // 0x18
		::FIHIPJNFDIA areaType; // 0x20
		::System::Int32 curWeight; // 0x24
		::System::Boolean isValid; // 0x28
		::System::Boolean isValidWithoutDistance; // 0x29
		::System::Byte _padding0[0x2];
		::System::Int32 areaID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RUNTIMEAREAINFO__CTOR_OFFSET))(this);
		}
	};
}
