#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole { class InitCharacterPerform; }
namespace MoleMole { class PerformConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EOPCGOHIPLE_MCMJBFPLEOD_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x11CC75C0)
#define EOPCGOHIPLE_MCMJBFPLEOD_HOLMEPGEFBO_OFFSET UNITYSDK_OFFSET(0x11CC7750)
#define EOPCGOHIPLE_MCMJBFPLEOD__CTOR_OFFSET UNITYSDK_OFFSET(0x11CC75B0)

inline static constexpr unsigned int EOPCGOHIPLE_MCMJBFPLEOD_TypeDefinitionIndex = 56543;

class EOPCGOHIPLE_MCMJBFPLEOD : public ::System::Object
{
public:
	::Foundation::AssetPath PJNJFACFJHP; // 0x10
	::System::Func_2<::MoleMole::InitCharacterPerform*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PerformConfig*>*>* DLMJCFBENGB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOPCGOHIPLE_MCMJBFPLEOD__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PerformConfig*>* FLIAEJGDMLI(::MoleMole::InitCharacterPerform* DFMKILICPFB)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PerformConfig*>*(*)(::PVOID, ::MoleMole::InitCharacterPerform*))((::PBYTE)hIl2Cpp + EOPCGOHIPLE_MCMJBFPLEOD_FLIAEJGDMLI_OFFSET))(this, DFMKILICPFB);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PerformConfig*>*>* HOLMEPGEFBO()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PerformConfig*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOPCGOHIPLE_MCMJBFPLEOD_HOLMEPGEFBO_OFFSET))(this);
	}
};
