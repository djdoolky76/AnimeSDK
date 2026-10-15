#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHMLMEGGKGK;
namespace System { class Object; }

#define BHMLMEGGKGK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDFBFB0)
#define BHMLMEGGKGK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFBFF0)
#define BHMLMEGGKGK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DDFC000)

inline static constexpr unsigned int BHMLMEGGKGK___c_TypeDefinitionIndex = 30149;

	class BHMLMEGGKGK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46EC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHMLMEGGKGK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMLMEGGKGK___C_CTOR_OFFSET))(this);
		}

		::BHMLMEGGKGK* __cctor_b__33_0()
		{
			return ((::BHMLMEGGKGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMLMEGGKGK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
