#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJPLKPNPFBE;
namespace System { class Object; }

#define KJPLKPNPFBE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFE5E10)
#define KJPLKPNPFBE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFE5E50)
#define KJPLKPNPFBE___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FFE5E60)

inline static constexpr unsigned int KJPLKPNPFBE___c_TypeDefinitionIndex = 26506;

	class KJPLKPNPFBE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16C90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJPLKPNPFBE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPLKPNPFBE___C_CTOR_OFFSET))(this);
		}

		::KJPLKPNPFBE* __cctor_b__18_0()
		{
			return ((::KJPLKPNPFBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPLKPNPFBE___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
