#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HEGAEGBJJBF_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x17E3F330)
#define HEGAEGBJJBF_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x17E3F490)
#define HEGAEGBJJBF_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x17E3F590)
#define HEGAEGBJJBF_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x17E3F220)
#define HEGAEGBJJBF__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E3F380)
#define HEGAEGBJJBF__CTOR_OFFSET UNITYSDK_OFFSET(0x17E3F400)

inline static constexpr unsigned int HEGAEGBJJBF_TypeDefinitionIndex = 61302;

class HEGAEGBJJBF : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x29; // 0x0
	::System::String* BIEDEFCGJHP; // 0x48
	::System::Collections::Generic::List_1<::System::Tuple_2<::System::Single, ::System::Single>*>* IOEBADMFMAK; // 0x50
	::System::Action* EJGDHCIBCJH; // 0x58
	::System::Action_1<::System::Boolean>* FBGHCCDCJNG; // 0x60
	::System::Single IANLNEBCKMF; // 0x68
	::System::Single FFDKPJBLCKN; // 0x6C
	::System::Boolean KBIACFFJADP; // 0x70
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 EIBMPACMGCM; // 0x74
	::UnityEngine::Vector3 GLGOOKBDEOK; // 0x80
	::System::Single NOIIJHIALKK; // 0x8C
	::System::Single ALABOCCGFGE; // 0x90
	::System::Single BEHJDKCKAPA; // 0x94
	::System::Single CPBHJPMJCJL; // 0x98
	::UnityEngine::Vector3 BHFAGMPDIGJ; // 0x9C
	::System::Single KLGIKOEMCND; // 0xA8
	::System::Single AKJPGDGGAHC; // 0xAC
	::System::Single BEGKNHAIFEA; // 0xB0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEGAEGBJJBF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGAEGBJJBF__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGAEGBJJBF_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGAEGBJJBF_GETCLASSID_OFFSET))(this);
	}

	static ::HEGAEGBJJBF* JFDOOELFAOA()
	{
		return ((::HEGAEGBJJBF*(*)())((::PBYTE)hIl2Cpp + HEGAEGBJJBF_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGAEGBJJBF_MEFBHFEOKGH_OFFSET))(this);
	}
};
