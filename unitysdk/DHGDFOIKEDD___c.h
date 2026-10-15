#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHGDFOIKEDD;
namespace System { class Object; }

#define DHGDFOIKEDD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1868A0)
#define DHGDFOIKEDD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1868E0)
#define DHGDFOIKEDD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1868F0)

inline static constexpr unsigned int DHGDFOIKEDD___c_TypeDefinitionIndex = 28444;

	class DHGDFOIKEDD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30860);
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
