#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPAKIHDJMIK;
namespace System { class Object; }

#define FPAKIHDJMIK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3D52B0)
#define FPAKIHDJMIK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D52E0)
#define FPAKIHDJMIK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3D52F0)

inline static constexpr unsigned int FPAKIHDJMIK___c_TypeDefinitionIndex = 28844;

	class FPAKIHDJMIK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EF90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPAKIHDJMIK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPAKIHDJMIK___C_CTOR_OFFSET))(this);
		}

		::FPAKIHDJMIK* __cctor_b__28_0()
		{
			return ((::FPAKIHDJMIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPAKIHDJMIK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
