#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFMDKGLKCOF;
namespace System { class Object; }

#define GFMDKGLKCOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F75FCB0)
#define GFMDKGLKCOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F75FCF0)
#define GFMDKGLKCOF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F75FD00)

inline static constexpr unsigned int GFMDKGLKCOF___c_TypeDefinitionIndex = 33656;

	class GFMDKGLKCOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCEF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFMDKGLKCOF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMDKGLKCOF___C_CTOR_OFFSET))(this);
		}

		::GFMDKGLKCOF* __cctor_b__28_0()
		{
			return ((::GFMDKGLKCOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMDKGLKCOF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
