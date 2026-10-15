#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANCNGIAAHKP;
namespace System { class Object; }

#define ANCNGIAAHKP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4FC170)
#define ANCNGIAAHKP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4FC1A0)
#define ANCNGIAAHKP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E4FC1B0)

inline static constexpr unsigned int ANCNGIAAHKP___c_TypeDefinitionIndex = 28187;

	class ANCNGIAAHKP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x462F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANCNGIAAHKP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCNGIAAHKP___C_CTOR_OFFSET))(this);
		}

		::ANCNGIAAHKP* __cctor_b__23_0()
		{
			return ((::ANCNGIAAHKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCNGIAAHKP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
