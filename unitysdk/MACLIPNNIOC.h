#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Color.h"

namespace Foundation { class MyLogger; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MACLIPNNIOC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1403D4E0)
#define MACLIPNNIOC_GHJODKMAJLC_OFFSET UNITYSDK_OFFSET(0x1403DB40)
#define MACLIPNNIOC_KBLIFPLNLCO_OFFSET UNITYSDK_OFFSET(0x1403D620)
#define MACLIPNNIOC_MCHEIEFPGAD_OFFSET UNITYSDK_OFFSET(0x1403D590)
#define MACLIPNNIOC_MPIOIADILMD_OFFSET UNITYSDK_OFFSET(0x1403DA20)
#define MACLIPNNIOC_OBNEPIDOIDI_OFFSET UNITYSDK_OFFSET(0x1403D9A0)
#define MACLIPNNIOC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1403DA90)
#define MACLIPNNIOC_PPFDJHFMPPI_OFFSET UNITYSDK_OFFSET(0x1403D820)
#define MACLIPNNIOC__CTOR_OFFSET UNITYSDK_OFFSET(0x1403D3F0)

inline static constexpr unsigned int MACLIPNNIOC_TypeDefinitionIndex = 85107;

class MACLIPNNIOC : public ::System::Object
{
public:
	::Foundation::MyLogger* GIDLDAGJOCE; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* DIBKDFDGOHM; // 0x18
	::System::Int32 JGGGKOGNOPO; // 0x20
	::UnityEngine::Vector3 FJEAFHDEDKH; // 0x24
	::System::Int32 HJCNGIJFAME; // 0x30
	::System::Single KGPIENPICCB; // 0x34

	::System::Void _ctor(::System::Int32 HHDMKFPFEJO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MACLIPNNIOC__CTOR_OFFSET))(this, HHDMKFPFEJO);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MACLIPNNIOC_DISPOSE_OFFSET))(this);
	}

	::System::Void MCHEIEFPGAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MACLIPNNIOC_MCHEIEFPGAD_OFFSET))(this);
	}

	::System::Void KBLIFPLNLCO(::System::Single PMNLNNGEIFM, ::System::Single GEGOALONGBI, ::UnityEngine::Vector3 PMKOELLKDDN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MACLIPNNIOC_KBLIFPLNLCO_OFFSET))(this, PMNLNNGEIFM, GEGOALONGBI, PMKOELLKDDN);
	}

	::System::Void PPFDJHFMPPI(::UnityEngine::Color AHINOHOOBKD, ::System::Single LFJEIDABOOK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + MACLIPNNIOC_PPFDJHFMPPI_OFFSET))(this, AHINOHOOBKD, LFJEIDABOOK);
	}

	::System::Void OBNEPIDOIDI(::UnityEngine::Color ABJOBELOMEE, ::UnityEngine::Color AHINOHOOBKD, ::System::Single LFJEIDABOOK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + MACLIPNNIOC_OBNEPIDOIDI_OFFSET))(this, ABJOBELOMEE, AHINOHOOBKD, LFJEIDABOOK);
	}

	::System::Single MPIOIADILMD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MACLIPNNIOC_MPIOIADILMD_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MACLIPNNIOC_PHOADBJGFBE_OFFSET))(this);
	}

	::UnityEngine::Vector3 GHJODKMAJLC()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MACLIPNNIOC_GHJODKMAJLC_OFFSET))(this);
	}
};
