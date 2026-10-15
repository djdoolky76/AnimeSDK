#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDECOFOGIGD;
namespace System { class Object; }

#define LDECOFOGIGD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8C8A90)
#define LDECOFOGIGD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C8AD0)
#define LDECOFOGIGD___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E8C8AE0)

inline static constexpr unsigned int LDECOFOGIGD___c_TypeDefinitionIndex = 29876;

	class LDECOFOGIGD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDECOFOGIGD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDECOFOGIGD___C_CTOR_OFFSET))(this);
		}

		::LDECOFOGIGD* __cctor_b__53_0()
		{
			return ((::LDECOFOGIGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDECOFOGIGD___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
