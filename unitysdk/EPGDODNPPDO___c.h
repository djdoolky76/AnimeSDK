#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPGDODNPPDO;
namespace System { class Object; }

#define EPGDODNPPDO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2DDD70)
#define EPGDODNPPDO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2DDDA0)
#define EPGDODNPPDO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E2DDDB0)

inline static constexpr unsigned int EPGDODNPPDO___c_TypeDefinitionIndex = 30399;

	class EPGDODNPPDO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48DE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPGDODNPPDO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGDODNPPDO___C_CTOR_OFFSET))(this);
		}

		::EPGDODNPPDO* __cctor_b__33_0()
		{
			return ((::EPGDODNPPDO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGDODNPPDO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
