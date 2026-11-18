#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPAGLIDMHLO.h"

namespace MoleMole::Config { class ConfigCurveCtrlMatAlphaNode; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define IDNMFDJLJBE_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0xEA18070)
#define IDNMFDJLJBE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xEA17DF0)
#define IDNMFDJLJBE_PCEPOEIOFBN_OFFSET UNITYSDK_OFFSET(0xEA17EA0)
#define IDNMFDJLJBE__CTOR_OFFSET UNITYSDK_OFFSET(0xEA18230)

inline static constexpr unsigned int IDNMFDJLJBE_TypeDefinitionIndex = 38802;

class IDNMFDJLJBE : public ::EPAGLIDMHLO
{
public:
	::MoleMole::Config::ConfigCurveCtrlMatAlphaNode* GKELJPDNGNP; // 0x48
	::Il2CppArray<::UnityEngine::Material*>* LDMMNCGAGMP; // 0x50
	::System::String* EKEDOCPPECF; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNMFDJLJBE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNMFDJLJBE_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void PCEPOEIOFBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNMFDJLJBE_PCEPOEIOFBN_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNMFDJLJBE_DFJPMOOOLHM_OFFSET))(this);
	}
};
