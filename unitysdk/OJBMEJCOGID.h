#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class BLEABNBGKAG;
class EBBBJDPGDFG;
class MJNGFEGNCOA;
class MOMODPMFIKE;
class OIKDEOMMOAM;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OJBMEJCOGID_ABOFOMGHGJM_OFFSET UNITYSDK_OFFSET(0xBEAB220)
#define OJBMEJCOGID_BGPAOPDMDHF_OFFSET UNITYSDK_OFFSET(0xBEAAD70)
#define OJBMEJCOGID_CTOR_OFFSET UNITYSDK_OFFSET(0xBEAB370)
#define OJBMEJCOGID_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEAAC80)
#define OJBMEJCOGID_EANLMIKHCKG_OFFSET UNITYSDK_OFFSET(0xBEAB170)
#define OJBMEJCOGID_EEJACPLOBNN_OFFSET UNITYSDK_OFFSET(0xBEAB270)
#define OJBMEJCOGID_EJMOLOJHIBL_OFFSET UNITYSDK_OFFSET(0xBEAB290)
#define OJBMEJCOGID_FAJAENGNEJO_OFFSET UNITYSDK_OFFSET(0xBEAB360)
#define OJBMEJCOGID_GMFOFLMJJHD_OFFSET UNITYSDK_OFFSET(0xBEAAB50)
#define OJBMEJCOGID_KCKGCEBBCIE_OFFSET UNITYSDK_OFFSET(0xBEAAF10)
#define OJBMEJCOGID_OCHINNDHEMI_OFFSET UNITYSDK_OFFSET(0xBEAB280)
#define OJBMEJCOGID_OPGJPKADHMF_OFFSET UNITYSDK_OFFSET(0xBEAB350)
#define OJBMEJCOGID_PLGLOAANAFM_OFFSET UNITYSDK_OFFSET(0xBEAB2F0)
#define OJBMEJCOGID_PMICKFMADDF_OFFSET UNITYSDK_OFFSET(0xBEAAE80)
#define OJBMEJCOGID__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xBEAA840)

inline static constexpr unsigned int OJBMEJCOGID_TypeDefinitionIndex = 54044;

	class OJBMEJCOGID : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::MOMODPMFIKE* IHAFOIJJLHE; // 0x18
		::System::Collections::Generic::List_1<::BLEABNBGKAG*>* CLDHFHNGBMP; // 0x20
		::EBBBJDPGDFG* EEGKNKIBLHB; // 0x28
		::System::Int32 OJPIPNENCCH; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint BDLFMGFFNGG; // 0x38
		::RPG::GameCore::FixPoint IIOBIMKFPHM; // 0x40
		::RPG::GameCore::FixPoint AALEPPMODKB; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJBMEJCOGID_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJBMEJCOGID__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJBMEJCOGID_DISPOSE_OFFSET))(this);
		}

		::System::Void BGPAOPDMDHF(::BLEABNBGKAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLEABNBGKAG*))((::PBYTE)hIl2Cpp + OJBMEJCOGID_BGPAOPDMDHF_OFFSET))(this, a1);
		}

		::System::Void PMICKFMADDF(::BLEABNBGKAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLEABNBGKAG*))((::PBYTE)hIl2Cpp + OJBMEJCOGID_PMICKFMADDF_OFFSET))(this, a1);
		}

		::System::Void KCKGCEBBCIE(::MJNGFEGNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJNGFEGNCOA*))((::PBYTE)hIl2Cpp + OJBMEJCOGID_KCKGCEBBCIE_OFFSET))(this, a1);
		}

		::System::Void ABOFOMGHGJM(::OIKDEOMMOAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIKDEOMMOAM*))((::PBYTE)hIl2Cpp + OJBMEJCOGID_ABOFOMGHGJM_OFFSET))(this, a1);
		}

		::System::Void GMFOFLMJJHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJBMEJCOGID_GMFOFLMJJHD_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint EEJACPLOBNN()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + OJBMEJCOGID_EEJACPLOBNN_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint OCHINNDHEMI()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + OJBMEJCOGID_OCHINNDHEMI_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint EJMOLOJHIBL()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + OJBMEJCOGID_EJMOLOJHIBL_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint PLGLOAANAFM()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + OJBMEJCOGID_PLGLOAANAFM_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint EANLMIKHCKG()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + OJBMEJCOGID_EANLMIKHCKG_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint OPGJPKADHMF()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + OJBMEJCOGID_OPGJPKADHMF_OFFSET))(this);
		}

		::MOMODPMFIKE* FAJAENGNEJO()
		{
			return ((::MOMODPMFIKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJBMEJCOGID_FAJAENGNEJO_OFFSET))(this);
		}

	};
