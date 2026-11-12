#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJIGOFOAEPL;
namespace System { class Object; }

#define BJIGOFOAEPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1698B0)
#define BJIGOFOAEPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1698F0)
#define BJIGOFOAEPL___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F169900)

inline static constexpr unsigned int BJIGOFOAEPL___c_TypeDefinitionIndex = 29950;

	class BJIGOFOAEPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B960);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJIGOFOAEPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIGOFOAEPL___C_CTOR_OFFSET))(this);
		}

		::BJIGOFOAEPL* __cctor_b__18_0()
		{
			return ((::BJIGOFOAEPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIGOFOAEPL___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
