#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKEOBMOKEFD;
namespace System { class Object; }

#define EKEOBMOKEFD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E292A90)
#define EKEOBMOKEFD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E292AD0)
#define EKEOBMOKEFD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E292AE0)

inline static constexpr unsigned int EKEOBMOKEFD___c_TypeDefinitionIndex = 31778;

	class EKEOBMOKEFD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DBD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKEOBMOKEFD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEOBMOKEFD___C_CTOR_OFFSET))(this);
		}

		::EKEOBMOKEFD* __cctor_b__28_0()
		{
			return ((::EKEOBMOKEFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEOBMOKEFD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
