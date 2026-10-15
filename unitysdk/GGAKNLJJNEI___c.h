#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGAKNLJJNEI;
namespace System { class Object; }

#define GGAKNLJJNEI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4770E0)
#define GGAKNLJJNEI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E477120)
#define GGAKNLJJNEI___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E477130)

inline static constexpr unsigned int GGAKNLJJNEI___c_TypeDefinitionIndex = 29138;

	class GGAKNLJJNEI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGAKNLJJNEI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAKNLJJNEI___C_CTOR_OFFSET))(this);
		}

		::GGAKNLJJNEI* __cctor_b__38_0()
		{
			return ((::GGAKNLJJNEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAKNLJJNEI___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
