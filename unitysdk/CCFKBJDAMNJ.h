#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFMNCFKBEGL;
class LDFEDNEMOCD;
class MGFFCMONLJG;
class MINAKLCBJMO;
class OBJANKHLNGO;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CCFKBJDAMNJ_ANNPOCDPFDG_OFFSET UNITYSDK_OFFSET(0xCE2BE60)
#define CCFKBJDAMNJ_BKGAAFCLKNK_OFFSET UNITYSDK_OFFSET(0xCE2C1A0)
#define CCFKBJDAMNJ_BNCAJPEHGFC_OFFSET UNITYSDK_OFFSET(0xCE2C2A0)
#define CCFKBJDAMNJ_CTOR_OFFSET UNITYSDK_OFFSET(0xCE2B700)
#define CCFKBJDAMNJ_FKFMPMIKGHD_OFFSET UNITYSDK_OFFSET(0xCE2B7C0)
#define CCFKBJDAMNJ_GFLKJPKCCKH_OFFSET UNITYSDK_OFFSET(0xCE2C440)
#define CCFKBJDAMNJ_HCJDPFKJOHE_OFFSET UNITYSDK_OFFSET(0xCE2C6D0)
#define CCFKBJDAMNJ_KIMMMMEBIFP_OFFSET UNITYSDK_OFFSET(0xCE2B990)
#define CCFKBJDAMNJ_LLLBIHEFDLK_OFFSET UNITYSDK_OFFSET(0xCE2BFB0)
#define CCFKBJDAMNJ_MCPCHIMEDND_OFFSET UNITYSDK_OFFSET(0xCE2C540)
#define CCFKBJDAMNJ_NIOBLHKNHBN_OFFSET UNITYSDK_OFFSET(0xCE2C0E0)
#define CCFKBJDAMNJ_PBDIFNEIJJH_OFFSET UNITYSDK_OFFSET(0xCE2BC30)

inline static constexpr unsigned int CCFKBJDAMNJ_TypeDefinitionIndex = 84865;

	class CCFKBJDAMNJ : public ::System::Object
	{
	public:
		::OBJANKHLNGO* GJALMBBNNOF; // 0x10
		::LDFEDNEMOCD* MJHHLOPFDNK; // 0x18
		::MINAKLCBJMO* JDGBDKHIEGG; // 0x20
		::System::Void _ctor(::LDFEDNEMOCD* a1, ::MINAKLCBJMO* a2, ::OBJANKHLNGO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::LDFEDNEMOCD*, ::MINAKLCBJMO*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + CCFKBJDAMNJ_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FKFMPMIKGHD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CCFKBJDAMNJ_FKFMPMIKGHD_OFFSET))(this, a1);
		}

		::System::Void PBDIFNEIJJH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CCFKBJDAMNJ_PBDIFNEIJJH_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* ANNPOCDPFDG(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CCFKBJDAMNJ_ANNPOCDPFDG_OFFSET))(this, a1);
		}

		::System::Void LLLBIHEFDLK(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + CCFKBJDAMNJ_LLLBIHEFDLK_OFFSET))(this, a1, a2);
		}

		::System::Void NIOBLHKNHBN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CCFKBJDAMNJ_NIOBLHKNHBN_OFFSET))(this, a1);
		}

		::System::Boolean BKGAAFCLKNK(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CCFKBJDAMNJ_BKGAAFCLKNK_OFFSET))(this, a1);
		}

		::System::Void BNCAJPEHGFC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CCFKBJDAMNJ_BNCAJPEHGFC_OFFSET))(this, a1);
		}

		::System::Boolean GFLKJPKCCKH(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CCFKBJDAMNJ_GFLKJPKCCKH_OFFSET))(this, a1);
		}

		::System::Void MCPCHIMEDND(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CCFKBJDAMNJ_MCPCHIMEDND_OFFSET))(this, a1);
		}

		static ::System::Boolean KIMMMMEBIFP(::MGFFCMONLJG* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::MGFFCMONLJG*, ::System::Boolean))((::PBYTE)hIl2Cpp + CCFKBJDAMNJ_KIMMMMEBIFP_OFFSET))(a1, a2);
		}

		::System::Void HCJDPFKJOHE(::IFMNCFKBEGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFMNCFKBEGL*))((::PBYTE)hIl2Cpp + CCFKBJDAMNJ_HCJDPFKJOHE_OFFSET))(this, a1);
		}

	};
