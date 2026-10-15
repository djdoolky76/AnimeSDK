#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLPGNCMHKHB;
namespace System { class Object; }

#define PLPGNCMHKHB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFA7CD0)
#define PLPGNCMHKHB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFA7D00)
#define PLPGNCMHKHB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DFA7D10)

inline static constexpr unsigned int PLPGNCMHKHB___c_TypeDefinitionIndex = 34020;

	class PLPGNCMHKHB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C990);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLPGNCMHKHB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPGNCMHKHB___C_CTOR_OFFSET))(this);
		}

		::PLPGNCMHKHB* __cctor_b__23_0()
		{
			return ((::PLPGNCMHKHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPGNCMHKHB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
