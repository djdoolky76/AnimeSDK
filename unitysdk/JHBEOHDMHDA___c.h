#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JHBEOHDMHDA;
namespace System { class Object; }

#define JHBEOHDMHDA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E741F00)
#define JHBEOHDMHDA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E741F40)
#define JHBEOHDMHDA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E741F50)

	class JHBEOHDMHDA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60F70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHBEOHDMHDA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBEOHDMHDA___C_CTOR_OFFSET))(this);
		}

		::JHBEOHDMHDA* __cctor_b__28_0()
		{
			return ((::JHBEOHDMHDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBEOHDMHDA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
