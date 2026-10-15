#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKIOMEBIICO;
namespace System { class Object; }

#define LKIOMEBIICO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E990AC0)
#define LKIOMEBIICO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E990B00)
#define LKIOMEBIICO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E990B10)

	class LKIOMEBIICO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AA00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKIOMEBIICO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKIOMEBIICO___C_CTOR_OFFSET))(this);
		}

		::LKIOMEBIICO* __cctor_b__28_0()
		{
			return ((::LKIOMEBIICO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKIOMEBIICO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
