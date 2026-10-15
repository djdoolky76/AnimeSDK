#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLEIPLCFMHK;
namespace System { class Object; }

#define DLEIPLCFMHK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1E61E0)
#define DLEIPLCFMHK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1E6220)
#define DLEIPLCFMHK___C___CCTOR_B__78_0_OFFSET UNITYSDK_OFFSET(0x1E1E6230)

inline static constexpr unsigned int DLEIPLCFMHK___c_TypeDefinitionIndex = 25123;

	class DLEIPLCFMHK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D7D0);
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
