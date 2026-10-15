#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGMCLFHAJNJ;
namespace System { class Object; }

#define KGMCLFHAJNJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E83AA50)
#define KGMCLFHAJNJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E83AA90)
#define KGMCLFHAJNJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E83AAA0)

inline static constexpr unsigned int KGMCLFHAJNJ___c_TypeDefinitionIndex = 29221;

	class KGMCLFHAJNJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGMCLFHAJNJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMCLFHAJNJ___C_CTOR_OFFSET))(this);
		}

		::KGMCLFHAJNJ* __cctor_b__23_0()
		{
			return ((::KGMCLFHAJNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMCLFHAJNJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
