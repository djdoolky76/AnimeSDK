#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBIPBHFLPHL;
namespace System { class Object; }

#define EBIPBHFLPHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E242F20)
#define EBIPBHFLPHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E242F50)
#define EBIPBHFLPHL___C___CCTOR_B__458_0_OFFSET UNITYSDK_OFFSET(0x1E242F60)

	class EBIPBHFLPHL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C360);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBIPBHFLPHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIPBHFLPHL___C_CTOR_OFFSET))(this);
		}

		::EBIPBHFLPHL* __cctor_b__458_0()
		{
			return ((::EBIPBHFLPHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIPBHFLPHL___C___CCTOR_B__458_0_OFFSET))(this);
		}

	};
