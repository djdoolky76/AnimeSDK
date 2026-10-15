#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJEEIJDKBDP;
namespace System { class Object; }

#define IJEEIJDKBDP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E693040)
#define IJEEIJDKBDP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E693080)
#define IJEEIJDKBDP___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E693090)

inline static constexpr unsigned int IJEEIJDKBDP___c_TypeDefinitionIndex = 34130;

	class IJEEIJDKBDP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x521C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJEEIJDKBDP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEEIJDKBDP___C_CTOR_OFFSET))(this);
		}

		::IJEEIJDKBDP* __cctor_b__43_0()
		{
			return ((::IJEEIJDKBDP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEEIJDKBDP___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
