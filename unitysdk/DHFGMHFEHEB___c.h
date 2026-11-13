#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHFGMHFEHEB;
namespace System { class Object; }

#define DHFGMHFEHEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20652BC0)
#define DHFGMHFEHEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20652C00)
#define DHFGMHFEHEB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20652C10)

inline static constexpr unsigned int DHFGMHFEHEB___c_TypeDefinitionIndex = 31529;

	class DHFGMHFEHEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2A4F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHFGMHFEHEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFGMHFEHEB___C_CTOR_OFFSET))(this);
		}

		::DHFGMHFEHEB* __cctor_b__28_0()
		{
			return ((::DHFGMHFEHEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFGMHFEHEB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
