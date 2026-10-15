#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GICMOLJPLGF;
namespace System { class Object; }

#define GICMOLJPLGF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E465E70)
#define GICMOLJPLGF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E465EB0)
#define GICMOLJPLGF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E465EC0)

inline static constexpr unsigned int GICMOLJPLGF___c_TypeDefinitionIndex = 27169;

	class GICMOLJPLGF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18270);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GICMOLJPLGF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GICMOLJPLGF___C_CTOR_OFFSET))(this);
		}

		::GICMOLJPLGF* __cctor_b__23_0()
		{
			return ((::GICMOLJPLGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GICMOLJPLGF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
