#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFNMKEDPFJH;
namespace System { class Object; }

#define HFNMKEDPFJH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E571990)
#define HFNMKEDPFJH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5719D0)
#define HFNMKEDPFJH___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E5719E0)

inline static constexpr unsigned int HFNMKEDPFJH___c_TypeDefinitionIndex = 27117;

	class HFNMKEDPFJH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFNMKEDPFJH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNMKEDPFJH___C_CTOR_OFFSET))(this);
		}

		::HFNMKEDPFJH* __cctor_b__53_0()
		{
			return ((::HFNMKEDPFJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNMKEDPFJH___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
