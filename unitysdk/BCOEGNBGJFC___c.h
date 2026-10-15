#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCOEGNBGJFC;
namespace System { class Object; }

#define BCOEGNBGJFC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8E3BC0)
#define BCOEGNBGJFC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8E3C00)
#define BCOEGNBGJFC___C___CCTOR_B__89_0_OFFSET UNITYSDK_OFFSET(0x1E8E3C10)

inline static constexpr unsigned int BCOEGNBGJFC___c_TypeDefinitionIndex = 33304;

	class BCOEGNBGJFC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCOEGNBGJFC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOEGNBGJFC___C_CTOR_OFFSET))(this);
		}

		::BCOEGNBGJFC* __cctor_b__89_0()
		{
			return ((::BCOEGNBGJFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOEGNBGJFC___C___CCTOR_B__89_0_OFFSET))(this);
		}

	};
