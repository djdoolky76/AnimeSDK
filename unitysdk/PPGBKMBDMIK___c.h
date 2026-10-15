#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPGBKMBDMIK;
namespace System { class Object; }

#define PPGBKMBDMIK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFAB6B0)
#define PPGBKMBDMIK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFAB6E0)
#define PPGBKMBDMIK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DFAB6F0)

inline static constexpr unsigned int PPGBKMBDMIK___c_TypeDefinitionIndex = 30532;

	class PPGBKMBDMIK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPGBKMBDMIK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGBKMBDMIK___C_CTOR_OFFSET))(this);
		}

		::PPGBKMBDMIK* __cctor_b__33_0()
		{
			return ((::PPGBKMBDMIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGBKMBDMIK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
