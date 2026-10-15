#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGBGMGIBDHM;
namespace System { class Object; }

#define JGBGMGIBDHM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7370B0)
#define JGBGMGIBDHM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7370E0)
#define JGBGMGIBDHM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E7370F0)

inline static constexpr unsigned int JGBGMGIBDHM___c_TypeDefinitionIndex = 34237;

	class JGBGMGIBDHM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x606A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGBGMGIBDHM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBGMGIBDHM___C_CTOR_OFFSET))(this);
		}

		::JGBGMGIBDHM* __cctor_b__18_0()
		{
			return ((::JGBGMGIBDHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBGMGIBDHM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
