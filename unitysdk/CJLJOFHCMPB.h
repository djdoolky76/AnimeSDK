#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKPLNMJHANM.h"
namespace RPG::Client::Prop { class OpticalIllusionPuzzleBoard; }
namespace UnityEngine { class GameObject; }

#define CJLJOFHCMPB_AJGHKBPIEKC_OFFSET UNITYSDK_OFFSET(0xE087B90)
#define CJLJOFHCMPB_CTOR_OFFSET UNITYSDK_OFFSET(0xE0872F0)
#define CJLJOFHCMPB_DBPDJNMNIOB_OFFSET UNITYSDK_OFFSET(0xE088D80)
#define CJLJOFHCMPB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE0873F0)
#define CJLJOFHCMPB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xE087940)
#define CJLJOFHCMPB_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xE088E60)
#define CJLJOFHCMPB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE087510)
#define CJLJOFHCMPB_MJMDLDEEOMM_OFFSET UNITYSDK_OFFSET(0xE0879A0)
#define CJLJOFHCMPB_NNPLGFKECGO_OFFSET UNITYSDK_OFFSET(0xE087D30)
#define CJLJOFHCMPB_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xE088DE0)
#define CJLJOFHCMPB_OJGPHAIABGK_OFFSET UNITYSDK_OFFSET(0xE087A70)
#define CJLJOFHCMPB___UPDATEGEAR_B__9_0_OFFSET UNITYSDK_OFFSET(0xE088EE0)

inline static constexpr unsigned int CJLJOFHCMPB_TypeDefinitionIndex = 81455;

	class CJLJOFHCMPB : public ::FKPLNMJHANM
	{
	public:
		::UnityEngine::GameObject* HLOLIMOHNPI; // 0x38
		::UnityEngine::GameObject* KDHNOBKBNOK; // 0x40
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
