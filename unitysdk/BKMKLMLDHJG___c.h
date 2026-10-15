#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKMKLMLDHJG;
namespace System { class Object; }

#define BKMKLMLDHJG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF5C130)
#define BKMKLMLDHJG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF5C170)
#define BKMKLMLDHJG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DF5C180)

	class BKMKLMLDHJG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C0F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKMKLMLDHJG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMKLMLDHJG___C_CTOR_OFFSET))(this);
		}

		::BKMKLMLDHJG* __cctor_b__33_0()
		{
			return ((::BKMKLMLDHJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMKLMLDHJG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
