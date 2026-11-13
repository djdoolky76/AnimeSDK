#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPPBALGDGEF;
namespace System { class Object; }

#define EPPBALGDGEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7401E0)
#define EPPBALGDGEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F740220)
#define EPPBALGDGEF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F740230)

inline static constexpr unsigned int EPPBALGDGEF___c_TypeDefinitionIndex = 26714;

	class EPPBALGDGEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C9B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPPBALGDGEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPPBALGDGEF___C_CTOR_OFFSET))(this);
		}

		::EPPBALGDGEF* __cctor_b__23_0()
		{
			return ((::EPPBALGDGEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPPBALGDGEF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
