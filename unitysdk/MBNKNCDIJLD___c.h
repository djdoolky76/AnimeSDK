#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBNKNCDIJLD;
namespace System { class Object; }

#define MBNKNCDIJLD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9EC430)
#define MBNKNCDIJLD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9EC470)
#define MBNKNCDIJLD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9EC480)

inline static constexpr unsigned int MBNKNCDIJLD___c_TypeDefinitionIndex = 33210;

	class MBNKNCDIJLD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45DB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBNKNCDIJLD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBNKNCDIJLD___C_CTOR_OFFSET))(this);
		}

		::MBNKNCDIJLD* __cctor_b__23_0()
		{
			return ((::MBNKNCDIJLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBNKNCDIJLD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
