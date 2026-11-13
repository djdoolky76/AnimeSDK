#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNBJGDHOIBP;
namespace System { class Object; }

#define FNBJGDHOIBP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x202D5040)
#define FNBJGDHOIBP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x202D5070)
#define FNBJGDHOIBP___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x202D5080)

inline static constexpr unsigned int FNBJGDHOIBP___c_TypeDefinitionIndex = 34716;

	class FNBJGDHOIBP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4F170);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNBJGDHOIBP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBJGDHOIBP___C_CTOR_OFFSET))(this);
		}

		::FNBJGDHOIBP* __cctor_b__43_0()
		{
			return ((::FNBJGDHOIBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBJGDHOIBP___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
