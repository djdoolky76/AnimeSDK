#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOMNNODJGPH;
namespace System { class Object; }

#define OOMNNODJGPH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEACD90)
#define OOMNNODJGPH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEACDD0)
#define OOMNNODJGPH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DEACDE0)

inline static constexpr unsigned int OOMNNODJGPH___c_TypeDefinitionIndex = 29939;

	class OOMNNODJGPH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2A3D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOMNNODJGPH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMNNODJGPH___C_CTOR_OFFSET))(this);
		}

		::OOMNNODJGPH* __cctor_b__28_0()
		{
			return ((::OOMNNODJGPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMNNODJGPH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
