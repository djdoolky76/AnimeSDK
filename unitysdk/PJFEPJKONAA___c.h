#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJFEPJKONAA;
namespace System { class Object; }

#define PJFEPJKONAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2292B0)
#define PJFEPJKONAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2292E0)
#define PJFEPJKONAA___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F2292F0)

inline static constexpr unsigned int PJFEPJKONAA___c_TypeDefinitionIndex = 27612;

	class PJFEPJKONAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJFEPJKONAA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFEPJKONAA___C_CTOR_OFFSET))(this);
		}

		::PJFEPJKONAA* __cctor_b__43_0()
		{
			return ((::PJFEPJKONAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFEPJKONAA___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
