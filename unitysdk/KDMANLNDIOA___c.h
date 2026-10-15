#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDMANLNDIOA;
namespace System { class Object; }

#define KDMANLNDIOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E803410)
#define KDMANLNDIOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E803450)
#define KDMANLNDIOA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E803460)

inline static constexpr unsigned int KDMANLNDIOA___c_TypeDefinitionIndex = 35114;

	class KDMANLNDIOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11280);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDMANLNDIOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMANLNDIOA___C_CTOR_OFFSET))(this);
		}

		::KDMANLNDIOA* __cctor_b__28_0()
		{
			return ((::KDMANLNDIOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMANLNDIOA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
