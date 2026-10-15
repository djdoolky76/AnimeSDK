#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLHPJCKDEDI;
namespace System { class Object; }

#define PLHPJCKDEDI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFA1050)
#define PLHPJCKDEDI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFA1090)
#define PLHPJCKDEDI___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DFA10A0)

inline static constexpr unsigned int PLHPJCKDEDI___c_TypeDefinitionIndex = 28745;

	class PLHPJCKDEDI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BD90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLHPJCKDEDI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHPJCKDEDI___C_CTOR_OFFSET))(this);
		}

		::PLHPJCKDEDI* __cctor_b__18_0()
		{
			return ((::PLHPJCKDEDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHPJCKDEDI___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
