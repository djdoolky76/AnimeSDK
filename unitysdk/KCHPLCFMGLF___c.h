#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCHPLCFMGLF;
namespace System { class Object; }

#define KCHPLCFMGLF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7F70C0)
#define KCHPLCFMGLF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7F70F0)
#define KCHPLCFMGLF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7F7100)

inline static constexpr unsigned int KCHPLCFMGLF___c_TypeDefinitionIndex = 27314;

	class KCHPLCFMGLF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xFD10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCHPLCFMGLF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCHPLCFMGLF___C_CTOR_OFFSET))(this);
		}

		::KCHPLCFMGLF* __cctor_b__28_0()
		{
			return ((::KCHPLCFMGLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCHPLCFMGLF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
