#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBGHDPKNNKK;
namespace System { class Object; }

#define DBGHDPKNNKK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F435B60)
#define DBGHDPKNNKK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F435BA0)
#define DBGHDPKNNKK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F435BB0)

inline static constexpr unsigned int DBGHDPKNNKK___c_TypeDefinitionIndex = 27357;

	class DBGHDPKNNKK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20430);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBGHDPKNNKK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGHDPKNNKK___C_CTOR_OFFSET))(this);
		}

		::DBGHDPKNNKK* __cctor_b__23_0()
		{
			return ((::DBGHDPKNNKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGHDPKNNKK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
