#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNHEKLOMECL;
namespace System { class Object; }

#define GNHEKLOMECL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4B2DE0)
#define GNHEKLOMECL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B2E20)
#define GNHEKLOMECL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4B2E30)

inline static constexpr unsigned int GNHEKLOMECL___c_TypeDefinitionIndex = 34751;

	class GNHEKLOMECL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20EC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNHEKLOMECL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHEKLOMECL___C_CTOR_OFFSET))(this);
		}

		::GNHEKLOMECL* __cctor_b__28_0()
		{
			return ((::GNHEKLOMECL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHEKLOMECL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
