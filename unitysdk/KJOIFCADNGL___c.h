#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJOIFCADNGL;
namespace System { class Object; }

#define KJOIFCADNGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E873010)
#define KJOIFCADNGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E873040)
#define KJOIFCADNGL___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E873050)

	class KJOIFCADNGL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJOIFCADNGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOIFCADNGL___C_CTOR_OFFSET))(this);
		}

		::KJOIFCADNGL* __cctor_b__43_0()
		{
			return ((::KJOIFCADNGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOIFCADNGL___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
