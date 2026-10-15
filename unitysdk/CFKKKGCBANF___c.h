#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFKKKGCBANF;
namespace System { class Object; }

#define CFKKKGCBANF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0A5D20)
#define CFKKKGCBANF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A5D60)
#define CFKKKGCBANF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0A5D70)

inline static constexpr unsigned int CFKKKGCBANF___c_TypeDefinitionIndex = 34577;

	class CFKKKGCBANF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13430);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFKKKGCBANF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFKKKGCBANF___C_CTOR_OFFSET))(this);
		}

		::CFKKKGCBANF* __cctor_b__23_0()
		{
			return ((::CFKKKGCBANF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFKKKGCBANF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
