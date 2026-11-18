#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FNJCJNFMPON;
class KCHBFMFAGNF;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define PAFFKGCGNBD___C_FEJDPHPCCIP_OFFSET UNITYSDK_OFFSET(0x15F9BB00)
#define PAFFKGCGNBD___C_PCMFFMCOANC_OFFSET UNITYSDK_OFFSET(0x15F9BAE0)
#define PAFFKGCGNBD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F9BA90)
#define PAFFKGCGNBD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15F9BAD0)

inline static constexpr unsigned int PAFFKGCGNBD___c_TypeDefinitionIndex = 38311;

class PAFFKGCGNBD___c : public ::System::Object
{
public:
	static ::System::Func_2<::KCHBFMFAGNF*, ::System::Collections::Generic::IEnumerable_1<::FNJCJNFMPON*>*>** StaticGet___9__93_0()
	{
		return (::System::Func_2<::KCHBFMFAGNF*, ::System::Collections::Generic::IEnumerable_1<::FNJCJNFMPON*>*>**)Il2CppClass::FromTypeDefinitionIndex(PAFFKGCGNBD___c_TypeDefinitionIndex)->GetStaticField(0x3FA20);
	}
	static ::System::Func_2<::FNJCJNFMPON*, ::System::Single>** StaticGet___9__93_1()
	{
		return (::System::Func_2<::FNJCJNFMPON*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(PAFFKGCGNBD___c_TypeDefinitionIndex)->GetStaticField(0x3FA28);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PAFFKGCGNBD___c_TypeDefinitionIndex)->GetStaticField(0x3FA30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAFFKGCGNBD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAFFKGCGNBD___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::FNJCJNFMPON*>* PCMFFMCOANC(::KCHBFMFAGNF* ALPANKAJAGK)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::FNJCJNFMPON*>*(*)(::PVOID, ::KCHBFMFAGNF*))((::PBYTE)hIl2Cpp + PAFFKGCGNBD___C_PCMFFMCOANC_OFFSET))(this, ALPANKAJAGK);
	}

	::System::Single FEJDPHPCCIP(::FNJCJNFMPON* KBNHAJHPKPO)
	{
		return ((::System::Single(*)(::PVOID, ::FNJCJNFMPON*))((::PBYTE)hIl2Cpp + PAFFKGCGNBD___C_FEJDPHPCCIP_OFFSET))(this, KBNHAJHPKPO);
	}
};
