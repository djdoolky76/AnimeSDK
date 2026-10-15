#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BIAFBCLIBOD;
namespace System { class Object; }

#define BIAFBCLIBOD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDD18A0)
#define BIAFBCLIBOD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD18D0)
#define BIAFBCLIBOD___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DDD18E0)

inline static constexpr unsigned int BIAFBCLIBOD___c_TypeDefinitionIndex = 30518;

	class BIAFBCLIBOD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x574A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIAFBCLIBOD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAFBCLIBOD___C_CTOR_OFFSET))(this);
		}

		::BIAFBCLIBOD* __cctor_b__38_0()
		{
			return ((::BIAFBCLIBOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAFBCLIBOD___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
