#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCLPKMIIANI.h"
class BGMNPFHKJPG;
class CAANOKAHGIM;
class GCEBGLLMGPE;
class IAJLHKIHBFB;
class JBACCAGFHON;
class JEIFBCPKIDA;
class KAHPJJFFMHK;
namespace RPG::Client { class CakeRacePVEGameManager; }
namespace UnityEngine { class Coroutine; }

#define KMIDLAEIFEA_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xB5522C0)
#define KMIDLAEIFEA_CTOR_OFFSET UNITYSDK_OFFSET(0xB5523E0)
#define KMIDLAEIFEA_DALKINCKLJJ_OFFSET UNITYSDK_OFFSET(0xB552210)
#define KMIDLAEIFEA_DNJDHCCOMKL_OFFSET UNITYSDK_OFFSET(0xB551780)
#define KMIDLAEIFEA_DNOPLMGEEJE_OFFSET UNITYSDK_OFFSET(0xB552280)
#define KMIDLAEIFEA_ECICBKAOBIK_OFFSET UNITYSDK_OFFSET(0xB551C90)
#define KMIDLAEIFEA_GET_FACADE_OFFSET UNITYSDK_OFFSET(0xB5523C0)
#define KMIDLAEIFEA_GIAKKINGHOG_OFFSET UNITYSDK_OFFSET(0xB551870)
#define KMIDLAEIFEA_KALBBIFDGKG_OFFSET UNITYSDK_OFFSET(0xB5520B0)
#define KMIDLAEIFEA_LCNFJDLJLEK_OFFSET UNITYSDK_OFFSET(0xB551DD0)
#define KMIDLAEIFEA_LHCGHJOJEBJ_OFFSET UNITYSDK_OFFSET(0xB5516A0)
#define KMIDLAEIFEA_NGJJLNMPEMP_OFFSET UNITYSDK_OFFSET(0xB552340)
#define KMIDLAEIFEA_PHJFCHCPFBL_OFFSET UNITYSDK_OFFSET(0xB552080)
#define KMIDLAEIFEA_SET_FACADE_OFFSET UNITYSDK_OFFSET(0xB5523D0)
#define KMIDLAEIFEA__INITGAMEMODE_B__6_0_OFFSET UNITYSDK_OFFSET(0xB552460)
#define KMIDLAEIFEA__ONCLEAR_OFFSET UNITYSDK_OFFSET(0xB551D80)
#define KMIDLAEIFEA__ONINIT_OFFSET UNITYSDK_OFFSET(0xB551800)
#define KMIDLAEIFEA__ONSTART_OFFSET UNITYSDK_OFFSET(0xB551910)
#define KMIDLAEIFEA__ONSTOP_OFFSET UNITYSDK_OFFSET(0xB551C40)
#define KMIDLAEIFEA__ONTICK_OFFSET UNITYSDK_OFFSET(0xB551950)

inline static constexpr unsigned int KMIDLAEIFEA_TypeDefinitionIndex = 60307;

	class KMIDLAEIFEA : public ::HCLPKMIIANI
	{
	public:
		::UnityEngine::Coroutine* IADLACNHDCM; // 0x78
		::BGMNPFHKJPG* NNKCOIFDKMD; // 0x80
		::CAANOKAHGIM* _Facade_k__BackingField; // 0x88
		::JBACCAGFHON* PDENFEFCAGN; // 0x90
		::KAHPJJFFMHK* JEIALFDCPND; // 0x98
		// static const ::System::Object FDKDMKDEONI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIDLAEIFEA_CTOR_OFFSET))(this);
		}

		::GCEBGLLMGPE* LHCGHJOJEBJ(::System::Int32 a1)
		{
			return ((::GCEBGLLMGPE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KMIDLAEIFEA_LHCGHJOJEBJ_OFFSET))(this, a1);
		}

		::System::Void _OnInit(::IAJLHKIHBFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAJLHKIHBFB*))((::PBYTE)hIl2Cpp + KMIDLAEIFEA__ONINIT_OFFSET))(this, a1);
		}

		::System::Void _OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIDLAEIFEA__ONSTART_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KMIDLAEIFEA__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIDLAEIFEA__ONSTOP_OFFSET))(this);
		}

		::System::Void _OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIDLAEIFEA__ONCLEAR_OFFSET))(this);
		}

		::System::Void LCNFJDLJLEK(::BGMNPFHKJPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGMNPFHKJPG*))((::PBYTE)hIl2Cpp + KMIDLAEIFEA_LCNFJDLJLEK_OFFSET))(this, a1);
		}

		::System::Void KALBBIFDGKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIDLAEIFEA_KALBBIFDGKG_OFFSET))(this);
		}

		::System::Void DALKINCKLJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIDLAEIFEA_DALKINCKLJJ_OFFSET))(this);
		}

		::System::Void DNOPLMGEEJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIDLAEIFEA_DNOPLMGEEJE_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIDLAEIFEA_AHEEAFKFALM_OFFSET))(this);
		}

		::System::Void GIAKKINGHOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIDLAEIFEA_GIAKKINGHOG_OFFSET))(this);
		}

		::System::Void ECICBKAOBIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIDLAEIFEA_ECICBKAOBIK_OFFSET))(this);
		}

		::System::Boolean NGJJLNMPEMP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIDLAEIFEA_NGJJLNMPEMP_OFFSET))(this);
		}

		::CAANOKAHGIM* get_Facade()
		{
			return ((::CAANOKAHGIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIDLAEIFEA_GET_FACADE_OFFSET))(this);
		}

		::System::Void set_Facade(::CAANOKAHGIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAANOKAHGIM*))((::PBYTE)hIl2Cpp + KMIDLAEIFEA_SET_FACADE_OFFSET))(this, a1);
		}

		::JEIFBCPKIDA* PHJFCHCPFBL()
		{
			return ((::JEIFBCPKIDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIDLAEIFEA_PHJFCHCPFBL_OFFSET))(this);
		}

		::RPG::Client::CakeRacePVEGameManager* DNJDHCCOMKL()
		{
			return ((::RPG::Client::CakeRacePVEGameManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIDLAEIFEA_DNJDHCCOMKL_OFFSET))(this);
		}

		::System::Void _InitGameMode_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIDLAEIFEA__INITGAMEMODE_B__6_0_OFFSET))(this);
		}

	};
