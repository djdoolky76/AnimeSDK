#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGGBAIAPDLO;
namespace System { class Object; }

#define GGGBAIAPDLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E44D480)
#define GGGBAIAPDLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E44D4B0)
#define GGGBAIAPDLO___C___CCTOR_B__73_0_OFFSET UNITYSDK_OFFSET(0x1E44D4C0)

inline static constexpr unsigned int GGGBAIAPDLO___c_TypeDefinitionIndex = 32831;

	class GGGBAIAPDLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15370);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGGBAIAPDLO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGBAIAPDLO___C_CTOR_OFFSET))(this);
		}

		::GGGBAIAPDLO* __cctor_b__73_0()
		{
			return ((::GGGBAIAPDLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGBAIAPDLO___C___CCTOR_B__73_0_OFFSET))(this);
		}

	};
