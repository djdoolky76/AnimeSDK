#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGHCHCCMCBM;
namespace System { class Object; }

#define JGHCHCCMCBM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA48B50)
#define JGHCHCCMCBM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA48B90)
#define JGHCHCCMCBM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FA48BA0)

inline static constexpr unsigned int JGHCHCCMCBM___c_TypeDefinitionIndex = 30264;

	class JGHCHCCMCBM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47A20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGHCHCCMCBM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHCHCCMCBM___C_CTOR_OFFSET))(this);
		}

		::JGHCHCCMCBM* __cctor_b__23_0()
		{
			return ((::JGHCHCCMCBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHCHCCMCBM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
