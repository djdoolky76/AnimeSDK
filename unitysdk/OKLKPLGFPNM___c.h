#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKLKPLGFPNM;
namespace System { class Object; }

#define OKLKPLGFPNM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE71CD0)
#define OKLKPLGFPNM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE71D10)
#define OKLKPLGFPNM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE71D20)

inline static constexpr unsigned int OKLKPLGFPNM___c_TypeDefinitionIndex = 32602;

	class OKLKPLGFPNM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKLKPLGFPNM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLKPLGFPNM___C_CTOR_OFFSET))(this);
		}

		::OKLKPLGFPNM* __cctor_b__23_0()
		{
			return ((::OKLKPLGFPNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLKPLGFPNM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
