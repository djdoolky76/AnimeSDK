#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFKNBJPPOGC;
namespace System { class Object; }

#define LFKNBJPPOGC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC63010)
#define LFKNBJPPOGC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC63050)
#define LFKNBJPPOGC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FC63060)

inline static constexpr unsigned int LFKNBJPPOGC___c_TypeDefinitionIndex = 26854;

	class LFKNBJPPOGC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30C70);
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
