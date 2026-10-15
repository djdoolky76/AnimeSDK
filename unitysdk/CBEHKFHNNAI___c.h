#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBEHKFHNNAI;
namespace System { class Object; }

#define CBEHKFHNNAI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E038640)
#define CBEHKFHNNAI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E038680)
#define CBEHKFHNNAI___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E038690)

inline static constexpr unsigned int CBEHKFHNNAI___c_TypeDefinitionIndex = 29707;

	class CBEHKFHNNAI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xAF00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBEHKFHNNAI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEHKFHNNAI___C_CTOR_OFFSET))(this);
		}

		::CBEHKFHNNAI* __cctor_b__18_0()
		{
			return ((::CBEHKFHNNAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEHKFHNNAI___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
