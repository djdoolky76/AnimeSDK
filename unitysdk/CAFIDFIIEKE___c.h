#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAFIDFIIEKE;
namespace System { class Object; }

#define CAFIDFIIEKE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2034BCF0)
#define CAFIDFIIEKE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2034BD20)
#define CAFIDFIIEKE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x2034BD30)

inline static constexpr unsigned int CAFIDFIIEKE___c_TypeDefinitionIndex = 28459;

	class CAFIDFIIEKE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F8A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAFIDFIIEKE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFIDFIIEKE___C_CTOR_OFFSET))(this);
		}

		::CAFIDFIIEKE* __cctor_b__28_0()
		{
			return ((::CAFIDFIIEKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFIDFIIEKE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
