#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDNKNBPNOKL;
namespace System { class Object; }

#define IDNKNBPNOKL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2013F390)
#define IDNKNBPNOKL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20280980)
#define IDNKNBPNOKL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20280990)

inline static constexpr unsigned int IDNKNBPNOKL___c_TypeDefinitionIndex = 31493;

	class IDNKNBPNOKL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CBD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDNKNBPNOKL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNKNBPNOKL___C_CTOR_OFFSET))(this);
		}

		::IDNKNBPNOKL* __cctor_b__23_0()
		{
			return ((::IDNKNBPNOKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNKNBPNOKL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
