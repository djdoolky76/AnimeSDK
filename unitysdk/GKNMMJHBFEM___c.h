#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKNMMJHBFEM;
namespace System { class Object; }

#define GKNMMJHBFEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4BC280)
#define GKNMMJHBFEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4BC2B0)
#define GKNMMJHBFEM___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E4BC2C0)

inline static constexpr unsigned int GKNMMJHBFEM___c_TypeDefinitionIndex = 32383;

	class GKNMMJHBFEM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E640);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKNMMJHBFEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNMMJHBFEM___C_CTOR_OFFSET))(this);
		}

		::GKNMMJHBFEM* __cctor_b__48_0()
		{
			return ((::GKNMMJHBFEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNMMJHBFEM___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
