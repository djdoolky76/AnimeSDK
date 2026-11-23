#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_FE2CBCAA6ADCE589.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class WeGameManager; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_WEGAMEMANAGER_ADF9497FF926C12B_BBD441A4C4CE3466_OFFSET UNITYSDK_OFFSET(0x39E4230)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_ADF9497FF926C12B_F42300D92D10CDAF_OFFSET UNITYSDK_OFFSET(0x39E4070)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_ADF9497FF926C12B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int WeGameManager_ADF9497FF926C12B_TypeDefinitionIndex = 12704;

	class WeGameManager_ADF9497FF926C12B : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::WeGameManager* A544919C800E2923; // 0x10
		::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_ADF9497FF926C12B__CTOR_OFFSET))(this);
		}

		::System::Void BBD441A4C4CE3466(::MiHoYo::SDK::CallbackModel_1<::System::String*>* E225F8A5D4C22E30)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_ADF9497FF926C12B_BBD441A4C4CE3466_OFFSET))(this, E225F8A5D4C22E30);
		}

		::System::Void F42300D92D10CDAF(::MiHoYo::SDK::Alert_FE2CBCAA6ADCE589 E82293C0814051A5)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_FE2CBCAA6ADCE589))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_ADF9497FF926C12B_F42300D92D10CDAF_OFFSET))(this, E82293C0814051A5);
		}
	};
}
