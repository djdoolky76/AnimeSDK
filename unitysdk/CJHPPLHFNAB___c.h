#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJHPPLHFNAB;
namespace System { class Object; }

#define CJHPPLHFNAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0B14B0)
#define CJHPPLHFNAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0B14F0)
#define CJHPPLHFNAB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0B1500)

inline static constexpr unsigned int CJHPPLHFNAB___c_TypeDefinitionIndex = 25562;

	class CJHPPLHFNAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x183B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJHPPLHFNAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHPPLHFNAB___C_CTOR_OFFSET))(this);
		}

		::CJHPPLHFNAB* __cctor_b__28_0()
		{
			return ((::CJHPPLHFNAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHPPLHFNAB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
