#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHMGHGPLPHF;
namespace System { class Object; }

#define KHMGHGPLPHF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F559080)
#define KHMGHGPLPHF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5590C0)
#define KHMGHGPLPHF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F5590D0)

inline static constexpr unsigned int KHMGHGPLPHF___c_TypeDefinitionIndex = 27650;

	class KHMGHGPLPHF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x115F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHMGHGPLPHF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMGHGPLPHF___C_CTOR_OFFSET))(this);
		}

		::KHMGHGPLPHF* __cctor_b__18_0()
		{
			return ((::KHMGHGPLPHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMGHGPLPHF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
