#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MGKALEKPMOK_PBCEOMBIAMG;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MGKALEKPMOK_ILMAPIOKCHH_MNACNDDNJBF_OFFSET UNITYSDK_OFFSET(0x1592FF50)
#define MGKALEKPMOK_ILMAPIOKCHH_OPPIECDAFMC_OFFSET UNITYSDK_OFFSET(0x1592FBC0)
#define MGKALEKPMOK_ILMAPIOKCHH__CTOR_OFFSET UNITYSDK_OFFSET(0x1592FB60)

inline static constexpr unsigned int MGKALEKPMOK_ILMAPIOKCHH_TypeDefinitionIndex = 64869;

class MGKALEKPMOK_ILMAPIOKCHH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* GFLOMCHJJBK; // 0x10
	::MGKALEKPMOK_PBCEOMBIAMG* EHLDOLPELCD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGKALEKPMOK_ILMAPIOKCHH__CTOR_OFFSET))(this);
	}

	::System::Void OPPIECDAFMC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGKALEKPMOK_ILMAPIOKCHH_OPPIECDAFMC_OFFSET))(this);
	}

	::System::Void MNACNDDNJBF(::System::Single FNIOPKPHDEH, ::System::Boolean FGNHKKOGMNC, ::UnityEngine::Transform* HODAIDNDKHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MGKALEKPMOK_ILMAPIOKCHH_MNACNDDNJBF_OFFSET))(this, FNIOPKPHDEH, FGNHKKOGMNC, HODAIDNDKHD);
	}
};
