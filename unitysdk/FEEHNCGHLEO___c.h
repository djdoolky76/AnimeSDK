#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEEHNCGHLEO;
namespace System { class Object; }

#define FEEHNCGHLEO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E364D30)
#define FEEHNCGHLEO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E364D70)
#define FEEHNCGHLEO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E364D80)

	class FEEHNCGHLEO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D600);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEEHNCGHLEO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEHNCGHLEO___C_CTOR_OFFSET))(this);
		}

		::FEEHNCGHLEO* __cctor_b__28_0()
		{
			return ((::FEEHNCGHLEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEHNCGHLEO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
