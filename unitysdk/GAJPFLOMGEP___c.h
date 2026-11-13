#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAJPFLOMGEP;
namespace System { class Object; }

#define GAJPFLOMGEP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC3FBC0)
#define GAJPFLOMGEP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC3FC00)
#define GAJPFLOMGEP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FC3FC10)

inline static constexpr unsigned int GAJPFLOMGEP___c_TypeDefinitionIndex = 28013;

	class GAJPFLOMGEP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55E80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAJPFLOMGEP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJPFLOMGEP___C_CTOR_OFFSET))(this);
		}

		::GAJPFLOMGEP* __cctor_b__23_0()
		{
			return ((::GAJPFLOMGEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJPFLOMGEP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
