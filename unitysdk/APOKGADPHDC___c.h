#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APOKGADPHDC;
namespace System { class Object; }

#define APOKGADPHDC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E67B9D0)
#define APOKGADPHDC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E67BA10)
#define APOKGADPHDC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E7AD560)

	class APOKGADPHDC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APOKGADPHDC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APOKGADPHDC___C_CTOR_OFFSET))(this);
		}

		::APOKGADPHDC* __cctor_b__18_0()
		{
			return ((::APOKGADPHDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + APOKGADPHDC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
