#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OLCIGFGFELG;
namespace System { class Object; }

#define OLCIGFGFELG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD643B0)
#define OLCIGFGFELG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD643F0)
#define OLCIGFGFELG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FD64400)

inline static constexpr unsigned int OLCIGFGFELG___c_TypeDefinitionIndex = 34479;

	class OLCIGFGFELG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x207A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLCIGFGFELG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCIGFGFELG___C_CTOR_OFFSET))(this);
		}

		::OLCIGFGFELG* __cctor_b__23_0()
		{
			return ((::OLCIGFGFELG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCIGFGFELG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
