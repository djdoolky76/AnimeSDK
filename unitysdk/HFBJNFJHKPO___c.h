#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFBJNFJHKPO;
namespace System { class Object; }

#define HFBJNFJHKPO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F88DE10)
#define HFBJNFJHKPO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F88DE50)
#define HFBJNFJHKPO___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1F88DE60)

inline static constexpr unsigned int HFBJNFJHKPO___c_TypeDefinitionIndex = 28042;

	class HFBJNFJHKPO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2A160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFBJNFJHKPO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBJNFJHKPO___C_CTOR_OFFSET))(this);
		}

		::HFBJNFJHKPO* __cctor_b__48_0()
		{
			return ((::HFBJNFJHKPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBJNFJHKPO___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
