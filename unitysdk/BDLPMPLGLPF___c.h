#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDLPMPLGLPF;
namespace System { class Object; }

#define BDLPMPLGLPF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8EDAC0)
#define BDLPMPLGLPF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8EDB00)
#define BDLPMPLGLPF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8EDB10)

inline static constexpr unsigned int BDLPMPLGLPF___c_TypeDefinitionIndex = 27638;

	class BDLPMPLGLPF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDLPMPLGLPF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLPMPLGLPF___C_CTOR_OFFSET))(this);
		}

		::BDLPMPLGLPF* __cctor_b__23_0()
		{
			return ((::BDLPMPLGLPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLPMPLGLPF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
