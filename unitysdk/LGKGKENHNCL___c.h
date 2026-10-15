#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGKGKENHNCL;
namespace System { class Object; }

#define LGKGKENHNCL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E927C10)
#define LGKGKENHNCL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E927C40)
#define LGKGKENHNCL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E927C50)

inline static constexpr unsigned int LGKGKENHNCL___c_TypeDefinitionIndex = 30977;

	class LGKGKENHNCL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x355E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGKGKENHNCL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKGKENHNCL___C_CTOR_OFFSET))(this);
		}

		::LGKGKENHNCL* __cctor_b__33_0()
		{
			return ((::LGKGKENHNCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKGKENHNCL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
