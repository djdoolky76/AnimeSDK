#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPAENEHIBJP;
namespace System { class Object; }

#define LPAENEHIBJP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x200DECF0)
#define LPAENEHIBJP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x200DED30)
#define LPAENEHIBJP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x200DED40)

inline static constexpr unsigned int LPAENEHIBJP___c_TypeDefinitionIndex = 30280;

	class LPAENEHIBJP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45BF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPAENEHIBJP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAENEHIBJP___C_CTOR_OFFSET))(this);
		}

		::LPAENEHIBJP* __cctor_b__23_0()
		{
			return ((::LPAENEHIBJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAENEHIBJP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
