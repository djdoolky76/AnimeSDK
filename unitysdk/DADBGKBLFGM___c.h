#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DADBGKBLFGM;
namespace System { class Object; }

#define DADBGKBLFGM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E14D160)
#define DADBGKBLFGM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E14D1A0)
#define DADBGKBLFGM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E14D1B0)

inline static constexpr unsigned int DADBGKBLFGM___c_TypeDefinitionIndex = 28124;

	class DADBGKBLFGM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x240E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DADBGKBLFGM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DADBGKBLFGM___C_CTOR_OFFSET))(this);
		}

		::DADBGKBLFGM* __cctor_b__28_0()
		{
			return ((::DADBGKBLFGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DADBGKBLFGM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
