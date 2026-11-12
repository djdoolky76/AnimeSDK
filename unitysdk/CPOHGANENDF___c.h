#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPOHGANENDF;
namespace System { class Object; }

#define CPOHGANENDF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F41FE50)
#define CPOHGANENDF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F41FE90)
#define CPOHGANENDF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F41FEA0)

inline static constexpr unsigned int CPOHGANENDF___c_TypeDefinitionIndex = 30585;

	class CPOHGANENDF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPOHGANENDF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPOHGANENDF___C_CTOR_OFFSET))(this);
		}

		::CPOHGANENDF* __cctor_b__28_0()
		{
			return ((::CPOHGANENDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPOHGANENDF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
