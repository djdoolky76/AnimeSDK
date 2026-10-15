#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLMPGLKCGBJ;
namespace System { class Object; }

#define PLMPGLKCGBJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF76830)
#define PLMPGLKCGBJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF76870)
#define PLMPGLKCGBJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DF76880)

inline static constexpr unsigned int PLMPGLKCGBJ___c_TypeDefinitionIndex = 27147;

	class PLMPGLKCGBJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3DB30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLMPGLKCGBJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMPGLKCGBJ___C_CTOR_OFFSET))(this);
		}

		::PLMPGLKCGBJ* __cctor_b__18_0()
		{
			return ((::PLMPGLKCGBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMPGLKCGBJ___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
