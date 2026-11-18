#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPAGLIDMHLO.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigCurveCtrlMatColorNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define CDPLJAJDOLN_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x169449D0)
#define CDPLJAJDOLN_IAMEGFJFBIF_OFFSET UNITYSDK_OFFSET(0x16944C90)
#define CDPLJAJDOLN_IEOFMNBMMMC_OFFSET UNITYSDK_OFFSET(0x16944970)
#define CDPLJAJDOLN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x169444E0)
#define CDPLJAJDOLN_PCEPOEIOFBN_OFFSET UNITYSDK_OFFSET(0x16944590)
#define CDPLJAJDOLN__CTOR_OFFSET UNITYSDK_OFFSET(0x16944C80)

inline static constexpr unsigned int CDPLJAJDOLN_TypeDefinitionIndex = 38591;

class CDPLJAJDOLN : public ::EPAGLIDMHLO
{
public:
	::MoleMole::Config::ConfigCurveCtrlMatColorNode* GKELJPDNGNP; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Color>* MPLFKDEMCGN; // 0x50
	::System::String* EKEDOCPPECF; // 0x58
	::Il2CppArray<::UnityEngine::Material*>* LDMMNCGAGMP; // 0x60
	::System::Boolean ONFBHDJKPMO; // 0x68
	::System::Byte _padding0[0x3];
	::UnityEngine::Color CPKOBMCEHOB; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPLJAJDOLN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPLJAJDOLN_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void PCEPOEIOFBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPLJAJDOLN_PCEPOEIOFBN_OFFSET))(this);
	}

	::System::Void IEOFMNBMMMC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPLJAJDOLN_IEOFMNBMMMC_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPLJAJDOLN_DFJPMOOOLHM_OFFSET))(this);
	}

	::System::Void IAMEGFJFBIF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPLJAJDOLN_IAMEGFJFBIF_OFFSET))(this);
	}
};
