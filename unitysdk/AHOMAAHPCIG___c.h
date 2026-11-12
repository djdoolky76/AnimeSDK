#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHOMAAHPCIG;
namespace System { class Object; }

#define AHOMAAHPCIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F52BBC0)
#define AHOMAAHPCIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F52BC00)
#define AHOMAAHPCIG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F52BC10)

inline static constexpr unsigned int AHOMAAHPCIG___c_TypeDefinitionIndex = 28916;

	class AHOMAAHPCIG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D600);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHOMAAHPCIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHOMAAHPCIG___C_CTOR_OFFSET))(this);
		}

		::AHOMAAHPCIG* __cctor_b__28_0()
		{
			return ((::AHOMAAHPCIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHOMAAHPCIG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
