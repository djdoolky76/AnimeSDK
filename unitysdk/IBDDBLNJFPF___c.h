#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBDDBLNJFPF;
namespace System { class Object; }

#define IBDDBLNJFPF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E611A10)
#define IBDDBLNJFPF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E611A50)
#define IBDDBLNJFPF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E611A60)

inline static constexpr unsigned int IBDDBLNJFPF___c_TypeDefinitionIndex = 26037;

	class IBDDBLNJFPF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40DC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBDDBLNJFPF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBDDBLNJFPF___C_CTOR_OFFSET))(this);
		}

		::IBDDBLNJFPF* __cctor_b__18_0()
		{
			return ((::IBDDBLNJFPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBDDBLNJFPF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
