#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCFAAGEJGBG;
namespace System { class Object; }

#define LCFAAGEJGBG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8BEAA0)
#define LCFAAGEJGBG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8BEAE0)
#define LCFAAGEJGBG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8BEAF0)

inline static constexpr unsigned int LCFAAGEJGBG___c_TypeDefinitionIndex = 29612;

	class LCFAAGEJGBG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C8F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCFAAGEJGBG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFAAGEJGBG___C_CTOR_OFFSET))(this);
		}

		::LCFAAGEJGBG* __cctor_b__23_0()
		{
			return ((::LCFAAGEJGBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFAAGEJGBG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
