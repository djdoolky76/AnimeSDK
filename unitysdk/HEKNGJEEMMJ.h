#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Numerics/BigInteger.h"
class BACHHBGNENA;
class LBFNAJJGCBH;
namespace RPG::Client { class NetworkManager; }
namespace RPG::Client { class PlanetFesModule; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HEKNGJEEMMJ_AMMIOJECLOK_OFFSET UNITYSDK_OFFSET(0x16B9E2A0)
#define HEKNGJEEMMJ_CHFDBCOKDBP_OFFSET UNITYSDK_OFFSET(0x16B9E8B0)
#define HEKNGJEEMMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16B9F060)
#define HEKNGJEEMMJ_FFFOIDGDBJD_OFFSET UNITYSDK_OFFSET(0x16B9E3C0)
#define HEKNGJEEMMJ_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x16B9F040)
#define HEKNGJEEMMJ_GET_RATIO_OFFSET UNITYSDK_OFFSET(0x16B9F020)
#define HEKNGJEEMMJ_HGNDCFHOGCE_OFFSET UNITYSDK_OFFSET(0x16B9ED90)
#define HEKNGJEEMMJ_JKGEJGLKCGL_OFFSET UNITYSDK_OFFSET(0x16B9EF20)
#define HEKNGJEEMMJ_KHHDIDPKHJP_OFFSET UNITYSDK_OFFSET(0x16B9E030)
#define HEKNGJEEMMJ_MAODIINKAEM_OFFSET UNITYSDK_OFFSET(0x16B9EDF0)
#define HEKNGJEEMMJ_NIPDCHOJNHJ_OFFSET UNITYSDK_OFFSET(0x16B9EF90)
#define HEKNGJEEMMJ_SET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x16B9F050)
#define HEKNGJEEMMJ_SET_RATIO_OFFSET UNITYSDK_OFFSET(0x16B9F030)

inline static constexpr unsigned int HEKNGJEEMMJ_TypeDefinitionIndex = 68553;

	class HEKNGJEEMMJ : public ::System::Object
	{
	public:
		::System::UInt32 _FinishCount_k__BackingField; // 0x10
		::System::UInt32 _Ratio_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKNGJEEMMJ_CTOR_OFFSET))(this);
		}

		::System::Void KHHDIDPKHJP(::LBFNAJJGCBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBFNAJJGCBH*))((::PBYTE)hIl2Cpp + HEKNGJEEMMJ_KHHDIDPKHJP_OFFSET))(this, a1);
		}

		::System::Void HGNDCFHOGCE(::BACHHBGNENA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BACHHBGNENA*))((::PBYTE)hIl2Cpp + HEKNGJEEMMJ_HGNDCFHOGCE_OFFSET))(this, a1);
		}

		::System::Void MAODIINKAEM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HEKNGJEEMMJ_MAODIINKAEM_OFFSET))(this, a1);
		}

		::System::Numerics::BigInteger AMMIOJECLOK(::LBFNAJJGCBH* a1)
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID, ::LBFNAJJGCBH*))((::PBYTE)hIl2Cpp + HEKNGJEEMMJ_AMMIOJECLOK_OFFSET))(this, a1);
		}

		::System::UInt32 FFFOIDGDBJD(::LBFNAJJGCBH* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::LBFNAJJGCBH*))((::PBYTE)hIl2Cpp + HEKNGJEEMMJ_FFFOIDGDBJD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* CHFDBCOKDBP(::LBFNAJJGCBH* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::LBFNAJJGCBH*))((::PBYTE)hIl2Cpp + HEKNGJEEMMJ_CHFDBCOKDBP_OFFSET))(this, a1);
		}

		::System::UInt32 get_Ratio()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKNGJEEMMJ_GET_RATIO_OFFSET))(this);
		}

		::System::Void set_Ratio(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HEKNGJEEMMJ_SET_RATIO_OFFSET))(this, a1);
		}

		::System::UInt32 get_FinishCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKNGJEEMMJ_GET_FINISHCOUNT_OFFSET))(this);
		}

		::System::Void set_FinishCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HEKNGJEEMMJ_SET_FINISHCOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::PlanetFesModule* NIPDCHOJNHJ()
		{
			return ((::RPG::Client::PlanetFesModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKNGJEEMMJ_NIPDCHOJNHJ_OFFSET))(this);
		}

		::RPG::Client::NetworkManager* JKGEJGLKCGL()
		{
			return ((::RPG::Client::NetworkManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKNGJEEMMJ_JKGEJGLKCGL_OFFSET))(this);
		}

	};
