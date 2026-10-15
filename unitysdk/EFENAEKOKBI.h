#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJDJIIKGLFD;
class ECPGBDINBAB;
class JBACCAGFHON;
namespace Cinemachine { class CinemachineDollyCart; }
namespace Cinemachine { class CinemachineSmoothPath; }
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceFieldMonoView; }

#define EFENAEKOKBI_AAJDHMOLFDN_OFFSET UNITYSDK_OFFSET(0x13A4B290)
#define EFENAEKOKBI_CDFBCKKBHED_OFFSET UNITYSDK_OFFSET(0x13A4B660)
#define EFENAEKOKBI_CMGEPNMKOIH_OFFSET UNITYSDK_OFFSET(0x13A4AB50)
#define EFENAEKOKBI_CTOR_OFFSET UNITYSDK_OFFSET(0x13A4AE20)
#define EFENAEKOKBI_ENTER_OFFSET UNITYSDK_OFFSET(0x13A4AE30)
#define EFENAEKOKBI_EXIT_OFFSET UNITYSDK_OFFSET(0x13A4B880)
#define EFENAEKOKBI_GET_STATEMACHINE_OFFSET UNITYSDK_OFFSET(0x13A4AB90)
#define EFENAEKOKBI_JJGCHFLLIAO_OFFSET UNITYSDK_OFFSET(0x13A4ABA0)
#define EFENAEKOKBI_KELPLFPCFIO_OFFSET UNITYSDK_OFFSET(0x13A4AC80)
#define EFENAEKOKBI_KMNPFNFDJDA_OFFSET UNITYSDK_OFFSET(0x13A4AD80)
#define EFENAEKOKBI_MIILPMKKKFO_OFFSET UNITYSDK_OFFSET(0x13A4ABF0)
#define EFENAEKOKBI_NGMILBPIGEJ_OFFSET UNITYSDK_OFFSET(0x13A4ACE0)
#define EFENAEKOKBI_OFAPGKBINBG_OFFSET UNITYSDK_OFFSET(0x13A4AFC0)
#define EFENAEKOKBI_TICK_OFFSET UNITYSDK_OFFSET(0x13A4AEF0)

inline static constexpr unsigned int EFENAEKOKBI_TypeDefinitionIndex = 78012;

	class EFENAEKOKBI : public ::System::Object
	{
	public:
		::AJDJIIKGLFD* _StateMachine_k__BackingField; // 0x10
		::System::Single ILBHOPAMGNH; // 0x18
		::System::Single CDDGIJEEJPG; // 0x1C
		::System::Single FGEJLCPOOHO; // 0x20
		// static const ::System::Object IJMMIGBFMMI; // 0x0
		::System::Void _ctor(::AJDJIIKGLFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJDJIIKGLFD*))((::PBYTE)hIl2Cpp + EFENAEKOKBI_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean CMGEPNMKOIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFENAEKOKBI_CMGEPNMKOIH_OFFSET))(this);
		}

		::AJDJIIKGLFD* get_StateMachine()
		{
			return ((::AJDJIIKGLFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFENAEKOKBI_GET_STATEMACHINE_OFFSET))(this);
		}

		::JBACCAGFHON* JJGCHFLLIAO()
		{
			return ((::JBACCAGFHON*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFENAEKOKBI_JJGCHFLLIAO_OFFSET))(this);
		}

		::ECPGBDINBAB* MIILPMKKKFO()
		{
			return ((::ECPGBDINBAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFENAEKOKBI_MIILPMKKKFO_OFFSET))(this);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceFieldMonoView* KELPLFPCFIO()
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceFieldMonoView*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFENAEKOKBI_KELPLFPCFIO_OFFSET))(this);
		}

		::Cinemachine::CinemachineSmoothPath* NGMILBPIGEJ()
		{
			return ((::Cinemachine::CinemachineSmoothPath*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFENAEKOKBI_NGMILBPIGEJ_OFFSET))(this);
		}

		::Cinemachine::CinemachineDollyCart* KMNPFNFDJDA()
		{
			return ((::Cinemachine::CinemachineDollyCart*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFENAEKOKBI_KMNPFNFDJDA_OFFSET))(this);
		}

		::System::Void Enter(::ECPGBDINBAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECPGBDINBAB*))((::PBYTE)hIl2Cpp + EFENAEKOKBI_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::ECPGBDINBAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECPGBDINBAB*))((::PBYTE)hIl2Cpp + EFENAEKOKBI_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFENAEKOKBI_EXIT_OFFSET))(this);
		}

		::System::Void AAJDHMOLFDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFENAEKOKBI_AAJDHMOLFDN_OFFSET))(this);
		}

		::System::Void OFAPGKBINBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFENAEKOKBI_OFAPGKBINBG_OFFSET))(this);
		}

		::System::Void CDFBCKKBHED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFENAEKOKBI_CDFBCKKBHED_OFFSET))(this);
		}

	};
