#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOLHIMGJGBO;
namespace System { class Object; }

#define JOLHIMGJGBO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E77BEF0)
#define JOLHIMGJGBO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E77BF30)
#define JOLHIMGJGBO___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E77BF40)

inline static constexpr unsigned int JOLHIMGJGBO___c_TypeDefinitionIndex = 25168;

	class JOLHIMGJGBO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68D60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOLHIMGJGBO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLHIMGJGBO___C_CTOR_OFFSET))(this);
		}

		::JOLHIMGJGBO* __cctor_b__48_0()
		{
			return ((::JOLHIMGJGBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLHIMGJGBO___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
