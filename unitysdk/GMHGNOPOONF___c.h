#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMHGNOPOONF;
namespace System { class Object; }

#define GMHGNOPOONF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4D3BC0)
#define GMHGNOPOONF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4D3C00)
#define GMHGNOPOONF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E4D3C10)

inline static constexpr unsigned int GMHGNOPOONF___c_TypeDefinitionIndex = 26046;

	class GMHGNOPOONF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21ED0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMHGNOPOONF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHGNOPOONF___C_CTOR_OFFSET))(this);
		}

		::GMHGNOPOONF* __cctor_b__18_0()
		{
			return ((::GMHGNOPOONF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHGNOPOONF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
