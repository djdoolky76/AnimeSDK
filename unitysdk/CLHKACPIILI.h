#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFLPANDDGHG.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CFHFMMDBINE;
class FOLOGHLENFB;
class IFAMBENCHMD;
namespace System { class String; }

#define CLHKACPIILI_AHCCPMEDAAE_OFFSET UNITYSDK_OFFSET(0x145D2350)
#define CLHKACPIILI_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x145D2040)
#define CLHKACPIILI_KACIOAEFGNI_OFFSET UNITYSDK_OFFSET(0x145D1F20)
#define CLHKACPIILI_KJOBIOEPEEB_OFFSET UNITYSDK_OFFSET(0x145D1FD0)
#define CLHKACPIILI_MILCMHOMBEF_OFFSET UNITYSDK_OFFSET(0x145D22A0)
#define CLHKACPIILI_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x145D2340)
#define CLHKACPIILI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x145D1ED0)
#define CLHKACPIILI__CTOR_OFFSET UNITYSDK_OFFSET(0x145D2030)

inline static constexpr unsigned int CLHKACPIILI_TypeDefinitionIndex = 42411;

class CLHKACPIILI : public ::BFLPANDDGHG
{
public:
	::CFHFMMDBINE* IHHNBPBIKFK; // 0xE8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHKACPIILI__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHKACPIILI_PHOADBJGFBE_OFFSET))(this);
	}

	::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::FOLOGHLENFB*, ::System::Int32>>* KACIOAEFGNI()
	{
		return ((::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::FOLOGHLENFB*, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHKACPIILI_KACIOAEFGNI_OFFSET))(this);
	}

	::System::Void KJOBIOEPEEB(::System::String* PMLJMGEFIND, ::System::Int32 NOKMIJNFMBH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLHKACPIILI_KJOBIOEPEEB_OFFSET))(this, PMLJMGEFIND, NOKMIJNFMBH);
	}

	::System::Void EDEFLFIKNFK(::System::UInt32 POBLGIHBMOG, ::IFAMBENCHMD* DNOHELNGGLJ, ::CFHFMMDBINE* HMMMOCJAEOA, ::UnityEngine::Vector3 CKPGOKHECCH, ::System::Single HBOHIAPEIMH, ::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::IFAMBENCHMD*, ::CFHFMMDBINE*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLHKACPIILI_EDEFLFIKNFK_OFFSET))(this, POBLGIHBMOG, DNOHELNGGLJ, HMMMOCJAEOA, CKPGOKHECCH, HBOHIAPEIMH, MOBNMDEDJIP);
	}

	::System::Void MILCMHOMBEF(::System::String* MIALFKCCCPI, ::System::Int32 KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLHKACPIILI_MILCMHOMBEF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHKACPIILI_OHFHFOHMBJH_OFFSET))(this);
	}

	::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::FOLOGHLENFB*, ::System::Int32>>* AHCCPMEDAAE()
	{
		return ((::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::FOLOGHLENFB*, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHKACPIILI_AHCCPMEDAAE_OFFSET))(this);
	}
};
