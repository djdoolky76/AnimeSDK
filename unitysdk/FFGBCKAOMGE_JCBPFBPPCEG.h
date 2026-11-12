#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/VersusBarPropertyType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define FFGBCKAOMGE_JCBPFBPPCEG_BGLKKPHDHGI_OFFSET UNITYSDK_OFFSET(0x16652AF0)
#define FFGBCKAOMGE_JCBPFBPPCEG_CTOR_OFFSET UNITYSDK_OFFSET(0x166521E0)
#define FFGBCKAOMGE_JCBPFBPPCEG_GET_CURVALUE_OFFSET UNITYSDK_OFFSET(0x16653420)
#define FFGBCKAOMGE_JCBPFBPPCEG_GET_EXRATIO_OFFSET UNITYSDK_OFFSET(0x16653460)
#define FFGBCKAOMGE_JCBPFBPPCEG_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x16653440)
#define FFGBCKAOMGE_JCBPFBPPCEG_HAIEJENPAMD_OFFSET UNITYSDK_OFFSET(0x16652420)
#define FFGBCKAOMGE_JCBPFBPPCEG_LAOPGIDHAIE_OFFSET UNITYSDK_OFFSET(0x166529A0)
#define FFGBCKAOMGE_JCBPFBPPCEG_SET_CURVALUE_OFFSET UNITYSDK_OFFSET(0x16653430)
#define FFGBCKAOMGE_JCBPFBPPCEG_SET_EXRATIO_OFFSET UNITYSDK_OFFSET(0x16653470)
#define FFGBCKAOMGE_JCBPFBPPCEG_SET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x16653450)

inline static constexpr unsigned int FFGBCKAOMGE_JCBPFBPPCEG_TypeDefinitionIndex = 57496;

	class FFGBCKAOMGE_JCBPFBPPCEG : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* FBABBCNAGAG; // 0x10
		::RPG::GameCore::FixPoint _CurValue_k__BackingField; // 0x18
		::RPG::GameCore::FixPoint _ExRatio_k__BackingField; // 0x20
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
