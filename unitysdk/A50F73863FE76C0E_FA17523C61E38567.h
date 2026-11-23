#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A50F73863FE76C0E_A403B99D3ECA085F.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define A50F73863FE76C0E_FA17523C61E38567_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define A50F73863FE76C0E_FA17523C61E38567__CTOR_OFFSET UNITYSDK_OFFSET(0x2EEF610)

inline static constexpr unsigned int A50F73863FE76C0E_FA17523C61E38567_TypeDefinitionIndex = 11797;

class A50F73863FE76C0E_FA17523C61E38567 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A50F73863FE76C0E_FA17523C61E38567__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::A50F73863FE76C0E_A403B99D3ECA085F B714679C324FF96E, ::Il2CppArray<::System::Byte>* BD2C65BCCC92F212, ::System::UInt64 F2E014F34A4A1D04)
	{
		return ((::System::Void(*)(::PVOID, ::A50F73863FE76C0E_A403B99D3ECA085F, ::Il2CppArray<::System::Byte>*, ::System::UInt64))((::PBYTE)hIl2Cpp + A50F73863FE76C0E_FA17523C61E38567_INVOKE_OFFSET))(this, B714679C324FF96E, BD2C65BCCC92F212, F2E014F34A4A1D04);
	}
};
