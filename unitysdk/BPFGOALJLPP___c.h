#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPFGOALJLPP;
namespace System { class Object; }

#define BPFGOALJLPP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E016C40)
#define BPFGOALJLPP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E016C70)
#define BPFGOALJLPP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E016C80)

inline static constexpr unsigned int BPFGOALJLPP___c_TypeDefinitionIndex = 30864;

	class BPFGOALJLPP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5ED40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPFGOALJLPP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFGOALJLPP___C_CTOR_OFFSET))(this);
		}

		::BPFGOALJLPP* __cctor_b__28_0()
		{
			return ((::BPFGOALJLPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFGOALJLPP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
