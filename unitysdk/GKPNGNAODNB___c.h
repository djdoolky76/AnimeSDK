#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKPNGNAODNB;
namespace System { class Object; }

#define GKPNGNAODNB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA3A9D0)
#define GKPNGNAODNB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA3AA00)
#define GKPNGNAODNB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FA3AA10)

inline static constexpr unsigned int GKPNGNAODNB___c_TypeDefinitionIndex = 26970;

	class GKPNGNAODNB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15F50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKPNGNAODNB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPNGNAODNB___C_CTOR_OFFSET))(this);
		}

		::GKPNGNAODNB* __cctor_b__18_0()
		{
			return ((::GKPNGNAODNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPNGNAODNB___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
