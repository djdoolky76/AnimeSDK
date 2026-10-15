#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POFDBDHOJNG;
namespace System { class Object; }

#define POFDBDHOJNG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFC98A0)
#define POFDBDHOJNG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFC98E0)
#define POFDBDHOJNG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DFC98F0)

inline static constexpr unsigned int POFDBDHOJNG___c_TypeDefinitionIndex = 31825;

	class POFDBDHOJNG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x434A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POFDBDHOJNG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFDBDHOJNG___C_CTOR_OFFSET))(this);
		}

		::POFDBDHOJNG* __cctor_b__23_0()
		{
			return ((::POFDBDHOJNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + POFDBDHOJNG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
