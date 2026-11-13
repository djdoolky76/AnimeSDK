#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFMKBMJPEIC;
namespace System { class Object; }

#define KFMKBMJPEIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9B3CB0)
#define KFMKBMJPEIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9B3CF0)
#define KFMKBMJPEIC___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F9B3D00)

inline static constexpr unsigned int KFMKBMJPEIC___c_TypeDefinitionIndex = 25991;

	class KFMKBMJPEIC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCE80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFMKBMJPEIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMKBMJPEIC___C_CTOR_OFFSET))(this);
		}

		::KFMKBMJPEIC* __cctor_b__43_0()
		{
			return ((::KFMKBMJPEIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMKBMJPEIC___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
