#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPDLOPCHFDG;
namespace System { class Object; }

#define PPDLOPCHFDG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFA8350)
#define PPDLOPCHFDG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFA8390)
#define PPDLOPCHFDG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DFA83A0)

inline static constexpr unsigned int PPDLOPCHFDG___c_TypeDefinitionIndex = 28220;

	class PPDLOPCHFDG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPDLOPCHFDG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPDLOPCHFDG___C_CTOR_OFFSET))(this);
		}

		::PPDLOPCHFDG* __cctor_b__28_0()
		{
			return ((::PPDLOPCHFDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPDLOPCHFDG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
