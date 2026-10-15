#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBNNCAIJLKL;
namespace System { class Object; }

#define BBNNCAIJLKL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7CA580)
#define BBNNCAIJLKL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7CA5C0)
#define BBNNCAIJLKL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7CA5D0)

	class BBNNCAIJLKL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x485B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBNNCAIJLKL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNNCAIJLKL___C_CTOR_OFFSET))(this);
		}

		::BBNNCAIJLKL* __cctor_b__28_0()
		{
			return ((::BBNNCAIJLKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNNCAIJLKL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
