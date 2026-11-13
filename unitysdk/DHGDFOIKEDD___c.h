#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHGDFOIKEDD;
namespace System { class Object; }

#define DHGDFOIKEDD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20653440)
#define DHGDFOIKEDD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20653480)
#define DHGDFOIKEDD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20653490)

inline static constexpr unsigned int DHGDFOIKEDD___c_TypeDefinitionIndex = 29034;

	class DHGDFOIKEDD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2A550);
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
