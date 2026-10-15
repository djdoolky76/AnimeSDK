#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAILIIEEBJM;
namespace System { class Object; }

#define KAILIIEEBJM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7B72F0)
#define KAILIIEEBJM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B7330)
#define KAILIIEEBJM___C___CCTOR_B__84_0_OFFSET UNITYSDK_OFFSET(0x1E7B7340)

inline static constexpr unsigned int KAILIIEEBJM___c_TypeDefinitionIndex = 30028;

	class KAILIIEEBJM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAILIIEEBJM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAILIIEEBJM___C_CTOR_OFFSET))(this);
		}

		::KAILIIEEBJM* __cctor_b__84_0()
		{
			return ((::KAILIIEEBJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAILIIEEBJM___C___CCTOR_B__84_0_OFFSET))(this);
		}

	};
