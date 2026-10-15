#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class HPBar; }
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class Animation; }

#define OIKIOEIKOHK_BKGMLOKJGAJ_OFFSET UNITYSDK_OFFSET(0xBE991D0)
#define OIKIOEIKOHK_CTOR_OFFSET UNITYSDK_OFFSET(0xBE99270)
#define OIKIOEIKOHK_IAPPMMDOKHB_OFFSET UNITYSDK_OFFSET(0xBE98F90)
#define OIKIOEIKOHK_IPGBNMPMIPL_OFFSET UNITYSDK_OFFSET(0xBE99070)
#define OIKIOEIKOHK_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0xBE98F40)
#define OIKIOEIKOHK__ONBIND_OFFSET UNITYSDK_OFFSET(0xBE98E90)

inline static constexpr unsigned int OIKIOEIKOHK_TypeDefinitionIndex = 71567;

	class OIKIOEIKOHK : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::HPBar* GLNBHDNJMCM; // 0x60
		::RPG::Client::LocalizedText* NGABGMPJNGF; // 0x68
		::UnityEngine::Animation* NNIKEDMHMFL; // 0x70
		// static const ::System::String* LCCHEFGCACP; // 0x0
		// static const ::System::String* ACKFODOODDA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKIOEIKOHK_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKIOEIKOHK__ONBIND_OFFSET))(this);
		}

		::System::Void NHPDCPKMNAM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OIKIOEIKOHK_NHPDCPKMNAM_OFFSET))(this, a1);
		}

		::System::Void IAPPMMDOKHB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OIKIOEIKOHK_IAPPMMDOKHB_OFFSET))(this, a1);
		}

		::System::Void IPGBNMPMIPL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OIKIOEIKOHK_IPGBNMPMIPL_OFFSET))(this, a1);
		}

		::System::Void BKGMLOKJGAJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OIKIOEIKOHK_BKGMLOKJGAJ_OFFSET))(this, a1);
		}

	};
