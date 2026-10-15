#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLJEJCFJPLE;
namespace System { class Object; }

#define MLJEJCFJPLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA83DE0)
#define MLJEJCFJPLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA83E10)
#define MLJEJCFJPLE___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EA83E20)

inline static constexpr unsigned int MLJEJCFJPLE___c_TypeDefinitionIndex = 27070;

	class MLJEJCFJPLE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLJEJCFJPLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJEJCFJPLE___C_CTOR_OFFSET))(this);
		}

		::MLJEJCFJPLE* __cctor_b__18_0()
		{
			return ((::MLJEJCFJPLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJEJCFJPLE___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
