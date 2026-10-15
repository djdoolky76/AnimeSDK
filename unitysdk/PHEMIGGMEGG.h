#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FGIAPIJFCFN;
class GELIALJDFBL;
class KLKMCNOECAL;
namespace RPG::GameCore { class PlayTimelinePrefab; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define PHEMIGGMEGG_CNBHHPPDIJN_OFFSET UNITYSDK_OFFSET(0xC23FCE0)
#define PHEMIGGMEGG_CPFCGAALHJG_OFFSET UNITYSDK_OFFSET(0xC240BD0)
#define PHEMIGGMEGG_CTOR_OFFSET UNITYSDK_OFFSET(0xC23F210)
#define PHEMIGGMEGG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC240910)
#define PHEMIGGMEGG_DJNMJEEJGOG_OFFSET UNITYSDK_OFFSET(0xC240E40)
#define PHEMIGGMEGG_EFMADDPJKAM_OFFSET UNITYSDK_OFFSET(0xC23F5F0)
#define PHEMIGGMEGG_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xC240A70)
#define PHEMIGGMEGG_HMGALEMHPOP_OFFSET UNITYSDK_OFFSET(0xC240AF0)
#define PHEMIGGMEGG_JBLHKLPEGPK_OFFSET UNITYSDK_OFFSET(0xC23FA50)
#define PHEMIGGMEGG_JGBGHAGJPPF_OFFSET UNITYSDK_OFFSET(0xC240050)
#define PHEMIGGMEGG_LNBNMDKJBOH_OFFSET UNITYSDK_OFFSET(0xC23F9C0)
#define PHEMIGGMEGG_MHHOKMGDAEO_OFFSET UNITYSDK_OFFSET(0xC23FC50)
#define PHEMIGGMEGG_NLMNGKGADBB_OFFSET UNITYSDK_OFFSET(0xC2402D0)
#define PHEMIGGMEGG_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xC2408B0)
#define PHEMIGGMEGG_ONSKIP_OFFSET UNITYSDK_OFFSET(0xC240780)
#define PHEMIGGMEGG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC23F230)
#define PHEMIGGMEGG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC240A20)
#define PHEMIGGMEGG_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0xC240A80)
#define PHEMIGGMEGG_TICK_OFFSET UNITYSDK_OFFSET(0xC23FFD0)

inline static constexpr unsigned int PHEMIGGMEGG_TypeDefinitionIndex = 53104;

	class PHEMIGGMEGG : public ::GELIALJDFBL
	{
	public:
		::KLKMCNOECAL* CECMCLKCIFD; // 0x18
		::RPG::GameCore::PlayTimelinePrefab* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::FGIAPIJFCFN* CPIIOIPAAKK; // 0x30
		::GELIALJDFBL* CJHJNLGOJLA; // 0x38
		::System::Single NCEFBJLLLLD; // 0x40
		::System::Boolean OOEEIFJPGLB; // 0x44
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayTimelinePrefab* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayTimelinePrefab*))((::PBYTE)hIl2Cpp + PHEMIGGMEGG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEMIGGMEGG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PHEMIGGMEGG_TICK_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEMIGGMEGG_ONSKIP_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PHEMIGGMEGG_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEMIGGMEGG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEMIGGMEGG_ONTASKRESET_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEMIGGMEGG_GET_FORCESKIP_OFFSET))(this);
		}

		::GELIALJDFBL* SetNextTask(::GELIALJDFBL* a1)
		{
			return ((::GELIALJDFBL*(*)(::PVOID, ::GELIALJDFBL*))((::PBYTE)hIl2Cpp + PHEMIGGMEGG_SETNEXTTASK_OFFSET))(this, a1);
		}

		::System::Void JBLHKLPEGPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEMIGGMEGG_JBLHKLPEGPK_OFFSET))(this);
		}

		::System::Void MHHOKMGDAEO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PHEMIGGMEGG_MHHOKMGDAEO_OFFSET))(this, a1);
		}

		::System::Void NLMNGKGADBB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PHEMIGGMEGG_NLMNGKGADBB_OFFSET))(this, a1);
		}

		::System::Void JGBGHAGJPPF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PHEMIGGMEGG_JGBGHAGJPPF_OFFSET))(this, a1);
		}

		::System::Void HMGALEMHPOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEMIGGMEGG_HMGALEMHPOP_OFFSET))(this);
		}

		::System::Void CNBHHPPDIJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEMIGGMEGG_CNBHHPPDIJN_OFFSET))(this);
		}

		::System::Void CPFCGAALHJG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PHEMIGGMEGG_CPFCGAALHJG_OFFSET))(this, a1);
		}

		::System::Void DJNMJEEJGOG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PHEMIGGMEGG_DJNMJEEJGOG_OFFSET))(this, a1);
		}

		::System::Void EFMADDPJKAM(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + PHEMIGGMEGG_EFMADDPJKAM_OFFSET))(this, a1, a2);
		}

		::System::Boolean LNBNMDKJBOH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEMIGGMEGG_LNBNMDKJBOH_OFFSET))(this);
		}

	};
