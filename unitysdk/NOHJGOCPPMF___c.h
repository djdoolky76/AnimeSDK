#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOHJGOCPPMF;
namespace System { class Object; }

#define NOHJGOCPPMF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB8A830)
#define NOHJGOCPPMF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB8A860)
#define NOHJGOCPPMF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EB8A870)

	class NOHJGOCPPMF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC1B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOHJGOCPPMF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHJGOCPPMF___C_CTOR_OFFSET))(this);
		}

		::NOHJGOCPPMF* __cctor_b__18_0()
		{
			return ((::NOHJGOCPPMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHJGOCPPMF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
