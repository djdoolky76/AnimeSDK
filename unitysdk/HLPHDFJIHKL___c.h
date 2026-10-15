#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLPHDFJIHKL;
namespace System { class Object; }

#define HLPHDFJIHKL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5C7A00)
#define HLPHDFJIHKL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C7A30)
#define HLPHDFJIHKL___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E5C7A40)

	class HLPHDFJIHKL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48F30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLPHDFJIHKL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPHDFJIHKL___C_CTOR_OFFSET))(this);
		}

		::HLPHDFJIHKL* __cctor_b__43_0()
		{
			return ((::HLPHDFJIHKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPHDFJIHKL___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
