#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKPLNMJHANM.h"
namespace RPG::Client::Prop { class OpticalIllusionPuzzleBoard; }
namespace UnityEngine { class GameObject; }

#define CJLJOFHCMPB_AJGHKBPIEKC_OFFSET UNITYSDK_OFFSET(0x1AD2F5E0)
#define CJLJOFHCMPB_CTOR_OFFSET UNITYSDK_OFFSET(0x1AD2ED40)
#define CJLJOFHCMPB_DBPDJNMNIOB_OFFSET UNITYSDK_OFFSET(0x1AD307D0)
#define CJLJOFHCMPB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AD2EE40)
#define CJLJOFHCMPB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1AD2F390)
#define CJLJOFHCMPB_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1AD308B0)
#define CJLJOFHCMPB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1AD2EF60)
#define CJLJOFHCMPB_MJMDLDEEOMM_OFFSET UNITYSDK_OFFSET(0x1AD2F3F0)
#define CJLJOFHCMPB_NNPLGFKECGO_OFFSET UNITYSDK_OFFSET(0x1AD2F780)
#define CJLJOFHCMPB_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1AD30830)
#define CJLJOFHCMPB_OJGPHAIABGK_OFFSET UNITYSDK_OFFSET(0x1AD2F4C0)
#define CJLJOFHCMPB___UPDATEGEAR_B__9_0_OFFSET UNITYSDK_OFFSET(0x1AD30930)

inline static constexpr unsigned int CJLJOFHCMPB_TypeDefinitionIndex = 81454;

	class CJLJOFHCMPB : public ::FKPLNMJHANM
	{
	public:
		::UnityEngine::GameObject* KDHNOBKBNOK; // 0x38
		::UnityEngine::GameObject* HLOLIMOHNPI; // 0x40
		::System::Single MOEIIILKPFP; // 0x48
		::System::Void _ctor(::RPG::Client::Prop::OpticalIllusionPuzzleBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleBoard*))((::PBYTE)hIl2Cpp + CJLJOFHCMPB_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLJOFHCMPB_DISPOSE_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLJOFHCMPB_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CJLJOFHCMPB_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean OJGPHAIABGK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLJOFHCMPB_OJGPHAIABGK_OFFSET))(this);
		}

		::System::Void AJGHKBPIEKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLJOFHCMPB_AJGHKBPIEKC_OFFSET))(this);
		}

		::System::Boolean DBPDJNMNIOB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLJOFHCMPB_DBPDJNMNIOB_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLJOFHCMPB_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLJOFHCMPB_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void NNPLGFKECGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLJOFHCMPB_NNPLGFKECGO_OFFSET))(this);
		}

		::System::Void MJMDLDEEOMM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CJLJOFHCMPB_MJMDLDEEOMM_OFFSET))(this, a1);
		}

		::System::Void __UpdateGear_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLJOFHCMPB___UPDATEGEAR_B__9_0_OFFSET))(this);
		}

	};
