#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFFCJNFIDLO;
namespace System { class Object; }

#define FFFCJNFIDLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E36E940)
#define FFFCJNFIDLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E36E980)
#define FFFCJNFIDLO___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E36E990)

inline static constexpr unsigned int FFFCJNFIDLO___c_TypeDefinitionIndex = 33208;

	class FFFCJNFIDLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DB10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFFCJNFIDLO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFCJNFIDLO___C_CTOR_OFFSET))(this);
		}

		::FFFCJNFIDLO* __cctor_b__43_0()
		{
			return ((::FFFCJNFIDLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFCJNFIDLO___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
