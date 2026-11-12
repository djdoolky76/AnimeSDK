#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDDHJBFEBHG;
namespace System { class Object; }

#define NDDHJBFEBHG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE25C40)
#define NDDHJBFEBHG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE25C80)
#define NDDHJBFEBHG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FE25C90)

inline static constexpr unsigned int NDDHJBFEBHG___c_TypeDefinitionIndex = 32789;

	class NDDHJBFEBHG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x686C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDDHJBFEBHG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDHJBFEBHG___C_CTOR_OFFSET))(this);
		}

		::NDDHJBFEBHG* __cctor_b__33_0()
		{
			return ((::NDDHJBFEBHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDHJBFEBHG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
