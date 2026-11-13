#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NADKCPCFIPM;
namespace System { class Object; }

#define NADKCPCFIPM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20146A40)
#define NADKCPCFIPM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20146A80)
#define NADKCPCFIPM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20146A90)

inline static constexpr unsigned int NADKCPCFIPM___c_TypeDefinitionIndex = 34477;

	class NADKCPCFIPM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NADKCPCFIPM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NADKCPCFIPM___C_CTOR_OFFSET))(this);
		}

		::NADKCPCFIPM* __cctor_b__23_0()
		{
			return ((::NADKCPCFIPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NADKCPCFIPM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
