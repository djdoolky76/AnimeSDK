#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKBLBLPOENO;
namespace System { class Object; }

#define OKBLBLPOENO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6ABEE0)
#define OKBLBLPOENO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6ABF20)
#define OKBLBLPOENO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F6ABF30)

inline static constexpr unsigned int OKBLBLPOENO___c_TypeDefinitionIndex = 33782;

	class OKBLBLPOENO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D8D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKBLBLPOENO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBLBLPOENO___C_CTOR_OFFSET))(this);
		}

		::OKBLBLPOENO* __cctor_b__23_0()
		{
			return ((::OKBLBLPOENO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBLBLPOENO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
