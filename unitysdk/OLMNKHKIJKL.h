#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MFHEIOBAEDI.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/NHEPPDKDPPD.h"

class AMLegIK;
class AMLegIK_AnimageDelegate;
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class AnimageComponent; }
template <typename T1, typename T2> class HKLENLLABEJ_2;
template <typename T> class OGBNPMJPGBC_1;

#define OLMNKHKIJKL_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xE161920)
#define OLMNKHKIJKL_IKBGMGEEFLP_OFFSET UNITYSDK_OFFSET(0xE161AE0)
#define OLMNKHKIJKL_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0xE161B40)
#define OLMNKHKIJKL_MAMAHDBPBDJ_OFFSET UNITYSDK_OFFSET(0xE161A80)
#define OLMNKHKIJKL_MCOIAOKDIFP_OFFSET UNITYSDK_OFFSET(0xE161A10)
#define OLMNKHKIJKL_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0xE161BD0)
#define OLMNKHKIJKL_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xE161060)
#define OLMNKHKIJKL__CCTOR_OFFSET UNITYSDK_OFFSET(0xE161970)
#define OLMNKHKIJKL__CTOR_OFFSET UNITYSDK_OFFSET(0xE1619F0)

inline static constexpr unsigned int OLMNKHKIJKL_TypeDefinitionIndex = 76608;

class OLMNKHKIJKL : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x9F; // 0x0
	::Il2CppArray<::AMLegIK*>* EGMFOOMPBKE; // 0x48
	::System::Action* ODHIDMDECLI; // 0x50
	::Il2CppArray<::HKLENLLABEJ_2<::NHEPPDKDPPD, ::MFHEIOBAEDI>*>* JEJIBPJNLEP; // 0x58
	::HKLENLLABEJ_2<::NHEPPDKDPPD, ::MFHEIOBAEDI>* NHIHHHDIGOJ; // 0x60
	::UnityEngine::AnimageComponent* EEFAOLEPGGM; // 0x68
	::OGBNPMJPGBC_1<::System::String*>* PMHKHIPMGFC; // 0x70
	::AMLegIK* GPDCNCGONKG; // 0x78
	::Il2CppArray<::AMLegIK*>* ABOEGICCPBM; // 0x80
	::AMLegIK_AnimageDelegate* IAHJHFOMIIP; // 0x88
	::Il2CppArray<::System::Boolean>* DFMDOILJDOF; // 0x90
	::System::Action* HCJGGHLFKKE; // 0x98
	::System::Boolean FBMOIAGIKJF; // 0xA0
	::System::Boolean DMMEDENCODF; // 0xA1
	::System::Byte _padding0[0x2];
	::Foundation::Coroutine::CoroutineHandle BLAHOFCCPPL; // 0xA4
	::System::Boolean AHEAEIMIJJK; // 0xA8
	::System::Boolean NBKGPBEBFAK; // 0xA9
	::System::Boolean EODGGCCOFCL; // 0xAA

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLMNKHKIJKL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLMNKHKIJKL__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLMNKHKIJKL_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLMNKHKIJKL_GETCLASSID_OFFSET))(this);
	}

	::System::String* MCOIAOKDIFP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLMNKHKIJKL_MCOIAOKDIFP_OFFSET))(this);
	}

	::System::Boolean MAMAHDBPBDJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OLMNKHKIJKL_MAMAHDBPBDJ_OFFSET))(this);
	}

	::System::Boolean IKBGMGEEFLP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OLMNKHKIJKL_IKBGMGEEFLP_OFFSET))(this);
	}

	static ::OLMNKHKIJKL* JFDOOELFAOA()
	{
		return ((::OLMNKHKIJKL*(*)())((::PBYTE)hIl2Cpp + OLMNKHKIJKL_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLMNKHKIJKL_MEFBHFEOKGH_OFFSET))(this);
	}
};
