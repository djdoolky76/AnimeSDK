#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JENJOEAJELD.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

class PNJDGHBEMLK;

#define AEONPIHMGJK_EMCPPBMEKKK_OFFSET UNITYSDK_OFFSET(0x12CEE170)
#define AEONPIHMGJK_FIJKPMENJBB_OFFSET UNITYSDK_OFFSET(0x12CEDB30)
#define AEONPIHMGJK_NMKJNGPMGPA_OFFSET UNITYSDK_OFFSET(0x12CEDE50)
#define AEONPIHMGJK__CTOR_OFFSET UNITYSDK_OFFSET(0x12CEDAE0)

inline static constexpr unsigned int AEONPIHMGJK_TypeDefinitionIndex = 64312;

class AEONPIHMGJK : public ::System::Object
{
public:
	::PNJDGHBEMLK* BPNJBMCANEE; // 0x10
	::Il2CppArray<::JENJOEAJELD>* POGCFFELJFL; // 0x18

	::System::Void _ctor(::PNJDGHBEMLK* CDKCJAKODPN)
	{
		return ((::System::Void(*)(::PVOID, ::PNJDGHBEMLK*))((::PBYTE)hIl2Cpp + AEONPIHMGJK__CTOR_OFFSET))(this, CDKCJAKODPN);
	}

	::System::Void FIJKPMENJBB(::System::Int32 DBHFIJGFPOK, ::UnityEngine::Vector4 PPELJIHKBBD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + AEONPIHMGJK_FIJKPMENJBB_OFFSET))(this, DBHFIJGFPOK, PPELJIHKBBD);
	}

	::System::Void NMKJNGPMGPA(::System::Int32 DBHFIJGFPOK, ::UnityEngine::Color PPELJIHKBBD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + AEONPIHMGJK_NMKJNGPMGPA_OFFSET))(this, DBHFIJGFPOK, PPELJIHKBBD);
	}

	::System::Void EMCPPBMEKKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEONPIHMGJK_EMCPPBMEKKK_OFFSET))(this);
	}
};
