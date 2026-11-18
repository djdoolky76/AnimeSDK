#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PPADOFBOMDD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ICELIBNKEGA_CJBFCLMFDOM_OFFSET UNITYSDK_OFFSET(0x16103260)
#define ICELIBNKEGA_EHLBLCOKOMA_OFFSET UNITYSDK_OFFSET(0x16103330)
#define ICELIBNKEGA_IIKDJHLGGIL_OFFSET UNITYSDK_OFFSET(0x16103270)
#define ICELIBNKEGA_JHHOBCNDMBD_OFFSET UNITYSDK_OFFSET(0x16103280)
#define ICELIBNKEGA_OONGAJHAICN_OFFSET UNITYSDK_OFFSET(0x16103440)
#define ICELIBNKEGA__CTOR_OFFSET UNITYSDK_OFFSET(0x161031D0)

inline static constexpr unsigned int ICELIBNKEGA_TypeDefinitionIndex = 14274;

class ICELIBNKEGA : public ::System::Object
{
public:
	::PPADOFBOMDD* _DEJNOJBAFDE_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::PPADOFBOMDD*>* EOHNCLCMPGL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICELIBNKEGA__CTOR_OFFSET))(this);
	}

	::PPADOFBOMDD* CJBFCLMFDOM()
	{
		return ((::PPADOFBOMDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICELIBNKEGA_CJBFCLMFDOM_OFFSET))(this);
	}

	::System::Void IIKDJHLGGIL(::PPADOFBOMDD* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::PPADOFBOMDD*))((::PBYTE)hIl2Cpp + ICELIBNKEGA_IIKDJHLGGIL_OFFSET))(this, EGEGIMGMJHN);
	}

	::PPADOFBOMDD* JHHOBCNDMBD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PPADOFBOMDD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICELIBNKEGA_JHHOBCNDMBD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void EHLBLCOKOMA(::PPADOFBOMDD* LHOCIDNDOFE)
	{
		return ((::System::Void(*)(::PVOID, ::PPADOFBOMDD*))((::PBYTE)hIl2Cpp + ICELIBNKEGA_EHLBLCOKOMA_OFFSET))(this, LHOCIDNDOFE);
	}

	::System::Void OONGAJHAICN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICELIBNKEGA_OONGAJHAICN_OFFSET))(this);
	}
};
