#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFAFCCEKOAN;
namespace System { class Object; }

#define EFAFCCEKOAN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E28BCA0)
#define EFAFCCEKOAN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E28BCE0)
#define EFAFCCEKOAN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E28BCF0)

inline static constexpr unsigned int EFAFCCEKOAN___c_TypeDefinitionIndex = 30401;

	class EFAFCCEKOAN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFAFCCEKOAN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAFCCEKOAN___C_CTOR_OFFSET))(this);
		}

		::EFAFCCEKOAN* __cctor_b__28_0()
		{
			return ((::EFAFCCEKOAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAFCCEKOAN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
