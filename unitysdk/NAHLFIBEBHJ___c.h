#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAHLFIBEBHJ;
namespace System { class Object; }

#define NAHLFIBEBHJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA96D00)
#define NAHLFIBEBHJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA96D40)
#define NAHLFIBEBHJ___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EA96D50)

inline static constexpr unsigned int NAHLFIBEBHJ___c_TypeDefinitionIndex = 34326;

	class NAHLFIBEBHJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CC70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAHLFIBEBHJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAHLFIBEBHJ___C_CTOR_OFFSET))(this);
		}

		::NAHLFIBEBHJ* __cctor_b__38_0()
		{
			return ((::NAHLFIBEBHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAHLFIBEBHJ___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
