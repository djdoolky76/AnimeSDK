#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJNJDDFGFJL;
namespace System { class Object; }

#define AJNJDDFGFJL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E398510)
#define AJNJDDFGFJL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E398550)
#define AJNJDDFGFJL___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E398560)

inline static constexpr unsigned int AJNJDDFGFJL___c_TypeDefinitionIndex = 27173;

	class AJNJDDFGFJL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJNJDDFGFJL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNJDDFGFJL___C_CTOR_OFFSET))(this);
		}

		::AJNJDDFGFJL* __cctor_b__38_0()
		{
			return ((::AJNJDDFGFJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNJDDFGFJL___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
