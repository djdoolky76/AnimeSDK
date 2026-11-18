#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOEHPGLBLIH;
class FCANEPJMANL;
class IBENDELLLAO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PLPMLAJELBL_MNCLOJPOFAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2BEFA0)

inline static constexpr unsigned int PLPMLAJELBL_MNCLOJPOFAM_TypeDefinitionIndex = 40045;

class PLPMLAJELBL_MNCLOJPOFAM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::FCANEPJMANL*>* BKBDPPCFPHL; // 0x10
	::IBENDELLLAO* IJJHNKALLNL; // 0x18

	::System::Void _ctor(::AOEHPGLBLIH* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::AOEHPGLBLIH*))((::PBYTE)hIl2Cpp + PLPMLAJELBL_MNCLOJPOFAM__CTOR_OFFSET))(this, DFMKILICPFB);
	}
};
