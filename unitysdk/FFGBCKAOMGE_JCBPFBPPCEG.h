#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/VersusBarPropertyType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define FFGBCKAOMGE_JCBPFBPPCEG_BGLKKPHDHGI_OFFSET UNITYSDK_OFFSET(0x1572B2D0)
#define FFGBCKAOMGE_JCBPFBPPCEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1572A9C0)
#define FFGBCKAOMGE_JCBPFBPPCEG_GET_CURVALUE_OFFSET UNITYSDK_OFFSET(0x1572BC00)
#define FFGBCKAOMGE_JCBPFBPPCEG_GET_EXRATIO_OFFSET UNITYSDK_OFFSET(0x1572BC40)
#define FFGBCKAOMGE_JCBPFBPPCEG_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x1572BC20)
#define FFGBCKAOMGE_JCBPFBPPCEG_HAIEJENPAMD_OFFSET UNITYSDK_OFFSET(0x1572AC00)
#define FFGBCKAOMGE_JCBPFBPPCEG_LAOPGIDHAIE_OFFSET UNITYSDK_OFFSET(0x1572B180)
#define FFGBCKAOMGE_JCBPFBPPCEG_SET_CURVALUE_OFFSET UNITYSDK_OFFSET(0x1572BC10)
#define FFGBCKAOMGE_JCBPFBPPCEG_SET_EXRATIO_OFFSET UNITYSDK_OFFSET(0x1572BC50)
#define FFGBCKAOMGE_JCBPFBPPCEG_SET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x1572BC30)

inline static constexpr unsigned int FFGBCKAOMGE_JCBPFBPPCEG_TypeDefinitionIndex = 56282;

	class FFGBCKAOMGE_JCBPFBPPCEG : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* FBABBCNAGAG; // 0x10
		::RPG::GameCore::FixPoint _ExRatio_k__BackingField; // 0x18
		::RPG::GameCore::FixPoint _MaxValue_k__BackingField; // 0x20
		::RPG::GameCore::FixPoint _CurValue_k__BackingField; // 0x28
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
