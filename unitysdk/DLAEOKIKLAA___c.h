#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLAEOKIKLAA;
namespace System { class Object; }

#define DLAEOKIKLAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1DC3B0)
#define DLAEOKIKLAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1DC3F0)
#define DLAEOKIKLAA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1DC400)

	class DLAEOKIKLAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLAEOKIKLAA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAEOKIKLAA___C_CTOR_OFFSET))(this);
		}

		::DLAEOKIKLAA* __cctor_b__23_0()
		{
			return ((::DLAEOKIKLAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAEOKIKLAA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
