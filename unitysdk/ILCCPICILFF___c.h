#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILCCPICILFF;
namespace System { class Object; }

#define ILCCPICILFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6A92E0)
#define ILCCPICILFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A9320)
#define ILCCPICILFF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E6A9330)

	class ILCCPICILFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55F70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILCCPICILFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCCPICILFF___C_CTOR_OFFSET))(this);
		}

		::ILCCPICILFF* __cctor_b__33_0()
		{
			return ((::ILCCPICILFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCCPICILFF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
