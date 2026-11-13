#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEHIEJJHDPM;
namespace System { class Object; }

#define FEHIEJJHDPM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205440B0)
#define FEHIEJJHDPM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x205440F0)
#define FEHIEJJHDPM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20544100)

inline static constexpr unsigned int FEHIEJJHDPM___c_TypeDefinitionIndex = 26432;

	class FEHIEJJHDPM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B140);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEHIEJJHDPM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHIEJJHDPM___C_CTOR_OFFSET))(this);
		}

		::FEHIEJJHDPM* __cctor_b__23_0()
		{
			return ((::FEHIEJJHDPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHIEJJHDPM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
