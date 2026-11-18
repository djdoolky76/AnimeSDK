#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHCAHMCCPML.h"
#include "unitysdk/System/Object.h"

class KOPLGEFDECB;

#define KOPLGEFDECB_CCAFPGMFLNI_HBPLINHBFFK_OFFSET UNITYSDK_OFFSET(0x1682FC50)
#define KOPLGEFDECB_CCAFPGMFLNI_JINCFIGEAKM_OFFSET UNITYSDK_OFFSET(0x1682FB20)
#define KOPLGEFDECB_CCAFPGMFLNI_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x1682FB90)
#define KOPLGEFDECB_CCAFPGMFLNI__CTOR_OFFSET UNITYSDK_OFFSET(0x1682FA40)

inline static constexpr unsigned int KOPLGEFDECB_CCAFPGMFLNI_TypeDefinitionIndex = 80616;

class KOPLGEFDECB_CCAFPGMFLNI : public ::System::Object
{
public:
	::GHCAHMCCPML LFCBPMCGEAA; // 0x10
	::System::UInt32 JPKOFLDFLOA; // 0x14
	::System::Boolean GCGACJCIHFC; // 0x18
	::System::Boolean GLBGCDCNKLE; // 0x19
	::System::Byte _padding0[0x6];
	::System::Int64 PLOCEKIHBNC; // 0x20

	::System::Void _ctor(::System::Boolean GOLKCMNBOBB, ::System::UInt32 AAKJHAIPKKF, ::System::Boolean CGIECFBAANF, ::System::UInt32 FDHDNMBNIPE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + KOPLGEFDECB_CCAFPGMFLNI__CTOR_OFFSET))(this, GOLKCMNBOBB, AAKJHAIPKKF, CGIECFBAANF, FDHDNMBNIPE);
	}

	::System::Void JINCFIGEAKM(::KOPLGEFDECB* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::KOPLGEFDECB*))((::PBYTE)hIl2Cpp + KOPLGEFDECB_CCAFPGMFLNI_JINCFIGEAKM_OFFSET))(this, AMNIHACKELI);
	}

	::System::Void PLPONJAKNEB(::KOPLGEFDECB* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::KOPLGEFDECB*))((::PBYTE)hIl2Cpp + KOPLGEFDECB_CCAFPGMFLNI_PLPONJAKNEB_OFFSET))(this, AMNIHACKELI);
	}

	::System::Void HBPLINHBFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOPLGEFDECB_CCAFPGMFLNI_HBPLINHBFFK_OFFSET))(this);
	}
};
