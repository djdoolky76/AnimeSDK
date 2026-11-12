#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLEIPLCFMHK;
namespace System { class Object; }

#define DLEIPLCFMHK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4C26B0)
#define DLEIPLCFMHK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4C26F0)
#define DLEIPLCFMHK___C___CCTOR_B__78_0_OFFSET UNITYSDK_OFFSET(0x1F4C2700)

inline static constexpr unsigned int DLEIPLCFMHK___c_TypeDefinitionIndex = 25601;

	class DLEIPLCFMHK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x395E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLEIPLCFMHK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEIPLCFMHK___C_CTOR_OFFSET))(this);
		}

		::DLEIPLCFMHK* __cctor_b__78_0()
		{
			return ((::DLEIPLCFMHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEIPLCFMHK___C___CCTOR_B__78_0_OFFSET))(this);
		}

	};
