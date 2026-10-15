#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLIFOLCEMIN;
namespace System { class Object; }

#define GLIFOLCEMIN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4C12F0)
#define GLIFOLCEMIN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C1320)
#define GLIFOLCEMIN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4C1330)

inline static constexpr unsigned int GLIFOLCEMIN___c_TypeDefinitionIndex = 29636;

	class GLIFOLCEMIN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLIFOLCEMIN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIFOLCEMIN___C_CTOR_OFFSET))(this);
		}

		::GLIFOLCEMIN* __cctor_b__28_0()
		{
			return ((::GLIFOLCEMIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIFOLCEMIN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
