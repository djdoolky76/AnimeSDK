#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBFKDPMGFNL;
namespace System { class Object; }

#define FBFKDPMGFNL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E307500)
#define FBFKDPMGFNL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E307540)
#define FBFKDPMGFNL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E307550)

inline static constexpr unsigned int FBFKDPMGFNL___c_TypeDefinitionIndex = 28954;

	class FBFKDPMGFNL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E9A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBFKDPMGFNL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFKDPMGFNL___C_CTOR_OFFSET))(this);
		}

		::FBFKDPMGFNL* __cctor_b__33_0()
		{
			return ((::FBFKDPMGFNL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFKDPMGFNL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
