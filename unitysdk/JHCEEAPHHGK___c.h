#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JHCEEAPHHGK;
namespace System { class Object; }

#define JHCEEAPHHGK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA532F0)
#define JHCEEAPHHGK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA53330)
#define JHCEEAPHHGK___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FA53340)

inline static constexpr unsigned int JHCEEAPHHGK___c_TypeDefinitionIndex = 29777;

	class JHCEEAPHHGK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHCEEAPHHGK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCEEAPHHGK___C_CTOR_OFFSET))(this);
		}

		::JHCEEAPHHGK* __cctor_b__38_0()
		{
			return ((::JHCEEAPHHGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCEEAPHHGK___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
