#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEGAPPMEBBL;
namespace System { class Object; }

#define LEGAPPMEBBL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8FF4D0)
#define LEGAPPMEBBL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8FF500)
#define LEGAPPMEBBL___C___CCTOR_B__158_0_OFFSET UNITYSDK_OFFSET(0x1E8FF510)

inline static constexpr unsigned int LEGAPPMEBBL___c_TypeDefinitionIndex = 32011;

	class LEGAPPMEBBL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31560);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEGAPPMEBBL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGAPPMEBBL___C_CTOR_OFFSET))(this);
		}

		::LEGAPPMEBBL* __cctor_b__158_0()
		{
			return ((::LEGAPPMEBBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGAPPMEBBL___C___CCTOR_B__158_0_OFFSET))(this);
		}

	};
