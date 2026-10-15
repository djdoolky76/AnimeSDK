#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MPPHIOJNKGB;
namespace System { class Object; }

#define MPPHIOJNKGB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EABD2B0)
#define MPPHIOJNKGB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EABD2F0)
#define MPPHIOJNKGB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EABD300)

	class MPPHIOJNKGB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BF40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPPHIOJNKGB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPHIOJNKGB___C_CTOR_OFFSET))(this);
		}

		::MPPHIOJNKGB* __cctor_b__33_0()
		{
			return ((::MPPHIOJNKGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPHIOJNKGB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
