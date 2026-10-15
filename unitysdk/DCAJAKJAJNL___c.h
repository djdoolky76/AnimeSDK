#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCAJAKJAJNL;
namespace System { class Object; }

#define DCAJAKJAJNL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1684D0)
#define DCAJAKJAJNL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E168510)
#define DCAJAKJAJNL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E168520)

inline static constexpr unsigned int DCAJAKJAJNL___c_TypeDefinitionIndex = 31037;

	class DCAJAKJAJNL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x265C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCAJAKJAJNL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAJAKJAJNL___C_CTOR_OFFSET))(this);
		}

		::DCAJAKJAJNL* __cctor_b__23_0()
		{
			return ((::DCAJAKJAJNL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAJAKJAJNL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
