#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLMBEOAENGF;
namespace System { class Object; }

#define GLMBEOAENGF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4C5520)
#define GLMBEOAENGF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C5560)
#define GLMBEOAENGF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E4C5570)

	class GLMBEOAENGF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1FD00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLMBEOAENGF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMBEOAENGF___C_CTOR_OFFSET))(this);
		}

		::GLMBEOAENGF* __cctor_b__33_0()
		{
			return ((::GLMBEOAENGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMBEOAENGF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
