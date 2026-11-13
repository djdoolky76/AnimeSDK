#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKPLNMJHANM.h"
namespace RPG::Client::Prop { class OpticalIllusionPuzzleBoard; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define JGKJJJCOICJ_AJGHKBPIEKC_OFFSET UNITYSDK_OFFSET(0x1934F910)
#define JGKJJJCOICJ_AJJEGFGAING_OFFSET UNITYSDK_OFFSET(0x1934F260)
#define JGKJJJCOICJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1934F0E0)
#define JGKJJJCOICJ_DBPDJNMNIOB_OFFSET UNITYSDK_OFFSET(0x19350220)
#define JGKJJJCOICJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1934F1F0)
#define JGKJJJCOICJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1934F6E0)
#define JGKJJJCOICJ_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x193502F0)
#define JGKJJJCOICJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1934F370)
#define JGKJJJCOICJ_MJMDLDEEOMM_OFFSET UNITYSDK_OFFSET(0x1934F740)
#define JGKJJJCOICJ_NNPLGFKECGO_OFFSET UNITYSDK_OFFSET(0x1934F980)
#define JGKJJJCOICJ_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x19350270)
#define JGKJJJCOICJ_OJGPHAIABGK_OFFSET UNITYSDK_OFFSET(0x1934F810)

inline static constexpr unsigned int JGKJJJCOICJ_TypeDefinitionIndex = 81455;

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
