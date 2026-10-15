#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAIHDDPGGJA;
namespace System { class Object; }

#define CAIHDDPGGJA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E05CA00)
#define CAIHDDPGGJA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E05CA40)
#define CAIHDDPGGJA___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E05CA50)

	class CAIHDDPGGJA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAIHDDPGGJA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIHDDPGGJA___C_CTOR_OFFSET))(this);
		}

		::CAIHDDPGGJA* __cctor_b__53_0()
		{
			return ((::CAIHDDPGGJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIHDDPGGJA___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
