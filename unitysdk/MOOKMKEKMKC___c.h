#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOOKMKEKMKC;
namespace System { class Object; }

#define MOOKMKEKMKC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA85F10)
#define MOOKMKEKMKC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA85F40)
#define MOOKMKEKMKC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EA85F50)

inline static constexpr unsigned int MOOKMKEKMKC___c_TypeDefinitionIndex = 27472;

	class MOOKMKEKMKC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOOKMKEKMKC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKMKEKMKC___C_CTOR_OFFSET))(this);
		}

		::MOOKMKEKMKC* __cctor_b__33_0()
		{
			return ((::MOOKMKEKMKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKMKEKMKC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
