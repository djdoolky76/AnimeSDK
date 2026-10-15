#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CICKIFGMKPF;
namespace System { class Object; }

#define CICKIFGMKPF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0A1B30)
#define CICKIFGMKPF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A1B70)
#define CICKIFGMKPF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0A1B80)

inline static constexpr unsigned int CICKIFGMKPF___c_TypeDefinitionIndex = 32977;

	class CICKIFGMKPF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16460);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CICKIFGMKPF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CICKIFGMKPF___C_CTOR_OFFSET))(this);
		}

		::CICKIFGMKPF* __cctor_b__28_0()
		{
			return ((::CICKIFGMKPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CICKIFGMKPF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
