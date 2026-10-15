#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNFOMOBLFAC;
namespace System { class Object; }

#define NNFOMOBLFAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB82EE0)
#define NNFOMOBLFAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB82F20)
#define NNFOMOBLFAC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EB82F30)

	class NNFOMOBLFAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNFOMOBLFAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFOMOBLFAC___C_CTOR_OFFSET))(this);
		}

		::NNFOMOBLFAC* __cctor_b__33_0()
		{
			return ((::NNFOMOBLFAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFOMOBLFAC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
