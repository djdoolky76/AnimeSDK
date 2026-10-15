#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJJJPBCNDCC;
namespace System { class Object; }

#define JJJJPBCNDCC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E75E960)
#define JJJJPBCNDCC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E75E9A0)
#define JJJJPBCNDCC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E75E9B0)

	class JJJJPBCNDCC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJJJPBCNDCC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJJJPBCNDCC___C_CTOR_OFFSET))(this);
		}

		::JJJJPBCNDCC* __cctor_b__28_0()
		{
			return ((::JJJJPBCNDCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJJJPBCNDCC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
