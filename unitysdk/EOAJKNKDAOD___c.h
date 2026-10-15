#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOAJKNKDAOD;
namespace System { class Object; }

#define EOAJKNKDAOD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2F61D0)
#define EOAJKNKDAOD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F6210)
#define EOAJKNKDAOD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2F6220)

	class EOAJKNKDAOD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x549F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOAJKNKDAOD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAJKNKDAOD___C_CTOR_OFFSET))(this);
		}

		::EOAJKNKDAOD* __cctor_b__28_0()
		{
			return ((::EOAJKNKDAOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAJKNKDAOD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
