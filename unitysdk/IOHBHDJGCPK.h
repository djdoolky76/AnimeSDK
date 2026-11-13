#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMOGJEDKANE;
class BACPDKLFMAF;
class CIDKLLMAIGP;
class FFOAFCPMFCA;
class HMKNDJECFJF;
namespace RPG::Client::ComicDessert::Service { class ComicDessertWindowService; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace System { class String; }

#define IOHBHDJGCPK_BKKAGOAIBNG_OFFSET UNITYSDK_OFFSET(0x1A604B10)
#define IOHBHDJGCPK_BNMLCINFDCB_OFFSET UNITYSDK_OFFSET(0x1A605900)
#define IOHBHDJGCPK_CNKDEBMHLIE_OFFSET UNITYSDK_OFFSET(0x1A604B90)
#define IOHBHDJGCPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A604AF0)
#define IOHBHDJGCPK_DPFOPKIHKNO_OFFSET UNITYSDK_OFFSET(0x1A604F20)
#define IOHBHDJGCPK_FMJJKDFMHLO_OFFSET UNITYSDK_OFFSET(0x1A605520)
#define IOHBHDJGCPK_GBOENALBIIC_OFFSET UNITYSDK_OFFSET(0x1A605B30)
#define IOHBHDJGCPK_GLDHDEFHPPD_OFFSET UNITYSDK_OFFSET(0x1A605640)
#define IOHBHDJGCPK_MHNDKHBNJHJ_OFFSET UNITYSDK_OFFSET(0x1A604FA0)
#define IOHBHDJGCPK_NHLDCMICPMO_OFFSET UNITYSDK_OFFSET(0x1A605A10)
#define IOHBHDJGCPK_NIPMDPCPCMK_OFFSET UNITYSDK_OFFSET(0x1A605310)

inline static constexpr unsigned int IOHBHDJGCPK_TypeDefinitionIndex = 77125;

	class IOHBHDJGCPK : public ::System::Object
	{
	public:
		::FFOAFCPMFCA* GCFHKJJNIFH; // 0x10
		::RPG::Client::ComicDessert::Service::ComicDessertWindowService* MPFFGNPIDOA; // 0x18
		::BACPDKLFMAF* DJLOFBEABDA; // 0x20
		::HMKNDJECFJF* MJHHLOPFDNK; // 0x28
		::AMOGJEDKANE* HCKIBEPNFOE; // 0x30
		// static const ::System::String* CELGABDKGCI; // 0x0
		::System::Void _ctor(::HMKNDJECFJF* a1, ::BACPDKLFMAF* a2, ::RPG::Client::ComicDessert::Service::ComicDessertWindowService* a3, ::FFOAFCPMFCA* a4, ::AMOGJEDKANE* a5)
		{
			return ((::System::Void(*)(::PVOID, ::HMKNDJECFJF*, ::BACPDKLFMAF*, ::RPG::Client::ComicDessert::Service::ComicDessertWindowService*, ::FFOAFCPMFCA*, ::AMOGJEDKANE*))((::PBYTE)hIl2Cpp + IOHBHDJGCPK_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void BKKAGOAIBNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHBHDJGCPK_BKKAGOAIBNG_OFFSET))(this);
		}

		::System::Void CNKDEBMHLIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHBHDJGCPK_CNKDEBMHLIE_OFFSET))(this);
		}

		::System::Void MHNDKHBNJHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHBHDJGCPK_MHNDKHBNJHJ_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::CIDKLLMAIGP*>* NIPMDPCPCMK(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::CIDKLLMAIGP*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IOHBHDJGCPK_NIPMDPCPCMK_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* GLDHDEFHPPD(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + IOHBHDJGCPK_GLDHDEFHPPD_OFFSET))(this, a1, a2);
		}

		::System::Void NHLDCMICPMO(::System::UInt32 a1, ::RPG::GameCore::LittleGameLevelConfig* a2, ::System::Boolean a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LittleGameLevelConfig*, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + IOHBHDJGCPK_NHLDCMICPMO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GBOENALBIIC(::System::UInt32 a1, ::RPG::GameCore::LittleGameLevelConfig* a2, ::System::Boolean a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LittleGameLevelConfig*, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + IOHBHDJGCPK_GBOENALBIIC_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::RPG::Client::Promises::IPromise_1<::CIDKLLMAIGP*>* FMJJKDFMHLO()
		{
			return ((::RPG::Client::Promises::IPromise_1<::CIDKLLMAIGP*>*(*)())((::PBYTE)hIl2Cpp + IOHBHDJGCPK_FMJJKDFMHLO_OFFSET))();
		}

		static ::RPG::Client::Promises::IPromise* BNMLCINFDCB()
		{
			return ((::RPG::Client::Promises::IPromise*(*)())((::PBYTE)hIl2Cpp + IOHBHDJGCPK_BNMLCINFDCB_OFFSET))();
		}

		static ::System::Void DPFOPKIHKNO(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IOHBHDJGCPK_DPFOPKIHKNO_OFFSET))(a1);
		}

	};
