#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JOGBIBJLPJB.h"
#include "unitysdk/System/Object.h"
class LAJCPEFEOPN;
class PEELDCHBLJK;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingFactorySpawnInfo; }

#define FCFPLEDCJKF_EPFBBLBNNKD_CTOR_OFFSET UNITYSDK_OFFSET(0x156ADF30)
#define FCFPLEDCJKF_EPFBBLBNNKD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156AE360)
#define FCFPLEDCJKF_EPFBBLBNNKD_DJDMHIDOCHN_OFFSET UNITYSDK_OFFSET(0x156AE430)
#define FCFPLEDCJKF_EPFBBLBNNKD_INIJCJJLPKM_OFFSET UNITYSDK_OFFSET(0x156AE5E0)
#define FCFPLEDCJKF_EPFBBLBNNKD_NKJJNFGGIIA_OFFSET UNITYSDK_OFFSET(0x156AEDF0)

inline static constexpr unsigned int FCFPLEDCJKF_EPFBBLBNNKD_TypeDefinitionIndex = 69307;

	class FCFPLEDCJKF_EPFBBLBNNKD : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactorySpawnInfo* CIKPBGDIABO; // 0x10
		::Il2CppArray<::JOGBIBJLPJB>* KFAMJKJOIDF; // 0x18
		::System::Single HALDDNCJIIK; // 0x20
		::System::Void _ctor(::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactorySpawnInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactorySpawnInfo*))((::PBYTE)hIl2Cpp + FCFPLEDCJKF_EPFBBLBNNKD_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 DJDMHIDOCHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFPLEDCJKF_EPFBBLBNNKD_DJDMHIDOCHN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFPLEDCJKF_EPFBBLBNNKD_DISPOSE_OFFSET))(this);
		}

		::LAJCPEFEOPN* INIJCJJLPKM(::PEELDCHBLJK* a1, ::System::Single a2)
		{
			return ((::LAJCPEFEOPN*(*)(::PVOID, ::PEELDCHBLJK*, ::System::Single))((::PBYTE)hIl2Cpp + FCFPLEDCJKF_EPFBBLBNNKD_INIJCJJLPKM_OFFSET))(this, a1, a2);
		}

		::System::Single NKJJNFGGIIA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFPLEDCJKF_EPFBBLBNNKD_NKJJNFGGIIA_OFFSET))(this);
		}

	};
