#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALEEDHCDIAL;
namespace System { class Object; }

#define ALEEDHCDIAL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20019840)
#define ALEEDHCDIAL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20019880)
#define ALEEDHCDIAL___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x20019890)

inline static constexpr unsigned int ALEEDHCDIAL___c_TypeDefinitionIndex = 28612;

	class ALEEDHCDIAL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36EF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALEEDHCDIAL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEEDHCDIAL___C_CTOR_OFFSET))(this);
		}

		::ALEEDHCDIAL* __cctor_b__18_0()
		{
			return ((::ALEEDHCDIAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEEDHCDIAL___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
