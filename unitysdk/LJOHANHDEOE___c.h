#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJOHANHDEOE;
namespace System { class Object; }

#define LJOHANHDEOE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E95B590)
#define LJOHANHDEOE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E95B5D0)
#define LJOHANHDEOE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E95B5E0)

inline static constexpr unsigned int LJOHANHDEOE___c_TypeDefinitionIndex = 26514;

	class LJOHANHDEOE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x397C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJOHANHDEOE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOHANHDEOE___C_CTOR_OFFSET))(this);
		}

		::LJOHANHDEOE* __cctor_b__23_0()
		{
			return ((::LJOHANHDEOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOHANHDEOE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
