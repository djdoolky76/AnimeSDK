#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEHBIBDGEHG;
namespace System { class Object; }

#define LEHBIBDGEHG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E931290)
#define LEHBIBDGEHG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9312C0)
#define LEHBIBDGEHG___C___CCTOR_B__40_0_OFFSET UNITYSDK_OFFSET(0x1E9312D0)

	class LEHBIBDGEHG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38A00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEHBIBDGEHG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEHBIBDGEHG___C_CTOR_OFFSET))(this);
		}

		::LEHBIBDGEHG* __cctor_b__40_0()
		{
			return ((::LEHBIBDGEHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEHBIBDGEHG___C___CCTOR_B__40_0_OFFSET))(this);
		}

	};
