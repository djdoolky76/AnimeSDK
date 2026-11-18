#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGMJLNBFKLL.h"

class NPCBBDGEGPM;
namespace System { template <typename T> class Action_1; }

#define PLJMPEEGHLJ_ACFKGKILEAA_OFFSET UNITYSDK_OFFSET(0x1C692630)
#define PLJMPEEGHLJ_EODMFKBPAAL_OFFSET UNITYSDK_OFFSET(0x1C692430)
#define PLJMPEEGHLJ_FNCDCJDGJMO_OFFSET UNITYSDK_OFFSET(0x1C692710)
#define PLJMPEEGHLJ_IJPLJCDHAOG_OFFSET UNITYSDK_OFFSET(0x1C6924B0)
#define PLJMPEEGHLJ_KFCMBPKIMLP_OFFSET UNITYSDK_OFFSET(0x1C692680)
#define PLJMPEEGHLJ_KFJAMFDALEF_OFFSET UNITYSDK_OFFSET(0x1C6925E0)
#define PLJMPEEGHLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1C692420)

inline static constexpr unsigned int PLJMPEEGHLJ_TypeDefinitionIndex = 85755;

class PLJMPEEGHLJ : public ::DGMJLNBFKLL
{
public:
	::System::Action_1<::System::Boolean>* DALGOOHAHEN; // 0x30

	::System::Void _ctor(::NPCBBDGEGPM* DDHJLFOJCGP)
	{
		return ((::System::Void(*)(::PVOID, ::NPCBBDGEGPM*))((::PBYTE)hIl2Cpp + PLJMPEEGHLJ__CTOR_OFFSET))(this, DDHJLFOJCGP);
	}

	::System::Void EODMFKBPAAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLJMPEEGHLJ_EODMFKBPAAL_OFFSET))(this);
	}

	::System::Void KFJAMFDALEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLJMPEEGHLJ_KFJAMFDALEF_OFFSET))(this);
	}

	::System::Void ACFKGKILEAA(::System::Action_1<::System::Boolean>* ACOGBPCBANI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + PLJMPEEGHLJ_ACFKGKILEAA_OFFSET))(this, ACOGBPCBANI);
	}

	::System::Void KFCMBPKIMLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLJMPEEGHLJ_KFCMBPKIMLP_OFFSET))(this);
	}

	::System::Void IJPLJCDHAOG(::System::Boolean IONFIOOFHBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PLJMPEEGHLJ_IJPLJCDHAOG_OFFSET))(this, IONFIOOFHBA);
	}

	::System::Void FNCDCJDGJMO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLJMPEEGHLJ_FNCDCJDGJMO_OFFSET))(this);
	}
};
