#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/VersusBarPropertyType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define FFGBCKAOMGE_JCBPFBPPCEG_BGLKKPHDHGI_OFFSET UNITYSDK_OFFSET(0x130DD540)
#define FFGBCKAOMGE_JCBPFBPPCEG_CTOR_OFFSET UNITYSDK_OFFSET(0x130DCC40)
#define FFGBCKAOMGE_JCBPFBPPCEG_GET_CURVALUE_OFFSET UNITYSDK_OFFSET(0x130DDE70)
#define FFGBCKAOMGE_JCBPFBPPCEG_GET_EXRATIO_OFFSET UNITYSDK_OFFSET(0x130DDEB0)
#define FFGBCKAOMGE_JCBPFBPPCEG_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x130DDE90)
#define FFGBCKAOMGE_JCBPFBPPCEG_HAIEJENPAMD_OFFSET UNITYSDK_OFFSET(0x130DCE70)
#define FFGBCKAOMGE_JCBPFBPPCEG_LAOPGIDHAIE_OFFSET UNITYSDK_OFFSET(0x130DD3F0)
#define FFGBCKAOMGE_JCBPFBPPCEG_SET_CURVALUE_OFFSET UNITYSDK_OFFSET(0x130DDE80)
#define FFGBCKAOMGE_JCBPFBPPCEG_SET_EXRATIO_OFFSET UNITYSDK_OFFSET(0x130DDEC0)
#define FFGBCKAOMGE_JCBPFBPPCEG_SET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x130DDEA0)

inline static constexpr unsigned int FFGBCKAOMGE_JCBPFBPPCEG_TypeDefinitionIndex = 57496;

	class FFGBCKAOMGE_JCBPFBPPCEG : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* FBABBCNAGAG; // 0x10
		::RPG::GameCore::FixPoint _ExRatio_k__BackingField; // 0x18
		::RPG::GameCore::FixPoint _CurValue_k__BackingField; // 0x20
		::RPG::GameCore::FixPoint _MaxValue_k__BackingField; // 0x28
		::System::Boolean AODGNFHAPBL; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGBCKAOMGE_JCBPFBPPCEG_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CurValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGBCKAOMGE_JCBPFBPPCEG_GET_CURVALUE_OFFSET))(this);
		}

		::System::Void set_CurValue(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + FFGBCKAOMGE_JCBPFBPPCEG_SET_CURVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_MaxValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGBCKAOMGE_JCBPFBPPCEG_GET_MAXVALUE_OFFSET))(this);
		}

		::System::Void set_MaxValue(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + FFGBCKAOMGE_JCBPFBPPCEG_SET_MAXVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_ExRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGBCKAOMGE_JCBPFBPPCEG_GET_EXRATIO_OFFSET))(this);
		}

		::System::Void set_ExRatio(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + FFGBCKAOMGE_JCBPFBPPCEG_SET_EXRATIO_OFFSET))(this, a1);
		}

		::System::Boolean HAIEJENPAMD(::RPG::GameCore::VersusBarPropertyType a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::VersusBarPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + FFGBCKAOMGE_JCBPFBPPCEG_HAIEJENPAMD_OFFSET))(this, a1, a2);
		}

		::System::Void BGLKKPHDHGI(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + FFGBCKAOMGE_JCBPFBPPCEG_BGLKKPHDHGI_OFFSET))(this, a1);
		}

		::System::Void LAOPGIDHAIE(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + FFGBCKAOMGE_JCBPFBPPCEG_LAOPGIDHAIE_OFFSET))(this, a1);
		}

	};
