#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJDCIEFEGIM;
namespace System { class Object; }

#define HJDCIEFEGIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E577EC0)
#define HJDCIEFEGIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E577F00)
#define HJDCIEFEGIM___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E577F10)

inline static constexpr unsigned int HJDCIEFEGIM___c_TypeDefinitionIndex = 27227;

	class HJDCIEFEGIM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x354F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJDCIEFEGIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDCIEFEGIM___C_CTOR_OFFSET))(this);
		}

		::HJDCIEFEGIM* __cctor_b__43_0()
		{
			return ((::HJDCIEFEGIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDCIEFEGIM___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
