#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBJMLKNLEPD;
namespace System { class Object; }

#define GBJMLKNLEPD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E400D30)
#define GBJMLKNLEPD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E400D70)
#define GBJMLKNLEPD___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E400D80)

inline static constexpr unsigned int GBJMLKNLEPD___c_TypeDefinitionIndex = 25609;

	class GBJMLKNLEPD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCA00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBJMLKNLEPD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJMLKNLEPD___C_CTOR_OFFSET))(this);
		}

		::GBJMLKNLEPD* __cctor_b__43_0()
		{
			return ((::GBJMLKNLEPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJMLKNLEPD___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
