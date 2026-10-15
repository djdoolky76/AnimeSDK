#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBBKDPMCLFK;
namespace System { class Object; }

#define FBBKDPMCLFK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E302C80)
#define FBBKDPMCLFK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E302CC0)
#define FBBKDPMCLFK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E302CD0)

inline static constexpr unsigned int FBBKDPMCLFK___c_TypeDefinitionIndex = 26150;

	class FBBKDPMCLFK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBBKDPMCLFK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBKDPMCLFK___C_CTOR_OFFSET))(this);
		}

		::FBBKDPMCLFK* __cctor_b__33_0()
		{
			return ((::FBBKDPMCLFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBKDPMCLFK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
