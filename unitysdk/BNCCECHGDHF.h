#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAMIOFOKCEB.h"
#include "unitysdk/OCKCNOOHILK.h"
#include "unitysdk/System/Object.h"
class EDOIKKNIPDK;
class FFOAFCPMFCA;

#define BNCCECHGDHF_AFPJGDHJNDA_OFFSET UNITYSDK_OFFSET(0x1A759EA0)
#define BNCCECHGDHF_AMBNLFCNEBN_OFFSET UNITYSDK_OFFSET(0x1A75A020)
#define BNCCECHGDHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1A759BC0)
#define BNCCECHGDHF_EIBHHOPHJCK_OFFSET UNITYSDK_OFFSET(0x1A75A1C0)
#define BNCCECHGDHF_FKKAEANHMGM_OFFSET UNITYSDK_OFFSET(0x1A75A240)
#define BNCCECHGDHF_HIJEACNENCO_OFFSET UNITYSDK_OFFSET(0x1A759E10)
#define BNCCECHGDHF_HMKLPOPHCGD_OFFSET UNITYSDK_OFFSET(0x1A759FD0)
#define BNCCECHGDHF_JABEAJEEALB_OFFSET UNITYSDK_OFFSET(0x1A759C70)
#define BNCCECHGDHF_JHMBLADCHKC_OFFSET UNITYSDK_OFFSET(0x1A759F30)
#define BNCCECHGDHF_JPKLNMBINDD_OFFSET UNITYSDK_OFFSET(0x1A759BD0)
#define BNCCECHGDHF_NBDJGDPOAKM_OFFSET UNITYSDK_OFFSET(0x1A759F80)

inline static constexpr unsigned int BNCCECHGDHF_TypeDefinitionIndex = 77024;

	class BNCCECHGDHF : public ::System::Object
	{
	public:
		::FFOAFCPMFCA* GCFHKJJNIFH; // 0x10
		::EDOIKKNIPDK* IKMGKHNGJHB; // 0x18
		::BAMIOFOKCEB HPBHNEABHCN; // 0x20
		::OCKCNOOHILK APDAKLEBOLC; // 0x24
		// static const ::System::Object BOIODLLONJL; // 0x0
		::System::Void _ctor(::FFOAFCPMFCA* a1, ::EDOIKKNIPDK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FFOAFCPMFCA*, ::EDOIKKNIPDK*))((::PBYTE)hIl2Cpp + BNCCECHGDHF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean JPKLNMBINDD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCCECHGDHF_JPKLNMBINDD_OFFSET))(this);
		}

		::BAMIOFOKCEB HIJEACNENCO()
		{
			return ((::BAMIOFOKCEB(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCCECHGDHF_HIJEACNENCO_OFFSET))(this);
		}

		::OCKCNOOHILK AFPJGDHJNDA()
		{
			return ((::OCKCNOOHILK(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCCECHGDHF_AFPJGDHJNDA_OFFSET))(this);
		}

		::System::UInt32 JHMBLADCHKC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCCECHGDHF_JHMBLADCHKC_OFFSET))(this);
		}

		::System::UInt32 NBDJGDPOAKM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCCECHGDHF_NBDJGDPOAKM_OFFSET))(this);
		}

		::System::UInt32 HMKLPOPHCGD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCCECHGDHF_HMKLPOPHCGD_OFFSET))(this);
		}

		::System::Boolean JABEAJEEALB(::BAMIOFOKCEB a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAMIOFOKCEB))((::PBYTE)hIl2Cpp + BNCCECHGDHF_JABEAJEEALB_OFFSET))(this, a1);
		}

		::System::Boolean AMBNLFCNEBN(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BNCCECHGDHF_AMBNLFCNEBN_OFFSET))(this, a1);
		}

		::System::Void EIBHHOPHJCK(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BNCCECHGDHF_EIBHHOPHJCK_OFFSET))(this, a1, a2);
		}

		::System::Void FKKAEANHMGM(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + BNCCECHGDHF_FKKAEANHMGM_OFFSET))(this, a1, a2);
		}

	};
