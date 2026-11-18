#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CHEKDBPKDFF_KMPHIJAEKBG_MLKEOBAGOIG_OFFSET UNITYSDK_OFFSET(0x1153EBF0)
#define CHEKDBPKDFF_KMPHIJAEKBG_PBAKBNBJIEA_OFFSET UNITYSDK_OFFSET(0x1153EB30)
#define CHEKDBPKDFF_KMPHIJAEKBG__CTOR_OFFSET UNITYSDK_OFFSET(0x1153EB20)

inline static constexpr unsigned int CHEKDBPKDFF_KMPHIJAEKBG_TypeDefinitionIndex = 42806;

class CHEKDBPKDFF_KMPHIJAEKBG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* MKHNKIFFJFF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEKDBPKDFF_KMPHIJAEKBG__CTOR_OFFSET))(this);
	}

	::System::Void PBAKBNBJIEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEKDBPKDFF_KMPHIJAEKBG_PBAKBNBJIEA_OFFSET))(this);
	}

	::System::Void MLKEOBAGOIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEKDBPKDFF_KMPHIJAEKBG_MLKEOBAGOIG_OFFSET))(this);
	}
};
