#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFEABBJBIGK;
class JGBOFNGGDOK;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define JGBOFNGGDOK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB9AC810)
#define JGBOFNGGDOK_CIJBDHCALKF_OFFSET UNITYSDK_OFFSET(0xB9ACB40)
#define JGBOFNGGDOK_CTOR_OFFSET UNITYSDK_OFFSET(0xB9AC900)
#define JGBOFNGGDOK_EDDBCKGHBBH_OFFSET UNITYSDK_OFFSET(0xB9AC980)
#define JGBOFNGGDOK_FIKODHDDHMO_OFFSET UNITYSDK_OFFSET(0xB9ACE10)
#define JGBOFNGGDOK_HEHBPEOPPJC_OFFSET UNITYSDK_OFFSET(0xB9AC730)
#define JGBOFNGGDOK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB9ACA20)
#define JGBOFNGGDOK_LGHFFELLODH_OFFSET UNITYSDK_OFFSET(0xB9AC7C0)
#define JGBOFNGGDOK_OLKAHGPNFDD_OFFSET UNITYSDK_OFFSET(0xB9ACA70)
#define JGBOFNGGDOK_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB9ACC40)

inline static constexpr unsigned int JGBOFNGGDOK_TypeDefinitionIndex = 80902;

	class JGBOFNGGDOK : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::IFEABBJBIGK*>* ICKOFKCFGKI; // 0x10
		::IFEABBJBIGK* MLAEBDBIGLD; // 0x18
		::System::Boolean MAIJGCMCGLO; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single PBFPDOIJJAD; // 0x24
		// static const ::System::Object DPJGMPLMNAM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBOFNGGDOK_CTOR_OFFSET))(this);
		}

		::System::Boolean HEHBPEOPPJC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBOFNGGDOK_HEHBPEOPPJC_OFFSET))(this);
		}

		::System::Int32 LGHFFELLODH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBOFNGGDOK_LGHFFELLODH_OFFSET))(this);
		}

		static ::JGBOFNGGDOK* BPLPBPMEODA()
		{
			return ((::JGBOFNGGDOK*(*)())((::PBYTE)hIl2Cpp + JGBOFNGGDOK_BPLPBPMEODA_OFFSET))();
		}

		::System::Void EDDBCKGHBBH(::IFEABBJBIGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFEABBJBIGK*))((::PBYTE)hIl2Cpp + JGBOFNGGDOK_EDDBCKGHBBH_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBOFNGGDOK_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBOFNGGDOK_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void OLKAHGPNFDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBOFNGGDOK_OLKAHGPNFDD_OFFSET))(this);
		}

		::System::Void FIKODHDDHMO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JGBOFNGGDOK_FIKODHDDHMO_OFFSET))(this, a1);
		}

		::System::Void CIJBDHCALKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBOFNGGDOK_CIJBDHCALKF_OFFSET))(this);
		}

	};
