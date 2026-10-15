#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFBBBKADPDI;
namespace System { class Object; }

#define DFBBBKADPDI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E16C850)
#define DFBBBKADPDI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E16C890)
#define DFBBBKADPDI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E16C8A0)

inline static constexpr unsigned int DFBBBKADPDI___c_TypeDefinitionIndex = 27484;

	class DFBBBKADPDI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2CCE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFBBBKADPDI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBBBKADPDI___C_CTOR_OFFSET))(this);
		}

		::DFBBBKADPDI* __cctor_b__23_0()
		{
			return ((::DFBBBKADPDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBBBKADPDI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
