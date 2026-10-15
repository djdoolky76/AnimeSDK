#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJALEHOMFKH;
namespace System { class Object; }

#define BJALEHOMFKH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDD9030)
#define BJALEHOMFKH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD9070)
#define BJALEHOMFKH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DDD9080)

inline static constexpr unsigned int BJALEHOMFKH___c_TypeDefinitionIndex = 29495;

	class BJALEHOMFKH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57C30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJALEHOMFKH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJALEHOMFKH___C_CTOR_OFFSET))(this);
		}

		::BJALEHOMFKH* __cctor_b__33_0()
		{
			return ((::BJALEHOMFKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJALEHOMFKH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
