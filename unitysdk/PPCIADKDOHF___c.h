#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPCIADKDOHF;
namespace System { class Object; }

#define PPCIADKDOHF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFA7710)
#define PPCIADKDOHF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFA7750)
#define PPCIADKDOHF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DFA7760)

inline static constexpr unsigned int PPCIADKDOHF___c_TypeDefinitionIndex = 32185;

	class PPCIADKDOHF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPCIADKDOHF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCIADKDOHF___C_CTOR_OFFSET))(this);
		}

		::PPCIADKDOHF* __cctor_b__23_0()
		{
			return ((::PPCIADKDOHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCIADKDOHF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
