#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Watermark { class WatermarkImageManager; }
namespace System { class Object; }

#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__DELAYREQUESTDISPLAYWATERMARKINFO_D__23_CTOR_OFFSET UNITYSDK_OFFSET(0x1C01A0E0)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__DELAYREQUESTDISPLAYWATERMARKINFO_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C01B910)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__DELAYREQUESTDISPLAYWATERMARKINFO_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C01BB00)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__DELAYREQUESTDISPLAYWATERMARKINFO_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C01BB60)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__DELAYREQUESTDISPLAYWATERMARKINFO_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C01BB10)
#define MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__DELAYREQUESTDISPLAYWATERMARKINFO_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C01B900)

namespace MiHoYo::SDK::Watermark
{
	inline static constexpr unsigned int WatermarkImageManager__DelayRequestDisplayWatermarkInfo_d__23_TypeDefinitionIndex = 8871;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23>
	class WatermarkImageManager__DelayRequestDisplayWatermarkInfo_d__23 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Watermark::WatermarkImageManager* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Single delaySeconds; // 0x20
		::System::Int32 __1__state; // 0x24
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__DELAYREQUESTDISPLAYWATERMARKINFO_D__23_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__DELAYREQUESTDISPLAYWATERMARKINFO_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__DELAYREQUESTDISPLAYWATERMARKINFO_D__23_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__DELAYREQUESTDISPLAYWATERMARKINFO_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__DELAYREQUESTDISPLAYWATERMARKINFO_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKIMAGEMANAGER__DELAYREQUESTDISPLAYWATERMARKINFO_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
