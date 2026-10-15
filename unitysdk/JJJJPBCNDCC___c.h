#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJJJPBCNDCC;
namespace System { class Object; }

#define JJJJPBCNDCC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E731350)
#define JJJJPBCNDCC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E731390)
#define JJJJPBCNDCC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7313A0)

inline static constexpr unsigned int JJJJPBCNDCC___c_TypeDefinitionIndex = 29034;

	class JJJJPBCNDCC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62A00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJJJPBCNDCC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJJJPBCNDCC___C_CTOR_OFFSET))(this);
		}

		::JJJJPBCNDCC* __cctor_b__28_0()
		{
			return ((::JJJJPBCNDCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJJJPBCNDCC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
