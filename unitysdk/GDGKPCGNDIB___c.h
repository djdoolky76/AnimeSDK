#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDGKPCGNDIB;
namespace System { class Object; }

#define GDGKPCGNDIB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E449C90)
#define GDGKPCGNDIB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E449CD0)
#define GDGKPCGNDIB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E449CE0)

inline static constexpr unsigned int GDGKPCGNDIB___c_TypeDefinitionIndex = 33791;

	class GDGKPCGNDIB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x109A0);
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
