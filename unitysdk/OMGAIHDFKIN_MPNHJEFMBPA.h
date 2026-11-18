#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/System/ValueType.h"

class OMGAIHDFKIN;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define OMGAIHDFKIN_MPNHJEFMBPA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6021D0)
#define OMGAIHDFKIN_MPNHJEFMBPA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int OMGAIHDFKIN_MPNHJEFMBPA_TypeDefinitionIndex = 89338;

struct alignas(8) OMGAIHDFKIN_MPNHJEFMBPA
{
	::System::Object* IELMICFKAAI; // 0x10
	::System::Byte _padding0[0x8];
	::OMGAIHDFKIN* KLHPEBKNIFB; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> ECODFICGLGM; // 0x28
	::System::Byte _padding1[0x10];
	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* CPLGCIBONJG; // 0x40
	::System::Boolean HAAJFAGFMEA; // 0x48
	::System::Boolean DMHJDLFBPKP; // 0x49
	::System::Byte _padding2[0x2];
	::System::Int32 DMLKNCPMMPB; // 0x4C
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGAIHDFKIN_MPNHJEFMBPA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + OMGAIHDFKIN_MPNHJEFMBPA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
