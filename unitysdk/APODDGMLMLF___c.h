#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APODDGMLMLF;
namespace System { class Object; }

#define APODDGMLMLF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E64DC90)
#define APODDGMLMLF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E64DCC0)
#define APODDGMLMLF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E64DCD0)

inline static constexpr unsigned int APODDGMLMLF___c_TypeDefinitionIndex = 32426;

	class APODDGMLMLF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4ACF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APODDGMLMLF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APODDGMLMLF___C_CTOR_OFFSET))(this);
		}

		::APODDGMLMLF* __cctor_b__28_0()
		{
			return ((::APODDGMLMLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + APODDGMLMLF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
