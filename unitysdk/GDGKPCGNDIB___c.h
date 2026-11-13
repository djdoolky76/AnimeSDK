#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDGKPCGNDIB;
namespace System { class Object; }

#define GDGKPCGNDIB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20234EB0)
#define GDGKPCGNDIB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20234EF0)
#define GDGKPCGNDIB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x20234F00)

inline static constexpr unsigned int GDGKPCGNDIB___c_TypeDefinitionIndex = 34706;

	class GDGKPCGNDIB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CC70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDGKPCGNDIB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGKPCGNDIB___C_CTOR_OFFSET))(this);
		}

		::GDGKPCGNDIB* __cctor_b__18_0()
		{
			return ((::GDGKPCGNDIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGKPCGNDIB___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
