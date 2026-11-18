#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/FixedArray8_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AEMCAOEICDG;
class EHKKPCGAJHO;
class PLNFNMOHHLI;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class GameObject; }

#define GOHCHNNDBDP_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x149E3270)
#define GOHCHNNDBDP_MBKDOMFJFIG_OFFSET UNITYSDK_OFFSET(0x149F0A70)
#define GOHCHNNDBDP_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x149F0B10)
#define GOHCHNNDBDP__CTOR_OFFSET UNITYSDK_OFFSET(0x149F0A60)

inline static constexpr unsigned int GOHCHNNDBDP_TypeDefinitionIndex = 71055;

class GOHCHNNDBDP : public ::System::Object
{
public:
	::UnityEngine::GameObject* LHBKKKNGDIC; // 0x10
	::PLNFNMOHHLI* HGDMBHDKFPK; // 0x18
	::System::Action_1<::MoleMole::Battle::Entity*>* PHJPJEMEPDA; // 0x20
	::UnityEngine::GameObject* HGMNJHGHBNH; // 0x28
	::UnityEngine::AsyncOperation* OPNHFPJHINB; // 0x30
	::EHKKPCGAJHO* POBADKEDFOE; // 0x38
	::AEMCAOEICDG* OHPJHPEOFLD; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>* NKODKKFJLFH; // 0x48
	::Foundation::AssetRequestHandle MCGBKONKGFM; // 0x50
	::UnityEngine::Vector3 BMJEHFHBJFP; // 0x70
	::Foundation::FixedArray8_1<::System::Single> OPHANCMLODB; // 0x7C
	::System::Byte _padding0[0x18];
	::Foundation::FixedArray8_1<::System::Single> JBFAJFNGNIP; // 0x9C
	::System::Byte _padding1[0x18];
	::UnityEngine::Vector3 APAIHJHKLBI; // 0xBC
	::System::Boolean BMOBFIFMNDM; // 0xC8
	::System::Boolean PDLNCLINHEA; // 0xC9
	::System::Boolean ADIFLACJBFN; // 0xCA
	::System::Boolean GJLDGAAGGNJ; // 0xCB
	::UnityEngine::Quaternion OBNECAMEKCI; // 0xCC
	::System::UInt32 IHOGBGICBEP; // 0xDC
	::Foundation::FixedArray8_1<::System::Double> KDPHAJJFGEN; // 0xE0
	::System::Byte _padding2[0x38];
	::System::UInt32 GJGFAOOHNOA; // 0x120
	::System::Boolean OJEPJHOBOFB; // 0x124
	::System::Boolean PMEHAIPBHNN; // 0x125

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHCHNNDBDP__CTOR_OFFSET))(this);
	}

	static ::GOHCHNNDBDP* BBPCBEEHALC()
	{
		return ((::GOHCHNNDBDP*(*)())((::PBYTE)hIl2Cpp + GOHCHNNDBDP_BBPCBEEHALC_OFFSET))();
	}

	static ::System::Void MBKDOMFJFIG(::GOHCHNNDBDP* IPMMCGDMODG)
	{
		return ((::System::Void(*)(::GOHCHNNDBDP*))((::PBYTE)hIl2Cpp + GOHCHNNDBDP_MBKDOMFJFIG_OFFSET))(IPMMCGDMODG);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHCHNNDBDP_NPOLNFDBOOD_OFFSET))(this);
	}
};
