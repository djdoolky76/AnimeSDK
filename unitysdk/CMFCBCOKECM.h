#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class ActivityGuessTheSilhouetteData; }
namespace RPG::GameCore { class ActivityGuessSilhouetteRow; }
namespace RPG::GameCore { class GuessTheSilhouetteResult; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CMFCBCOKECM_BHEIANKOOPN_OFFSET UNITYSDK_OFFSET(0xDA28070)
#define CMFCBCOKECM_CTOR_OFFSET UNITYSDK_OFFSET(0xDA27C60)
#define CMFCBCOKECM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA27C70)
#define CMFCBCOKECM_HLKALGHOENC_OFFSET UNITYSDK_OFFSET(0xDA281E0)
#define CMFCBCOKECM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDA27D30)
#define CMFCBCOKECM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDA28130)
#define CMFCBCOKECM_TICK_OFFSET UNITYSDK_OFFSET(0xDA28180)

inline static constexpr unsigned int CMFCBCOKECM_TypeDefinitionIndex = 52922;

	class CMFCBCOKECM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ActivityGuessSilhouetteRow* OKDEHPPEGBO; // 0x18
		::RPG::GameCore::GuessTheSilhouetteResult* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::RPG::Client::ActivityGuessTheSilhouetteData* FHKOBFOLJKM; // 0x30
		// static const ::System::String* BPFHDDEINLE; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GuessTheSilhouetteResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GuessTheSilhouetteResult*))((::PBYTE)hIl2Cpp + CMFCBCOKECM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFCBCOKECM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFCBCOKECM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFCBCOKECM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CMFCBCOKECM_TICK_OFFSET))(this, a1);
		}

		::System::Void BHEIANKOOPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFCBCOKECM_BHEIANKOOPN_OFFSET))(this);
		}

		::System::Void HLKALGHOENC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CMFCBCOKECM_HLKALGHOENC_OFFSET))(this, a1);
		}

	};
