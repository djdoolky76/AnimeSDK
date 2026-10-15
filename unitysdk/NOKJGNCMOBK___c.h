#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOKJGNCMOBK;
namespace System { class Object; }

#define NOKJGNCMOBK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB60790)
#define NOKJGNCMOBK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB607D0)
#define NOKJGNCMOBK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EB607E0)

inline static constexpr unsigned int NOKJGNCMOBK___c_TypeDefinitionIndex = 32399;

	class NOKJGNCMOBK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB7E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOKJGNCMOBK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKJGNCMOBK___C_CTOR_OFFSET))(this);
		}

		::NOKJGNCMOBK* __cctor_b__33_0()
		{
			return ((::NOKJGNCMOBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKJGNCMOBK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
