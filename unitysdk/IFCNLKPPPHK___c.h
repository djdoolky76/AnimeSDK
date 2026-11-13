#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFCNLKPPPHK;
namespace System { class Object; }

#define IFCNLKPPPHK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20292A40)
#define IFCNLKPPPHK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20292A70)
#define IFCNLKPPPHK___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x20292A80)

inline static constexpr unsigned int IFCNLKPPPHK___c_TypeDefinitionIndex = 34461;

	class IFCNLKPPPHK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFCNLKPPPHK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCNLKPPPHK___C_CTOR_OFFSET))(this);
		}

		::IFCNLKPPPHK* __cctor_b__53_0()
		{
			return ((::IFCNLKPPPHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCNLKPPPHK___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
