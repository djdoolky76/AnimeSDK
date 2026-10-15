#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPKKBLFDLBE;
namespace System { class Object; }

#define PPKKBLFDLBE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFB0B60)
#define PPKKBLFDLBE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFB0BA0)
#define PPKKBLFDLBE___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1DFB0BB0)

inline static constexpr unsigned int PPKKBLFDLBE___c_TypeDefinitionIndex = 25784;

	class PPKKBLFDLBE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPKKBLFDLBE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPKKBLFDLBE___C_CTOR_OFFSET))(this);
		}

		::PPKKBLFDLBE* __cctor_b__63_0()
		{
			return ((::PPKKBLFDLBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPKKBLFDLBE___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
