#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CPABOPKIGAL;
class LGAFMFNMCOG;
template <typename T> class KCMIFNGABDC_1;

#define OGNPCCOBLLI_EGMJPLHJHGO_OFFSET UNITYSDK_OFFSET(0x11B2C620)
#define OGNPCCOBLLI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11B2BEB0)
#define OGNPCCOBLLI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11B2BB90)
#define OGNPCCOBLLI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11B2CA40)
#define OGNPCCOBLLI_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x11B2C9B0)
#define OGNPCCOBLLI_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x11B2B850)
#define OGNPCCOBLLI__CTOR_OFFSET UNITYSDK_OFFSET(0x11B2C730)

inline static constexpr unsigned int OGNPCCOBLLI_TypeDefinitionIndex = 70122;

class OGNPCCOBLLI : public ::MHMFINLCNFN
{
public:
	::CPABOPKIGAL* JMBPGMDOIAF; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* FOOFNOFGGAK; // 0x30
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* JGGNCCPFDNH; // 0x38
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* AIKGHFNGPHD; // 0x40
	::KCMIFNGABDC_1<::System::Single>* JHHBNDJHKND; // 0x48
	::KCMIFNGABDC_1<::System::Single>* POCJAGDJAPH; // 0x50
	::KCMIFNGABDC_1<::System::Single>* AOENPDHJJMM; // 0x58
	::KCMIFNGABDC_1<::System::Int32>* EALJNEOHDHM; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNPCCOBLLI__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + OGNPCCOBLLI_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNPCCOBLLI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OGNPCCOBLLI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + OGNPCCOBLLI_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNPCCOBLLI_GDEOPIBNOIN_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 EGMJPLHJHGO(::UnityEngine::Vector3 CBKIACBDADI, ::UnityEngine::Vector3 FCNPOKNKMOD, ::UnityEngine::Vector3 GBNEMFIAEID)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OGNPCCOBLLI_EGMJPLHJHGO_OFFSET))(CBKIACBDADI, FCNPOKNKMOD, GBNEMFIAEID);
	}
};
