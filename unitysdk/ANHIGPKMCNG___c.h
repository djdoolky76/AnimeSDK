#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANHIGPKMCNG;
namespace System { class Object; }

#define ANHIGPKMCNG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E65F8B0)
#define ANHIGPKMCNG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E65F8F0)
#define ANHIGPKMCNG___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E65F900)

	class ANHIGPKMCNG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F1F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANHIGPKMCNG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANHIGPKMCNG___C_CTOR_OFFSET))(this);
		}

		::ANHIGPKMCNG* __cctor_b__48_0()
		{
			return ((::ANHIGPKMCNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANHIGPKMCNG___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
