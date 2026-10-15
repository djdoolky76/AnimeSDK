#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKFGIMIBBHF;
namespace System { class Object; }

#define GKFGIMIBBHF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4841E0)
#define GKFGIMIBBHF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E484210)
#define GKFGIMIBBHF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E484220)

inline static constexpr unsigned int GKFGIMIBBHF___c_TypeDefinitionIndex = 33229;

	class GKFGIMIBBHF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1AFD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKFGIMIBBHF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFGIMIBBHF___C_CTOR_OFFSET))(this);
		}

		::GKFGIMIBBHF* __cctor_b__33_0()
		{
			return ((::GKFGIMIBBHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFGIMIBBHF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
