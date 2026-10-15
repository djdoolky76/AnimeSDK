#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAFPFNAKODN;
namespace System { class Object; }

#define CAFPFNAKODN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E02BDA0)
#define CAFPFNAKODN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E02BDD0)
#define CAFPFNAKODN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E02BDE0)

inline static constexpr unsigned int CAFPFNAKODN___c_TypeDefinitionIndex = 34079;

	class CAFPFNAKODN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60440);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAFPFNAKODN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFPFNAKODN___C_CTOR_OFFSET))(this);
		}

		::CAFPFNAKODN* __cctor_b__33_0()
		{
			return ((::CAFPFNAKODN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFPFNAKODN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
