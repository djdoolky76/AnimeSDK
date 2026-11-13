#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLBGMJFLJEE;
namespace System { class Object; }

#define JLBGMJFLJEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE6EFC0)
#define JLBGMJFLJEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE6F000)
#define JLBGMJFLJEE___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FE6F010)

inline static constexpr unsigned int JLBGMJFLJEE___c_TypeDefinitionIndex = 27535;

	class JLBGMJFLJEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62690);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLBGMJFLJEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBGMJFLJEE___C_CTOR_OFFSET))(this);
		}

		::JLBGMJFLJEE* __cctor_b__38_0()
		{
			return ((::JLBGMJFLJEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBGMJFLJEE___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
