#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PCLHDCHFKLP;
namespace System { class Object; }

#define PCLHDCHFKLP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1D5180)
#define PCLHDCHFKLP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1D51C0)
#define PCLHDCHFKLP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F1D51D0)

inline static constexpr unsigned int PCLHDCHFKLP___c_TypeDefinitionIndex = 27527;

	class PCLHDCHFKLP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2DDB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCLHDCHFKLP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLHDCHFKLP___C_CTOR_OFFSET))(this);
		}

		::PCLHDCHFKLP* __cctor_b__33_0()
		{
			return ((::PCLHDCHFKLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLHDCHFKLP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
