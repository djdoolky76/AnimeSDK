#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLLBJDEJFNF;
namespace System { class Object; }

#define CLLBJDEJFNF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0CD820)
#define CLLBJDEJFNF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CD850)
#define CLLBJDEJFNF___C___CCTOR_B__34_0_OFFSET UNITYSDK_OFFSET(0x1E0CD860)

inline static constexpr unsigned int CLLBJDEJFNF___c_TypeDefinitionIndex = 27840;

	class CLLBJDEJFNF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B780);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLLBJDEJFNF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLBJDEJFNF___C_CTOR_OFFSET))(this);
		}

		::CLLBJDEJFNF* __cctor_b__34_0()
		{
			return ((::CLLBJDEJFNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLBJDEJFNF___C___CCTOR_B__34_0_OFFSET))(this);
		}

	};
