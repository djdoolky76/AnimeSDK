#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFKNBJPPOGC;
namespace System { class Object; }

#define LFKNBJPPOGC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E943500)
#define LFKNBJPPOGC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E943540)
#define LFKNBJPPOGC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E943550)

inline static constexpr unsigned int LFKNBJPPOGC___c_TypeDefinitionIndex = 26327;

	class LFKNBJPPOGC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3BBA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFKNBJPPOGC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKNBJPPOGC___C_CTOR_OFFSET))(this);
		}

		::LFKNBJPPOGC* __cctor_b__23_0()
		{
			return ((::LFKNBJPPOGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKNBJPPOGC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
