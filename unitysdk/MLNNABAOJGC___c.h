#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLNNABAOJGC;
namespace System { class Object; }

#define MLNNABAOJGC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA84870)
#define MLNNABAOJGC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA848A0)
#define MLNNABAOJGC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA848B0)

inline static constexpr unsigned int MLNNABAOJGC___c_TypeDefinitionIndex = 30199;

	class MLNNABAOJGC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLNNABAOJGC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNNABAOJGC___C_CTOR_OFFSET))(this);
		}

		::MLNNABAOJGC* __cctor_b__28_0()
		{
			return ((::MLNNABAOJGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNNABAOJGC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
