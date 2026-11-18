#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AKNBGEJEFBM;
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Func_1; }

#define AKNBGEJEFBM_FICMHIGEFKD_GMBFNDPABDI_OFFSET UNITYSDK_OFFSET(0x12665590)
#define AKNBGEJEFBM_FICMHIGEFKD__CTOR_OFFSET UNITYSDK_OFFSET(0x12665580)

inline static constexpr unsigned int AKNBGEJEFBM_FICMHIGEFKD_TypeDefinitionIndex = 92850;

class AKNBGEJEFBM_FICMHIGEFKD : public ::System::Object
{
public:
	::System::Func_1<::MoleMole::UIControllerContextBase*>* CPJDHCJPAJM; // 0x10
	::AKNBGEJEFBM* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKNBGEJEFBM_FICMHIGEFKD__CTOR_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* GMBFNDPABDI()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKNBGEJEFBM_FICMHIGEFKD_GMBFNDPABDI_OFFSET))(this);
	}
};
