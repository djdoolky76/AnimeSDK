#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEDEIDNOLIM;
namespace System { class Object; }

#define NEDEIDNOLIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC3AC0)
#define NEDEIDNOLIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC3B00)
#define NEDEIDNOLIM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAC3B10)

inline static constexpr unsigned int NEDEIDNOLIM___c_TypeDefinitionIndex = 33514;

	class NEDEIDNOLIM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60430);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEDEIDNOLIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEDEIDNOLIM___C_CTOR_OFFSET))(this);
		}

		::NEDEIDNOLIM* __cctor_b__28_0()
		{
			return ((::NEDEIDNOLIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEDEIDNOLIM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
