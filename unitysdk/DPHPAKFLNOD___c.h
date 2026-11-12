#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPHPAKFLNOD;
namespace System { class Object; }

#define DPHPAKFLNOD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4EF380)
#define DPHPAKFLNOD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4EF3C0)
#define DPHPAKFLNOD___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F4EF3D0)

inline static constexpr unsigned int DPHPAKFLNOD___c_TypeDefinitionIndex = 30211;

	class DPHPAKFLNOD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40CE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPHPAKFLNOD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHPAKFLNOD___C_CTOR_OFFSET))(this);
		}

		::DPHPAKFLNOD* __cctor_b__18_0()
		{
			return ((::DPHPAKFLNOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHPAKFLNOD___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
