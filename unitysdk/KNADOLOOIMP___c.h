#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNADOLOOIMP;
namespace System { class Object; }

#define KNADOLOOIMP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDCD6B0)
#define KNADOLOOIMP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDCD6F0)
#define KNADOLOOIMP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FDCD700)

inline static constexpr unsigned int KNADOLOOIMP___c_TypeDefinitionIndex = 26609;

	class KNADOLOOIMP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E290);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNADOLOOIMP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNADOLOOIMP___C_CTOR_OFFSET))(this);
		}

		::KNADOLOOIMP* __cctor_b__23_0()
		{
			return ((::KNADOLOOIMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNADOLOOIMP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
