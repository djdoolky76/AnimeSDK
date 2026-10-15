#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLOLFGCKKJB;
namespace System { class Object; }

#define LLOLFGCKKJB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E971C30)
#define LLOLFGCKKJB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E971C70)
#define LLOLFGCKKJB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E971C80)

inline static constexpr unsigned int LLOLFGCKKJB___c_TypeDefinitionIndex = 28595;

	class LLOLFGCKKJB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D030);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLOLFGCKKJB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOLFGCKKJB___C_CTOR_OFFSET))(this);
		}

		::LLOLFGCKKJB* __cctor_b__23_0()
		{
			return ((::LLOLFGCKKJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOLFGCKKJB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
