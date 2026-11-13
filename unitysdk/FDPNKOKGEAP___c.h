#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPNKOKGEAP;
namespace System { class Object; }

#define FDPNKOKGEAP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2053C200)
#define FDPNKOKGEAP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2053C240)
#define FDPNKOKGEAP___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x2053C250)

inline static constexpr unsigned int FDPNKOKGEAP___c_TypeDefinitionIndex = 27959;

	class FDPNKOKGEAP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49DF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDPNKOKGEAP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPNKOKGEAP___C_CTOR_OFFSET))(this);
		}

		::FDPNKOKGEAP* __cctor_b__18_0()
		{
			return ((::FDPNKOKGEAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPNKOKGEAP___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
