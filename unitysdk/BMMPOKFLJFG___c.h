#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMMPOKFLJFG;
namespace System { class Object; }

#define BMMPOKFLJFG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E000660)
#define BMMPOKFLJFG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0006A0)
#define BMMPOKFLJFG___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E0006B0)

inline static constexpr unsigned int BMMPOKFLJFG___c_TypeDefinitionIndex = 30591;

	class BMMPOKFLJFG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D270);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMMPOKFLJFG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMMPOKFLJFG___C_CTOR_OFFSET))(this);
		}

		::BMMPOKFLJFG* __cctor_b__38_0()
		{
			return ((::BMMPOKFLJFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMMPOKFLJFG___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
