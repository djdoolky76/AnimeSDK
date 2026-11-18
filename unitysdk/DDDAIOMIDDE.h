#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/PLNMMPNLILF.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DDDAIOMIDDE_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15362320)
#define DDDAIOMIDDE_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x15362400)
#define DDDAIOMIDDE_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x15362480)
#define DDDAIOMIDDE_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15362270)
#define DDDAIOMIDDE__CCTOR_OFFSET UNITYSDK_OFFSET(0x15362370)
#define DDDAIOMIDDE__CTOR_OFFSET UNITYSDK_OFFSET(0x153623F0)

inline static constexpr unsigned int DDDAIOMIDDE_TypeDefinitionIndex = 55645;

class DDDAIOMIDDE : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x8C; // 0x0
	::UnityEngine::LayerMask AAGFONPHLAH; // 0x48
	::PLNMMPNLILF OPKNOLHJLOP; // 0x4C
	::UnityEngine::Vector3 LMDLFABPKAJ; // 0x50
	::System::Single CMAGKICODDF; // 0x5C
	::System::Boolean JHELIACPCCO; // 0x60
	::System::Byte _padding0[0x3];
	::System::Single AFIKJAIPLNG; // 0x64

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDDAIOMIDDE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDAIOMIDDE__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDAIOMIDDE_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDAIOMIDDE_GETCLASSID_OFFSET))(this);
	}

	static ::DDDAIOMIDDE* JFDOOELFAOA()
	{
		return ((::DDDAIOMIDDE*(*)())((::PBYTE)hIl2Cpp + DDDAIOMIDDE_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDAIOMIDDE_MEFBHFEOKGH_OFFSET))(this);
	}
};
