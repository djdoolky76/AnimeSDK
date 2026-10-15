#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJIPDMFGOON;
namespace System { class Object; }

#define EJIPDMFGOON___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B9680)
#define EJIPDMFGOON___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B96C0)
#define EJIPDMFGOON___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2B96D0)

inline static constexpr unsigned int EJIPDMFGOON___c_TypeDefinitionIndex = 26279;

	class EJIPDMFGOON___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BB70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJIPDMFGOON___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIPDMFGOON___C_CTOR_OFFSET))(this);
		}

		::EJIPDMFGOON* __cctor_b__23_0()
		{
			return ((::EJIPDMFGOON*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIPDMFGOON___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
