#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEKDLNPGPKP;
namespace System { class Object; }

#define FEKDLNPGPKP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3687D0)
#define FEKDLNPGPKP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E368810)
#define FEKDLNPGPKP___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E368820)

inline static constexpr unsigned int FEKDLNPGPKP___c_TypeDefinitionIndex = 27858;

	class FEKDLNPGPKP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D790);
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
