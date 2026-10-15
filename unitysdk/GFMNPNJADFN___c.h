#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFMNPNJADFN;
namespace System { class Object; }

#define GFMNPNJADFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4735F0)
#define GFMNPNJADFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E473630)
#define GFMNPNJADFN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E473640)

inline static constexpr unsigned int GFMNPNJADFN___c_TypeDefinitionIndex = 31937;

	class GFMNPNJADFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14D30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFMNPNJADFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMNPNJADFN___C_CTOR_OFFSET))(this);
		}

		::GFMNPNJADFN* __cctor_b__28_0()
		{
			return ((::GFMNPNJADFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMNPNJADFN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
