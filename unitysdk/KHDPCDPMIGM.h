#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGCPAMNLCGN;
class FLHEIJDHPKB;
class JBACCAGFHON;
class KHDPCDPMIGM;
class KOHMAKDCHPP;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceTrapMonoView; }
namespace System { class Object; }
namespace UnityEngine { class Animator; }

#define KHDPCDPMIGM_ACNLKBMLABP_OFFSET UNITYSDK_OFFSET(0xB3FBBD0)
#define KHDPCDPMIGM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB3F9830)
#define KHDPCDPMIGM_CCTOR_OFFSET UNITYSDK_OFFSET(0xB3FC1F0)
#define KHDPCDPMIGM_CONFIAMBBBC_OFFSET UNITYSDK_OFFSET(0xB3FA010)
#define KHDPCDPMIGM_CTOR_OFFSET UNITYSDK_OFFSET(0xB3F98A0)
#define KHDPCDPMIGM_DKAJFNKOKMD_OFFSET UNITYSDK_OFFSET(0xB3FAA90)
#define KHDPCDPMIGM_EFKCGCHEMEB_OFFSET UNITYSDK_OFFSET(0xB3FA170)
#define KHDPCDPMIGM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB3F9990)
#define KHDPCDPMIGM_GBIBFAJHIID_OFFSET UNITYSDK_OFFSET(0xB3FAB50)
#define KHDPCDPMIGM_IHGPOKKKBGM_OFFSET UNITYSDK_OFFSET(0xB3FB790)
#define KHDPCDPMIGM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB3F98B0)
#define KHDPCDPMIGM_MMMCJCCLNIG_OFFSET UNITYSDK_OFFSET(0xB3FB160)
#define KHDPCDPMIGM_OCHHCEPLMOP_OFFSET UNITYSDK_OFFSET(0xB3FBCF0)
#define KHDPCDPMIGM_OHOGICBBLAD_OFFSET UNITYSDK_OFFSET(0xB3FBB40)
#define KHDPCDPMIGM_PAHHKGIJONL_OFFSET UNITYSDK_OFFSET(0xB3FB700)
#define KHDPCDPMIGM_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB3FB6C0)

inline static constexpr unsigned int KHDPCDPMIGM_TypeDefinitionIndex = 78133;

	class KHDPCDPMIGM : public ::System::Object
	{
	public:
		::JBACCAGFHON* PDENFEFCAGN; // 0x10
		static ::System::Int32* StaticGet_NNKBAMMOHCN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KHDPCDPMIGM")->GetStaticField(0x10F40);
		}

		static ::System::Int32* StaticGet_EIMHPHBLGEM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KHDPCDPMIGM")->GetStaticField(0x10F44);
		}

		static ::System::Int32* StaticGet_COLGOEEHJPG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KHDPCDPMIGM")->GetStaticField(0x10F48);
		}

		::System::Void _ctor(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + KHDPCDPMIGM_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHDPCDPMIGM_CCTOR_OFFSET))();
		}

		static ::KHDPCDPMIGM* BPLPBPMEODA(::JBACCAGFHON* a1)
		{
			return ((::KHDPCDPMIGM*(*)(::JBACCAGFHON*))((::PBYTE)hIl2Cpp + KHDPCDPMIGM_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDPCDPMIGM_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDPCDPMIGM_EXECUTE_OFFSET))(this);
		}

		::System::Void CONFIAMBBBC(::FLHEIJDHPKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLHEIJDHPKB*))((::PBYTE)hIl2Cpp + KHDPCDPMIGM_CONFIAMBBBC_OFFSET))(this, a1);
		}

		::System::Void MMMCJCCLNIG(::KOHMAKDCHPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOHMAKDCHPP*))((::PBYTE)hIl2Cpp + KHDPCDPMIGM_MMMCJCCLNIG_OFFSET))(this, a1);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDPCDPMIGM_TEARDOWN_OFFSET))(this);
		}

		::System::Void PAHHKGIJONL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KHDPCDPMIGM_PAHHKGIJONL_OFFSET))(this, a1);
		}

		::System::Void IHGPOKKKBGM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KHDPCDPMIGM_IHGPOKKKBGM_OFFSET))(this, a1);
		}

		::System::Void EFKCGCHEMEB(::AGCPAMNLCGN* a1, ::RPG::Client::LittleGame::CakeRace::CakeRaceTrapMonoView* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::AGCPAMNLCGN*, ::RPG::Client::LittleGame::CakeRace::CakeRaceTrapMonoView*, ::System::Single))((::PBYTE)hIl2Cpp + KHDPCDPMIGM_EFKCGCHEMEB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DKAJFNKOKMD(::AGCPAMNLCGN* a1, ::RPG::Client::LittleGame::CakeRace::CakeRaceTrapMonoView* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AGCPAMNLCGN*, ::RPG::Client::LittleGame::CakeRace::CakeRaceTrapMonoView*))((::PBYTE)hIl2Cpp + KHDPCDPMIGM_DKAJFNKOKMD_OFFSET))(this, a1, a2);
		}

		::System::Void ACNLKBMLABP(::UnityEngine::Animator* a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + KHDPCDPMIGM_ACNLKBMLABP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GBIBFAJHIID(::AGCPAMNLCGN* a1, ::RPG::Client::LittleGame::CakeRace::CakeRaceTrapMonoView* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::AGCPAMNLCGN*, ::RPG::Client::LittleGame::CakeRace::CakeRaceTrapMonoView*, ::System::Single))((::PBYTE)hIl2Cpp + KHDPCDPMIGM_GBIBFAJHIID_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OCHHCEPLMOP(::AGCPAMNLCGN* a1, ::RPG::Client::LittleGame::CakeRace::CakeRaceTrapMonoView* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AGCPAMNLCGN*, ::RPG::Client::LittleGame::CakeRace::CakeRaceTrapMonoView*))((::PBYTE)hIl2Cpp + KHDPCDPMIGM_OCHHCEPLMOP_OFFSET))(this, a1, a2);
		}

		::System::Void OHOGICBBLAD(::UnityEngine::Animator* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Single))((::PBYTE)hIl2Cpp + KHDPCDPMIGM_OHOGICBBLAD_OFFSET))(this, a1, a2);
		}

	};
