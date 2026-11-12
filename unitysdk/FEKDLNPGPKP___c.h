#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEKDLNPGPKP;
namespace System { class Object; }

#define FEKDLNPGPKP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F64FC80)
#define FEKDLNPGPKP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F64FCC0)
#define FEKDLNPGPKP___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F64FCD0)

inline static constexpr unsigned int FEKDLNPGPKP___c_TypeDefinitionIndex = 28435;

	class FEKDLNPGPKP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B4A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEKDLNPGPKP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKDLNPGPKP___C_CTOR_OFFSET))(this);
		}

		::FEKDLNPGPKP* __cctor_b__18_0()
		{
			return ((::FEKDLNPGPKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKDLNPGPKP___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
