#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHHIKOKAPFG;
namespace System { class Object; }

#define AHHIKOKAPFG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E26F2E0)
#define AHHIKOKAPFG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E26F320)
#define AHHIKOKAPFG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E26F330)

inline static constexpr unsigned int AHHIKOKAPFG___c_TypeDefinitionIndex = 33870;

	class AHHIKOKAPFG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31CC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHHIKOKAPFG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHHIKOKAPFG___C_CTOR_OFFSET))(this);
		}

		::AHHIKOKAPFG* __cctor_b__23_0()
		{
			return ((::AHHIKOKAPFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHHIKOKAPFG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
