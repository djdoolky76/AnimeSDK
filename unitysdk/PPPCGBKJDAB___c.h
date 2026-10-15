#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPPCGBKJDAB;
namespace System { class Object; }

#define PPPCGBKJDAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFE5710)
#define PPPCGBKJDAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFE5740)
#define PPPCGBKJDAB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DFE5750)

	class PPPCGBKJDAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPPCGBKJDAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPCGBKJDAB___C_CTOR_OFFSET))(this);
		}

		::PPPCGBKJDAB* __cctor_b__33_0()
		{
			return ((::PPPCGBKJDAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPCGBKJDAB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
