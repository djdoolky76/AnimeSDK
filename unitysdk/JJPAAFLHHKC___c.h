#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJPAAFLHHKC;
namespace System { class Object; }

#define JJPAAFLHHKC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E766650)
#define JJPAAFLHHKC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E766680)
#define JJPAAFLHHKC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E766690)

inline static constexpr unsigned int JJPAAFLHHKC___c_TypeDefinitionIndex = 25961;

	class JJPAAFLHHKC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x657C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJPAAFLHHKC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPAAFLHHKC___C_CTOR_OFFSET))(this);
		}

		::JJPAAFLHHKC* __cctor_b__18_0()
		{
			return ((::JJPAAFLHHKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPAAFLHHKC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
