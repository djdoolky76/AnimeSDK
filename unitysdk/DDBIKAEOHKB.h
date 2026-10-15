#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinKeywordEventType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KBHPNKKKAAL.h"
class GHEBHGIJDMC;
class MKPPJMBJLMO;
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DDBIKAEOHKB_ABFDIFLKGDF_OFFSET UNITYSDK_OFFSET(0xE25A9E0)
#define DDBIKAEOHKB_AGGMLPPKKJD_OFFSET UNITYSDK_OFFSET(0xE25AB70)
#define DDBIKAEOHKB_BKEOHOJINBP_OFFSET UNITYSDK_OFFSET(0xE259AE0)
#define DDBIKAEOHKB_CCTOR_OFFSET UNITYSDK_OFFSET(0xE25AFA0)
#define DDBIKAEOHKB_CDHEIDBGFLK_OFFSET UNITYSDK_OFFSET(0xE2597F0)
#define DDBIKAEOHKB_CTOR_OFFSET UNITYSDK_OFFSET(0xE25ADB0)
#define DDBIKAEOHKB_DHGCADHCDLK_OFFSET UNITYSDK_OFFSET(0xE25AA90)
#define DDBIKAEOHKB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE25A620)
#define DDBIKAEOHKB_HNLCPNDIEJF_OFFSET UNITYSDK_OFFSET(0xE25A7C0)
#define DDBIKAEOHKB_LJILNJJJPHI_OFFSET UNITYSDK_OFFSET(0xE259860)
#define DDBIKAEOHKB_OFELLAFMLAH_OFFSET UNITYSDK_OFFSET(0xE25A490)

	class DDBIKAEOHKB : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateRinKeywordEventType, ::MKPPJMBJLMO*>* NEEFLIFLMPG; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateRinKeywordEventType, ::System::Type*>* KMJECEAIGLB; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::GHEBHGIJDMC*>* LCOCCIKDGFH; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateRinKeywordEventType, ::GHEBHGIJDMC*>* JDFODDEKBHO; // 0x28
		::System::Boolean HMLBBCPEGAH; // 0x30
		static ::Il2CppArray<::System::Object*>** StaticGet_EEPHDFEPKLH()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("", "DDBIKAEOHKB")->GetStaticField(0x5FB70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBIKAEOHKB_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDBIKAEOHKB_CCTOR_OFFSET))();
		}

		::System::Void CDHEIDBGFLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBIKAEOHKB_CDHEIDBGFLK_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBIKAEOHKB_DISPOSE_OFFSET))(this);
		}

		::System::Void LJILNJJJPHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBIKAEOHKB_LJILNJJJPHI_OFFSET))(this);
		}

		::System::Void BKEOHOJINBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBIKAEOHKB_BKEOHOJINBP_OFFSET))(this);
		}

		::System::Void OFELLAFMLAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBIKAEOHKB_OFELLAFMLAH_OFFSET))(this);
		}

		::RPG::GameCore::FateRinKeywordEventType HNLCPNDIEJF(::System::Type* a1)
		{
			return ((::RPG::GameCore::FateRinKeywordEventType(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + DDBIKAEOHKB_HNLCPNDIEJF_OFFSET))(this, a1);
		}

		::GHEBHGIJDMC* ABFDIFLKGDF(::System::UInt32 a1)
		{
			return ((::GHEBHGIJDMC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DDBIKAEOHKB_ABFDIFLKGDF_OFFSET))(this, a1);
		}

		::GHEBHGIJDMC* DHGCADHCDLK(::RPG::GameCore::FateRinKeywordEventType a1)
		{
			return ((::GHEBHGIJDMC*(*)(::PVOID, ::RPG::GameCore::FateRinKeywordEventType))((::PBYTE)hIl2Cpp + DDBIKAEOHKB_DHGCADHCDLK_OFFSET))(this, a1);
		}

		::System::Boolean AGGMLPPKKJD(::GHEBHGIJDMC* a1, ::RPG::GameCore::FateRinKeywordEventType a2, ::KBHPNKKKAAL a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHEBHGIJDMC*, ::RPG::GameCore::FateRinKeywordEventType, ::KBHPNKKKAAL))((::PBYTE)hIl2Cpp + DDBIKAEOHKB_AGGMLPPKKJD_OFFSET))(this, a1, a2, a3);
		}

	};
