#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFHCKBHCNDF;
namespace System { class Object; }

#define GFHCKBHCNDF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20081EC0)
#define GFHCKBHCNDF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20081F00)
#define GFHCKBHCNDF___C___CCTOR_B__123_0_OFFSET UNITYSDK_OFFSET(0x20081F10)

inline static constexpr unsigned int GFHCKBHCNDF___c_TypeDefinitionIndex = 29289;

	class GFHCKBHCNDF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC030);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFHCKBHCNDF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFHCKBHCNDF___C_CTOR_OFFSET))(this);
		}

		::GFHCKBHCNDF* __cctor_b__123_0()
		{
			return ((::GFHCKBHCNDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFHCKBHCNDF___C___CCTOR_B__123_0_OFFSET))(this);
		}

	};
