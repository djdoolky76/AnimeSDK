#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INKPGECIDNE;
namespace System { class Object; }

#define INKPGECIDNE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6981E0)
#define INKPGECIDNE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E698220)
#define INKPGECIDNE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E698230)

inline static constexpr unsigned int INKPGECIDNE___c_TypeDefinitionIndex = 32911;

	class INKPGECIDNE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53E50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INKPGECIDNE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INKPGECIDNE___C_CTOR_OFFSET))(this);
		}

		::INKPGECIDNE* __cctor_b__23_0()
		{
			return ((::INKPGECIDNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + INKPGECIDNE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
