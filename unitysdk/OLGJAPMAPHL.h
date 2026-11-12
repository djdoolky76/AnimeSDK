#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCMNLOPKLDO.h"
#include "unitysdk/System/Object.h"
class HFCIKOMDEIM;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OLGJAPMAPHL_AKICLEGECNG_OFFSET UNITYSDK_OFFSET(0xC806DF0)
#define OLGJAPMAPHL_BKJGMFOKKKN_OFFSET UNITYSDK_OFFSET(0xC806300)
#define OLGJAPMAPHL_CPFJHJKMKII_OFFSET UNITYSDK_OFFSET(0xC806D70)
#define OLGJAPMAPHL_CTOR_OFFSET UNITYSDK_OFFSET(0xC807150)
#define OLGJAPMAPHL_GAJOGNKBPJC_OFFSET UNITYSDK_OFFSET(0xC806780)
#define OLGJAPMAPHL_GNCJAGHKEPO_OFFSET UNITYSDK_OFFSET(0xC8065D0)
#define OLGJAPMAPHL_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xC806470)
#define OLGJAPMAPHL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC806A00)
#define OLGJAPMAPHL_KLFLBOIDIKD_OFFSET UNITYSDK_OFFSET(0xC806710)
#define OLGJAPMAPHL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC805F10)
#define OLGJAPMAPHL_LDGGLADCLEH_OFFSET UNITYSDK_OFFSET(0xC806670)
#define OLGJAPMAPHL_LHFLJPKPGLF_OFFSET UNITYSDK_OFFSET(0xC806290)
#define OLGJAPMAPHL_MJMJBGFJNAN_OFFSET UNITYSDK_OFFSET(0xC807110)
#define OLGJAPMAPHL_PNMOMNNHKHC_OFFSET UNITYSDK_OFFSET(0xC806EC0)

inline static constexpr unsigned int OLGJAPMAPHL_TypeDefinitionIndex = 60626;

	class OLGJAPMAPHL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HFCIKOMDEIM*>* IKBBFIIMPFD; // 0x10
		::System::Single LEONGKFCJBB; // 0x18
		::System::Single NBELFBMHGPM; // 0x1C
		::System::Int64 GBLELLGNJFF; // 0x20
		::System::Single GNDACGOJNAO; // 0x28
		::System::Single JMMFNPLNDGE; // 0x2C
		::System::Single DGANNJOKEAD; // 0x30
		::System::Boolean DGBDMMNIEKA; // 0x34
		::System::Boolean MBKFKOHFPAA; // 0x35
		::System::Byte _padding0[0x2];
		::BCMNLOPKLDO JOJLAFCCNHB; // 0x38
		::System::Single IDJPJCOLIDN; // 0x60
		::System::Single FNEGKMMHJMO; // 0x64
		::System::Int32 NDPOMACLHJC; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLGJAPMAPHL_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLGJAPMAPHL_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLGJAPMAPHL_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void BKJGMFOKKKN(::HFCIKOMDEIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCIKOMDEIM*))((::PBYTE)hIl2Cpp + OLGJAPMAPHL_BKJGMFOKKKN_OFFSET))(this, a1);
		}

		::System::Void GNCJAGHKEPO(::HFCIKOMDEIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCIKOMDEIM*))((::PBYTE)hIl2Cpp + OLGJAPMAPHL_GNCJAGHKEPO_OFFSET))(this, a1);
		}

		::System::Void LDGGLADCLEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OLGJAPMAPHL_LDGGLADCLEH_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLGJAPMAPHL_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void GAJOGNKBPJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLGJAPMAPHL_GAJOGNKBPJC_OFFSET))(this);
		}

		::System::Void CPFJHJKMKII(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OLGJAPMAPHL_CPFJHJKMKII_OFFSET))(this, a1);
		}

		::System::Void AKICLEGECNG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OLGJAPMAPHL_AKICLEGECNG_OFFSET))(this, a1);
		}

		::System::Void PNMOMNNHKHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLGJAPMAPHL_PNMOMNNHKHC_OFFSET))(this);
		}

		static ::System::Int64 LHFLJPKPGLF()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + OLGJAPMAPHL_LHFLJPKPGLF_OFFSET))();
		}

		static ::System::Int64 KLFLBOIDIKD()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + OLGJAPMAPHL_KLFLBOIDIKD_OFFSET))();
		}

		static ::System::Int64 MJMJBGFJNAN()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + OLGJAPMAPHL_MJMJBGFJNAN_OFFSET))();
		}

	};
