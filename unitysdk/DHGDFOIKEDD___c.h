#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHGDFOIKEDD;
namespace System { class Object; }

#define DHGDFOIKEDD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F48F780)
#define DHGDFOIKEDD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F48F7C0)
#define DHGDFOIKEDD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F48F7D0)

inline static constexpr unsigned int DHGDFOIKEDD___c_TypeDefinitionIndex = 29034;

	class DHGDFOIKEDD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHGDFOIKEDD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGDFOIKEDD___C_CTOR_OFFSET))(this);
		}

		::DHGDFOIKEDD* __cctor_b__28_0()
		{
			return ((::DHGDFOIKEDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGDFOIKEDD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
