#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPHANFONFPF;
namespace System { class Object; }

#define HPHANFONFPF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5C9750)
#define HPHANFONFPF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C9780)
#define HPHANFONFPF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5C9790)

inline static constexpr unsigned int HPHANFONFPF___c_TypeDefinitionIndex = 30403;

	class HPHANFONFPF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3EC10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPHANFONFPF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHANFONFPF___C_CTOR_OFFSET))(this);
		}

		::HPHANFONFPF* __cctor_b__23_0()
		{
			return ((::HPHANFONFPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHANFONFPF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
