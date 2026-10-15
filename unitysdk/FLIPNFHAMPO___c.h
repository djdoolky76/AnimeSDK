#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLIPNFHAMPO;
namespace System { class Object; }

#define FLIPNFHAMPO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3D97B0)
#define FLIPNFHAMPO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D97F0)
#define FLIPNFHAMPO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E3D9800)

	class FLIPNFHAMPO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64800);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLIPNFHAMPO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIPNFHAMPO___C_CTOR_OFFSET))(this);
		}

		::FLIPNFHAMPO* __cctor_b__23_0()
		{
			return ((::FLIPNFHAMPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIPNFHAMPO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
