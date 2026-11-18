#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AKCGFNKLIBA;
class FABMJJIFEEI;
namespace System { template <typename T> class Action_1; }

#define AOEFLPEICBM_KIAEAENKDHI_OFFSET UNITYSDK_OFFSET(0x1266FCF0)
#define AOEFLPEICBM_MLMHBELHDGA_OFFSET UNITYSDK_OFFSET(0x1266FC00)
#define AOEFLPEICBM__CTOR_OFFSET UNITYSDK_OFFSET(0x1266FCB0)

inline static constexpr unsigned int AOEFLPEICBM_TypeDefinitionIndex = 43171;

class AOEFLPEICBM : public ::System::Object
{
public:
	::FABMJJIFEEI* HIPEEIHACFK; // 0x10
	::System::Action_1<::AKCGFNKLIBA*>* CHCGMACMJLD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOEFLPEICBM__CTOR_OFFSET))(this);
	}

	::System::Void MLMHBELHDGA(::System::Action_1<::AKCGFNKLIBA*>* JFKDJCEMCJB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::AKCGFNKLIBA*>*))((::PBYTE)hIl2Cpp + AOEFLPEICBM_MLMHBELHDGA_OFFSET))(this, JFKDJCEMCJB);
	}

	::System::Void KIAEAENKDHI(::FABMJJIFEEI* DABGGHIFHHD)
	{
		return ((::System::Void(*)(::PVOID, ::FABMJJIFEEI*))((::PBYTE)hIl2Cpp + AOEFLPEICBM_KIAEAENKDHI_OFFSET))(this, DABGGHIFHHD);
	}
};
