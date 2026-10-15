#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKPLNMJHANM.h"
namespace RPG::Client::Prop { class OpticalIllusionPuzzleBoard; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define JGKJJJCOICJ_AJGHKBPIEKC_OFFSET UNITYSDK_OFFSET(0xB19BD90)
#define JGKJJJCOICJ_AJJEGFGAING_OFFSET UNITYSDK_OFFSET(0xB19B6E0)
#define JGKJJJCOICJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB19B560)
#define JGKJJJCOICJ_DBPDJNMNIOB_OFFSET UNITYSDK_OFFSET(0xB19C6A0)
#define JGKJJJCOICJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB19B670)
#define JGKJJJCOICJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB19BB60)
#define JGKJJJCOICJ_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB19C770)
#define JGKJJJCOICJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB19B7F0)
#define JGKJJJCOICJ_MJMDLDEEOMM_OFFSET UNITYSDK_OFFSET(0xB19BBC0)
#define JGKJJJCOICJ_NNPLGFKECGO_OFFSET UNITYSDK_OFFSET(0xB19BE00)
#define JGKJJJCOICJ_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB19C6F0)
#define JGKJJJCOICJ_OJGPHAIABGK_OFFSET UNITYSDK_OFFSET(0xB19BC90)

inline static constexpr unsigned int JGKJJJCOICJ_TypeDefinitionIndex = 78721;

	class JGKJJJCOICJ : public ::FKPLNMJHANM
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* JLGCCGGFGGH; // 0x38
		::System::Single MOEIIILKPFP; // 0x40
		::System::Void _ctor(::RPG::Client::Prop::OpticalIllusionPuzzleBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleBoard*))((::PBYTE)hIl2Cpp + JGKJJJCOICJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKJJJCOICJ_DISPOSE_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKJJJCOICJ_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JGKJJJCOICJ_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean OJGPHAIABGK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKJJJCOICJ_OJGPHAIABGK_OFFSET))(this);
		}

		::System::Void AJGHKBPIEKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKJJJCOICJ_AJGHKBPIEKC_OFFSET))(this);
		}

		::System::Boolean DBPDJNMNIOB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKJJJCOICJ_DBPDJNMNIOB_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKJJJCOICJ_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKJJJCOICJ_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void NNPLGFKECGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKJJJCOICJ_NNPLGFKECGO_OFFSET))(this);
		}

		::System::Void AJJEGFGAING()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKJJJCOICJ_AJJEGFGAING_OFFSET))(this);
		}

		::System::Void MJMDLDEEOMM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JGKJJJCOICJ_MJMDLDEEOMM_OFFSET))(this, a1);
		}

	};
