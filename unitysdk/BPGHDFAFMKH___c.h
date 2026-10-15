#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPGHDFAFMKH;
namespace System { class Object; }

#define BPGHDFAFMKH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E018C50)
#define BPGHDFAFMKH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E018C80)
#define BPGHDFAFMKH___C___CCTOR_B__78_0_OFFSET UNITYSDK_OFFSET(0x1E018C90)

inline static constexpr unsigned int BPGHDFAFMKH___c_TypeDefinitionIndex = 27800;

	class BPGHDFAFMKH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EFB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPGHDFAFMKH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGHDFAFMKH___C_CTOR_OFFSET))(this);
		}

		::BPGHDFAFMKH* __cctor_b__78_0()
		{
			return ((::BPGHDFAFMKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGHDFAFMKH___C___CCTOR_B__78_0_OFFSET))(this);
		}

	};
