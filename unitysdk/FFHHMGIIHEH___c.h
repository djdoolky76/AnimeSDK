#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFHHMGIIHEH;
namespace System { class Object; }

#define FFHHMGIIHEH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3426B0)
#define FFHHMGIIHEH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3426F0)
#define FFHHMGIIHEH___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E342700)

inline static constexpr unsigned int FFHHMGIIHEH___c_TypeDefinitionIndex = 25660;

	class FFHHMGIIHEH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFHHMGIIHEH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHHMGIIHEH___C_CTOR_OFFSET))(this);
		}

		::FFHHMGIIHEH* __cctor_b__53_0()
		{
			return ((::FFHHMGIIHEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHHMGIIHEH___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
