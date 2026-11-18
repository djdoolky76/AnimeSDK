#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KKJKAKMOCJC_IKOFLGBCMGE;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KKJKAKMOCJC_FEMAFGOEPIA_LFLIKJEPCDJ_OFFSET UNITYSDK_OFFSET(0x17915DC0)
#define KKJKAKMOCJC_FEMAFGOEPIA__CTOR_OFFSET UNITYSDK_OFFSET(0x17915DB0)

inline static constexpr unsigned int KKJKAKMOCJC_FEMAFGOEPIA_TypeDefinitionIndex = 66245;

class KKJKAKMOCJC_FEMAFGOEPIA : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* MHOEENBDGFK; // 0x10
	::KKJKAKMOCJC_IKOFLGBCMGE* EEMOEMFLABI; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* PHHBLKBJLEA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJKAKMOCJC_FEMAFGOEPIA__CTOR_OFFSET))(this);
	}

	::System::Void LFLIKJEPCDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJKAKMOCJC_FEMAFGOEPIA_LFLIKJEPCDJ_OFFSET))(this);
	}
};
