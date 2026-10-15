#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMDACCNEEPL;
namespace System { class Object; }

#define BMDACCNEEPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFF56B0)
#define BMDACCNEEPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF56E0)
#define BMDACCNEEPL___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DFF56F0)

inline static constexpr unsigned int BMDACCNEEPL___c_TypeDefinitionIndex = 30570;

	class BMDACCNEEPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C9D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMDACCNEEPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDACCNEEPL___C_CTOR_OFFSET))(this);
		}

		::BMDACCNEEPL* __cctor_b__18_0()
		{
			return ((::BMDACCNEEPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDACCNEEPL___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
