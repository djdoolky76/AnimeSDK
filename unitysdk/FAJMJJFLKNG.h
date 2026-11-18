#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFILGIAKMDK.h"
#include "unitysdk/AAKHHPMNOID.h"

class KGBFLHNJHHN;

#define FAJMJJFLKNG_BABDMHEFBJL_OFFSET UNITYSDK_OFFSET(0x19526080)
#define FAJMJJFLKNG_BOEKODHNHKL_OFFSET UNITYSDK_OFFSET(0x19526090)
#define FAJMJJFLKNG_CDHFKNEMODJ_OFFSET UNITYSDK_OFFSET(0x195260B0)
#define FAJMJJFLKNG_JKFOGDAFION_OFFSET UNITYSDK_OFFSET(0x19526070)
#define FAJMJJFLKNG_MDPBFKOAOBA_OFFSET UNITYSDK_OFFSET(0x195260A0)
#define FAJMJJFLKNG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19526150)
#define FAJMJJFLKNG__CCTOR_OFFSET UNITYSDK_OFFSET(0x19526140)
#define FAJMJJFLKNG__CTOR_OFFSET UNITYSDK_OFFSET(0x195260C0)

inline static constexpr unsigned int FAJMJJFLKNG_TypeDefinitionIndex = 9391;

class FAJMJJFLKNG : public ::DFILGIAKMDK
{
public:
	static ::System::Int32* StaticGet_JHBEJMEGLNJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FAJMJJFLKNG_TypeDefinitionIndex)->GetStaticField(0x3E30);
	}
	::Il2CppArray<::System::Int32>* _GADIBNOADAE_k__BackingField; // 0xE0

	::System::Void _ctor(::AAKHHPMNOID LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AAKHHPMNOID, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FAJMJJFLKNG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAJMJJFLKNG__CCTOR_OFFSET))();
	}

	::Il2CppArray<::System::Int32>* JKFOGDAFION()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJMJJFLKNG_JKFOGDAFION_OFFSET))(this);
	}

	::System::Int32 BABDMHEFBJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJMJJFLKNG_BABDMHEFBJL_OFFSET))(this);
	}

	::System::Int32 BOEKODHNHKL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJMJJFLKNG_BOEKODHNHKL_OFFSET))(this);
	}

	::System::Boolean MDPBFKOAOBA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJMJJFLKNG_MDPBFKOAOBA_OFFSET))(this);
	}

	::System::Int32 CDHFKNEMODJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJMJJFLKNG_CDHFKNEMODJ_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJMJJFLKNG_OJENCMOGDKL_OFFSET))(this);
	}
};
