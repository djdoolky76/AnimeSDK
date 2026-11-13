#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPMDALGBLBO;
namespace System { class Object; }

#define JPMDALGBLBO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8E50E0)
#define JPMDALGBLBO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8E5110)
#define JPMDALGBLBO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F8E5120)

inline static constexpr unsigned int JPMDALGBLBO___c_TypeDefinitionIndex = 26823;

	class JPMDALGBLBO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69270);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPMDALGBLBO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMDALGBLBO___C_CTOR_OFFSET))(this);
		}

		::JPMDALGBLBO* __cctor_b__28_0()
		{
			return ((::JPMDALGBLBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMDALGBLBO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
