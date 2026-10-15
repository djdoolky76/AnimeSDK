#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POLMJOOOBNK;
namespace System { class Object; }

#define POLMJOOOBNK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFA0740)
#define POLMJOOOBNK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFA0780)
#define POLMJOOOBNK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DFA0790)

inline static constexpr unsigned int POLMJOOOBNK___c_TypeDefinitionIndex = 26323;

	class POLMJOOOBNK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POLMJOOOBNK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POLMJOOOBNK___C_CTOR_OFFSET))(this);
		}

		::POLMJOOOBNK* __cctor_b__33_0()
		{
			return ((::POLMJOOOBNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + POLMJOOOBNK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
