#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPNKOKGEAP;
namespace System { class Object; }

#define FDPNKOKGEAP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E331AA0)
#define FDPNKOKGEAP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E331AE0)
#define FDPNKOKGEAP___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E331AF0)

inline static constexpr unsigned int FDPNKOKGEAP___c_TypeDefinitionIndex = 27428;

	class FDPNKOKGEAP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52FE0);
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
