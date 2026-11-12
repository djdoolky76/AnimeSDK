#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CACNLLMKCPD.h"
#include "unitysdk/GELIALJDFBL.h"
class LNCKNPPCBDN;
class PEEDLCHFAFL;
class PNFHKPJGEHM;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::Client { class FiveDimTrainModeDisplayInfos; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define MDONAKLJPHM_CCTOR_OFFSET UNITYSDK_OFFSET(0xC166310)
#define MDONAKLJPHM_CTOR_OFFSET UNITYSDK_OFFSET(0xC1655F0)
#define MDONAKLJPHM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC165600)
#define MDONAKLJPHM_LAKCOCOAHEP_OFFSET UNITYSDK_OFFSET(0xC165E10)
#define MDONAKLJPHM_MDDEKBBMDEK_OFFSET UNITYSDK_OFFSET(0xC165950)
#define MDONAKLJPHM_OFGJJEONDMO_OFFSET UNITYSDK_OFFSET(0xC1660A0)
#define MDONAKLJPHM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC165650)
#define MDONAKLJPHM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC165FA0)
#define MDONAKLJPHM_TICK_OFFSET UNITYSDK_OFFSET(0xC166010)

inline static constexpr unsigned int MDONAKLJPHM_TypeDefinitionIndex = 54032;

	class MDONAKLJPHM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::Il2CppArray<::CACNLLMKCPD>* KAGPCNICGGG; // 0x20
		::RPG::Client::FiveDimGameInstance* HOADGOKCPDG; // 0x28
		::System::String* AFOPPLHPNJG; // 0x30
		::RPG::Client::FiveDimTrainModeDisplayInfos* OGHHCMNOHPN; // 0x38
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x40
		::LNCKNPPCBDN* OFKGLJOAMLD; // 0x48
		::System::Single BPGPEHBJDHP; // 0x50
		::System::Int16 DNCNBPLAOBM; // 0x54
		::System::Int16 JJKAKOGGDBO; // 0x56
		static ::PNFHKPJGEHM** StaticGet_HOIJHGMGPKK()
		{
			return (::PNFHKPJGEHM**)UnitySDK::FromName("", "MDONAKLJPHM")->GetStaticField(0x71870);
		}

		// static const ::System::Object JHMIABDLKNJ; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LNCKNPPCBDN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LNCKNPPCBDN*))((::PBYTE)hIl2Cpp + MDONAKLJPHM_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDONAKLJPHM_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDONAKLJPHM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDONAKLJPHM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDONAKLJPHM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MDONAKLJPHM_TICK_OFFSET))(this, a1);
		}

		::System::Void MDDEKBBMDEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDONAKLJPHM_MDDEKBBMDEK_OFFSET))(this);
		}

		::System::Void LAKCOCOAHEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDONAKLJPHM_LAKCOCOAHEP_OFFSET))(this);
		}

		::System::Void OFGJJEONDMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDONAKLJPHM_OFGJJEONDMO_OFFSET))(this);
		}

	};
