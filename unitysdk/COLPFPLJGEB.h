#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRacePerformenceAudioTagType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/Vector3.h"
class COLPFPLJGEB;
class IFEABBJBIGK;
class JBACCAGFHON;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceTalkBubbleMonoView; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define COLPFPLJGEB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xDCBC910)
#define COLPFPLJGEB_CTOR_OFFSET UNITYSDK_OFFSET(0xDCBC980)
#define COLPFPLJGEB_DDDAAFNNBCG_OFFSET UNITYSDK_OFFSET(0xDCBE380)
#define COLPFPLJGEB_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xDCBC860)
#define COLPFPLJGEB_HFFHDIHDMPP_OFFSET UNITYSDK_OFFSET(0xDCBD550)
#define COLPFPLJGEB_IDOOPCGIJBB_OFFSET UNITYSDK_OFFSET(0xDCBED70)
#define COLPFPLJGEB_IGCFDJGKOEF_OFFSET UNITYSDK_OFFSET(0xDCBD7B0)
#define COLPFPLJGEB_IPOPKBNCDDN_OFFSET UNITYSDK_OFFSET(0xDCBE950)
#define COLPFPLJGEB_JGMBJIKPNOD_OFFSET UNITYSDK_OFFSET(0xDCBC9E0)
#define COLPFPLJGEB_MLIIJANOECA_OFFSET UNITYSDK_OFFSET(0xDCBDE60)
#define COLPFPLJGEB_MNJCMELCNEI_OFFSET UNITYSDK_OFFSET(0xDCBC990)

inline static constexpr unsigned int COLPFPLJGEB_TypeDefinitionIndex = 76428;

	class COLPFPLJGEB : public ::System::Object
	{
	public:
		::JBACCAGFHON* PDENFEFCAGN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLPFPLJGEB_CTOR_OFFSET))(this);
		}

		static ::COLPFPLJGEB* GGBLHEHJBDO()
		{
			return ((::COLPFPLJGEB*(*)())((::PBYTE)hIl2Cpp + COLPFPLJGEB_GGBLHEHJBDO_OFFSET))();
		}

		static ::COLPFPLJGEB* BPLPBPMEODA()
		{
			return ((::COLPFPLJGEB*(*)())((::PBYTE)hIl2Cpp + COLPFPLJGEB_BPLPBPMEODA_OFFSET))();
		}

		::System::Void MNJCMELCNEI(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + COLPFPLJGEB_MNJCMELCNEI_OFFSET))(this, a1);
		}

		::IFEABBJBIGK* JGMBJIKPNOD(::System::UInt64 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + COLPFPLJGEB_JGMBJIKPNOD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single HFFHDIHDMPP(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COLPFPLJGEB_HFFHDIHDMPP_OFFSET))(this, a1, a2);
		}

		::IFEABBJBIGK* IGCFDJGKOEF(::System::UInt64 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COLPFPLJGEB_IGCFDJGKOEF_OFFSET))(this, a1, a2, a3);
		}

		::IFEABBJBIGK* MLIIJANOECA(::System::UInt64 a1, ::System::UInt32 a2)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + COLPFPLJGEB_MLIIJANOECA_OFFSET))(this, a1, a2);
		}

		::IFEABBJBIGK* DDDAAFNNBCG(::System::UInt64 a1, ::System::UInt32 a2)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + COLPFPLJGEB_DDDAAFNNBCG_OFFSET))(this, a1, a2);
		}

		::IFEABBJBIGK* IPOPKBNCDDN(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* a1, ::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView* a2, ::RPG::Client::TextID a3, ::System::String* a4, ::RPG::GameCore::CakeRacePerformenceAudioTagType a5, ::System::Single a6)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*, ::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView*, ::RPG::Client::TextID, ::System::String*, ::RPG::GameCore::CakeRacePerformenceAudioTagType, ::System::Single))((::PBYTE)hIl2Cpp + COLPFPLJGEB_IPOPKBNCDDN_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::IFEABBJBIGK* IDOOPCGIJBB(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* a1, ::RPG::Client::TextID a2, ::System::Single a3, ::System::String* a4, ::RPG::GameCore::CakeRacePerformenceAudioTagType a5)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*, ::RPG::Client::TextID, ::System::Single, ::System::String*, ::RPG::GameCore::CakeRacePerformenceAudioTagType))((::PBYTE)hIl2Cpp + COLPFPLJGEB_IDOOPCGIJBB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
