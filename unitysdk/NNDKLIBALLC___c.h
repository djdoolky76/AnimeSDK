#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNDKLIBALLC;
namespace System { class Object; }

#define NNDKLIBALLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB53310)
#define NNDKLIBALLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB53350)
#define NNDKLIBALLC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB53360)

inline static constexpr unsigned int NNDKLIBALLC___c_TypeDefinitionIndex = 31142;

	class NNDKLIBALLC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNDKLIBALLC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNDKLIBALLC___C_CTOR_OFFSET))(this);
		}

		::NNDKLIBALLC* __cctor_b__28_0()
		{
			return ((::NNDKLIBALLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNDKLIBALLC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
