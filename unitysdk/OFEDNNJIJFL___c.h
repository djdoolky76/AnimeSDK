#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFEDNNJIJFL;
namespace System { class Object; }

#define OFEDNNJIJFL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE13540)
#define OFEDNNJIJFL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE13570)
#define OFEDNNJIJFL___C___CCTOR_B__177_0_OFFSET UNITYSDK_OFFSET(0x1DE13580)

inline static constexpr unsigned int OFEDNNJIJFL___c_TypeDefinitionIndex = 33185;

	class OFEDNNJIJFL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16440);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFEDNNJIJFL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEDNNJIJFL___C_CTOR_OFFSET))(this);
		}

		::OFEDNNJIJFL* __cctor_b__177_0()
		{
			return ((::OFEDNNJIJFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEDNNJIJFL___C___CCTOR_B__177_0_OFFSET))(this);
		}

	};
