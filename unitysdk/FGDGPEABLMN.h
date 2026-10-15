#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKIODIMJPNA;
class MDNGGPDFFIE;
class OOIBNCGLMML;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FGDGPEABLMN_ALNKJNNPIEI_OFFSET UNITYSDK_OFFSET(0x15757060)
#define FGDGPEABLMN_CKIAIKOBIKP_OFFSET UNITYSDK_OFFSET(0x15755FB0)
#define FGDGPEABLMN_CLFPHDFCLJL_OFFSET UNITYSDK_OFFSET(0x157552E0)
#define FGDGPEABLMN_CTOR_OFFSET UNITYSDK_OFFSET(0x15755060)
#define FGDGPEABLMN_DHCECDODIJN_OFFSET UNITYSDK_OFFSET(0x15756E40)
#define FGDGPEABLMN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15756190)
#define FGDGPEABLMN_ECHIBEEFJEC_OFFSET UNITYSDK_OFFSET(0x157578E0)
#define FGDGPEABLMN_EGODFELGLPI_OFFSET UNITYSDK_OFFSET(0x15756650)
#define FGDGPEABLMN_GGDDCIDPKPK_OFFSET UNITYSDK_OFFSET(0x15756D80)
#define FGDGPEABLMN_GGJMBJJENIF_OFFSET UNITYSDK_OFFSET(0x15756800)
#define FGDGPEABLMN_IICJMLNDKFJ_OFFSET UNITYSDK_OFFSET(0x157568F0)
#define FGDGPEABLMN_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15756730)
#define FGDGPEABLMN_JMMIPPDNFOC_1_OFFSET UNITYSDK_OFFSET(0x15757820)
#define FGDGPEABLMN_JMMIPPDNFOC_OFFSET UNITYSDK_OFFSET(0x157575A0)
#define FGDGPEABLMN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15755290)
#define FGDGPEABLMN_LIDPFHNECID_1_OFFSET UNITYSDK_OFFSET(0x15757760)
#define FGDGPEABLMN_LIDPFHNECID_OFFSET UNITYSDK_OFFSET(0x157573F0)
#define FGDGPEABLMN_LJMAJDOBCPN_OFFSET UNITYSDK_OFFSET(0x15756F90)
#define FGDGPEABLMN_LLODBBGDNMB_OFFSET UNITYSDK_OFFSET(0x15756860)
#define FGDGPEABLMN_NLKDJCHEAGD_OFFSET UNITYSDK_OFFSET(0x157551B0)
#define FGDGPEABLMN_OKOIENGEOII_OFFSET UNITYSDK_OFFSET(0x15756980)

inline static constexpr unsigned int FGDGPEABLMN_TypeDefinitionIndex = 60204;

	class FGDGPEABLMN : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* NCMBOLBCPGP; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::FKIODIMJPNA*>*>* FJDHEEINOOH; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::FKIODIMJPNA*>*>* PDECKJADKCF; // 0x20
		::OOIBNCGLMML* FHBNIHNMAJF; // 0x28
		::MDNGGPDFFIE* OJMMJIALPON; // 0x30
		::System::Collections::Generic::List_1<::FKIODIMJPNA*>* FOPJMNOEGAG; // 0x38
		::System::Void _ctor(::MDNGGPDFFIE* a1, ::OOIBNCGLMML* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MDNGGPDFFIE*, ::OOIBNCGLMML*))((::PBYTE)hIl2Cpp + FGDGPEABLMN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDGPEABLMN_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDGPEABLMN_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGDGPEABLMN_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean GGJMBJJENIF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGDGPEABLMN_GGJMBJJENIF_OFFSET))(this, a1);
		}

		::System::Void LLODBBGDNMB(::FKIODIMJPNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKIODIMJPNA*))((::PBYTE)hIl2Cpp + FGDGPEABLMN_LLODBBGDNMB_OFFSET))(this, a1);
		}

		::System::Void IICJMLNDKFJ(::FKIODIMJPNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKIODIMJPNA*))((::PBYTE)hIl2Cpp + FGDGPEABLMN_IICJMLNDKFJ_OFFSET))(this, a1);
		}

		::System::Void OKOIENGEOII(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + FGDGPEABLMN_OKOIENGEOII_OFFSET))(this, a1, a2);
		}

		::System::Void GGDDCIDPKPK(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FGDGPEABLMN_GGDDCIDPKPK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LJMAJDOBCPN(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + FGDGPEABLMN_LJMAJDOBCPN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ALNKJNNPIEI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FGDGPEABLMN_ALNKJNNPIEI_OFFSET))(this, a1);
		}

		::FKIODIMJPNA* DHCECDODIJN(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::FKIODIMJPNA*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FGDGPEABLMN_DHCECDODIJN_OFFSET))(this, a1, a2);
		}

		::System::Void NLKDJCHEAGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDGPEABLMN_NLKDJCHEAGD_OFFSET))(this);
		}

		::System::Void EGODFELGLPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDGPEABLMN_EGODFELGLPI_OFFSET))(this);
		}

		::System::Void CKIAIKOBIKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDGPEABLMN_CKIAIKOBIKP_OFFSET))(this);
		}

		::System::Void LIDPFHNECID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGDGPEABLMN_LIDPFHNECID_OFFSET))(this, a1);
		}

		::System::Void JMMIPPDNFOC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGDGPEABLMN_JMMIPPDNFOC_OFFSET))(this, a1);
		}

		::System::Void LIDPFHNECID_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FGDGPEABLMN_LIDPFHNECID_1_OFFSET))(this, a1);
		}

		::System::Void JMMIPPDNFOC_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FGDGPEABLMN_JMMIPPDNFOC_1_OFFSET))(this, a1);
		}

		::System::Void CLFPHDFCLJL(::OOIBNCGLMML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOIBNCGLMML*))((::PBYTE)hIl2Cpp + FGDGPEABLMN_CLFPHDFCLJL_OFFSET))(this, a1);
		}

		::MDNGGPDFFIE* ECHIBEEFJEC()
		{
			return ((::MDNGGPDFFIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDGPEABLMN_ECHIBEEFJEC_OFFSET))(this);
		}

	};
