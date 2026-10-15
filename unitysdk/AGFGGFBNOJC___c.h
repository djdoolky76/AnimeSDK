#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGFGGFBNOJC;
namespace System { class Object; }

#define AGFGGFBNOJC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0FEE30)
#define AGFGGFBNOJC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0FEE70)
#define AGFGGFBNOJC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0FEE80)

inline static constexpr unsigned int AGFGGFBNOJC___c_TypeDefinitionIndex = 28008;

	class AGFGGFBNOJC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGFGGFBNOJC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFGGFBNOJC___C_CTOR_OFFSET))(this);
		}

		::AGFGGFBNOJC* __cctor_b__28_0()
		{
			return ((::AGFGGFBNOJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFGGFBNOJC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
