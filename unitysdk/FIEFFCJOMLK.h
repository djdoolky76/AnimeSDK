#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJIMDIILCBF.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }

#define FIEFFCJOMLK_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0x15798CB0)
#define FIEFFCJOMLK_BBAJKBLNDPD_OFFSET UNITYSDK_OFFSET(0x15798FD0)
#define FIEFFCJOMLK_BGKIDIPIFPK_OFFSET UNITYSDK_OFFSET(0x15798A20)
#define FIEFFCJOMLK_CEODOCAJEDE_OFFSET UNITYSDK_OFFSET(0x15798E90)
#define FIEFFCJOMLK_CTOR_OFFSET UNITYSDK_OFFSET(0x15798E40)
#define FIEFFCJOMLK_GLOHPODGGND_OFFSET UNITYSDK_OFFSET(0x15798B20)
#define FIEFFCJOMLK_GNNFJPAGMOO_OFFSET UNITYSDK_OFFSET(0x15798F30)
#define FIEFFCJOMLK_HMIKGMCHGEG_OFFSET UNITYSDK_OFFSET(0x157989A0)
#define FIEFFCJOMLK_JCPKEPKJPOO_OFFSET UNITYSDK_OFFSET(0x15798AA0)
#define FIEFFCJOMLK_LKOOGGDFEHN_OFFSET UNITYSDK_OFFSET(0x157989E0)
#define FIEFFCJOMLK_PCOKFGHFJJF_OFFSET UNITYSDK_OFFSET(0x15798C00)
#define FIEFFCJOMLK_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x15798D50)

inline static constexpr unsigned int FIEFFCJOMLK_TypeDefinitionIndex = 62795;

	class FIEFFCJOMLK : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::IJIMDIILCBF>* FDICIBFCGGA; // 0x10
		::System::Collections::Generic::HashSet_1<::IJIMDIILCBF>* PMDLLKGAIDN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIEFFCJOMLK_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyCollection_1<::IJIMDIILCBF>* HMIKGMCHGEG()
		{
			return ((::System::Collections::Generic::IReadOnlyCollection_1<::IJIMDIILCBF>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIEFFCJOMLK_HMIKGMCHGEG_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyCollection_1<::IJIMDIILCBF>* LKOOGGDFEHN()
		{
			return ((::System::Collections::Generic::IReadOnlyCollection_1<::IJIMDIILCBF>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIEFFCJOMLK_LKOOGGDFEHN_OFFSET))(this);
		}

		::System::Boolean BGKIDIPIFPK(::IJIMDIILCBF a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IJIMDIILCBF))((::PBYTE)hIl2Cpp + FIEFFCJOMLK_BGKIDIPIFPK_OFFSET))(this, a1);
		}

		::System::Boolean JCPKEPKJPOO(::IJIMDIILCBF a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IJIMDIILCBF))((::PBYTE)hIl2Cpp + FIEFFCJOMLK_JCPKEPKJPOO_OFFSET))(this, a1);
		}

		::System::Void GLOHPODGGND(::IJIMDIILCBF a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJIMDIILCBF, ::System::Boolean))((::PBYTE)hIl2Cpp + FIEFFCJOMLK_GLOHPODGGND_OFFSET))(this, a1, a2);
		}

		::System::Void PCOKFGHFJJF(::IJIMDIILCBF a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJIMDIILCBF))((::PBYTE)hIl2Cpp + FIEFFCJOMLK_PCOKFGHFJJF_OFFSET))(this, a1);
		}

		::System::Void AALCFBOGFKP(::IJIMDIILCBF a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJIMDIILCBF))((::PBYTE)hIl2Cpp + FIEFFCJOMLK_AALCFBOGFKP_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIEFFCJOMLK_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Boolean CEODOCAJEDE(::IJIMDIILCBF a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IJIMDIILCBF))((::PBYTE)hIl2Cpp + FIEFFCJOMLK_CEODOCAJEDE_OFFSET))(this, a1);
		}

		::System::Boolean GNNFJPAGMOO(::IJIMDIILCBF a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IJIMDIILCBF))((::PBYTE)hIl2Cpp + FIEFFCJOMLK_GNNFJPAGMOO_OFFSET))(this, a1);
		}

		::System::Void BBAJKBLNDPD(::IJIMDIILCBF a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJIMDIILCBF))((::PBYTE)hIl2Cpp + FIEFFCJOMLK_BBAJKBLNDPD_OFFSET))(this, a1);
		}

	};
