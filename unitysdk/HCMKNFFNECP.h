#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPAGLIDMHLO.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigCurveCtrlMatIntensityNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define HCMKNFFNECP_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x14078AB0)
#define HCMKNFFNECP_IAMEGFJFBIF_OFFSET UNITYSDK_OFFSET(0x14078FE0)
#define HCMKNFFNECP_IEOFMNBMMMC_OFFSET UNITYSDK_OFFSET(0x14078A50)
#define HCMKNFFNECP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x140785C0)
#define HCMKNFFNECP_PCEPOEIOFBN_OFFSET UNITYSDK_OFFSET(0x14078670)
#define HCMKNFFNECP__CTOR_OFFSET UNITYSDK_OFFSET(0x14078FD0)

inline static constexpr unsigned int HCMKNFFNECP_TypeDefinitionIndex = 53351;

class HCMKNFFNECP : public ::EPAGLIDMHLO
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Color>* MPLFKDEMCGN; // 0x48
	::MoleMole::Config::ConfigCurveCtrlMatIntensityNode* GKELJPDNGNP; // 0x50
	::Il2CppArray<::UnityEngine::Material*>* LDMMNCGAGMP; // 0x58
	::System::String* EKEDOCPPECF; // 0x60
	::UnityEngine::Color CPKOBMCEHOB; // 0x68
	::System::Boolean ONFBHDJKPMO; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCMKNFFNECP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCMKNFFNECP_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void PCEPOEIOFBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCMKNFFNECP_PCEPOEIOFBN_OFFSET))(this);
	}

	::System::Void IEOFMNBMMMC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCMKNFFNECP_IEOFMNBMMMC_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCMKNFFNECP_DFJPMOOOLHM_OFFSET))(this);
	}

	::System::Void IAMEGFJFBIF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCMKNFFNECP_IAMEGFJFBIF_OFFSET))(this);
	}
};
