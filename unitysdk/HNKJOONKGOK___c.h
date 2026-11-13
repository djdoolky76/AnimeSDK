#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNKJOONKGOK;
namespace System { class Object; }

#define HNKJOONKGOK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20034D70)
#define HNKJOONKGOK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20034DB0)
#define HNKJOONKGOK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x20034DC0)

inline static constexpr unsigned int HNKJOONKGOK___c_TypeDefinitionIndex = 26600;

	class HNKJOONKGOK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CDF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNKJOONKGOK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKJOONKGOK___C_CTOR_OFFSET))(this);
		}

		::HNKJOONKGOK* __cctor_b__33_0()
		{
			return ((::HNKJOONKGOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKJOONKGOK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
