#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBHLCODNKHL;
namespace System { class Object; }

#define GBHLCODNKHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3FF390)
#define GBHLCODNKHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3FF3D0)
#define GBHLCODNKHL___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E3FF3E0)

inline static constexpr unsigned int GBHLCODNKHL___c_TypeDefinitionIndex = 34559;

	class GBHLCODNKHL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBHLCODNKHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHLCODNKHL___C_CTOR_OFFSET))(this);
		}

		::GBHLCODNKHL* __cctor_b__18_0()
		{
			return ((::GBHLCODNKHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHLCODNKHL___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
