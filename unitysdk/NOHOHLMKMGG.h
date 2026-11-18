#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/LayerMask.h"

class JCADHFOKIHK;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define NOHOHLMKMGG_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16B96D90)
#define NOHOHLMKMGG_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x16B96F40)
#define NOHOHLMKMGG_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x16B96EB0)
#define NOHOHLMKMGG_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x16B96B20)
#define NOHOHLMKMGG__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B96DE0)
#define NOHOHLMKMGG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B96E60)

inline static constexpr unsigned int NOHOHLMKMGG_TypeDefinitionIndex = 47823;

class NOHOHLMKMGG : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x58; // 0x0
	::JCADHFOKIHK* HPJOBCGAHAP; // 0x48
	::Il2CppArray<::UnityEngine::Collider*>* CMMOKEECOJB; // 0x50
	::System::Collections::Generic::HashSet_1<::System::Int32>* LBJEKLPPNLP; // 0x58
	::System::Collections::Generic::List_1<::System::Object*>* NGOJLJIJEJB; // 0x60
	::UnityEngine::LayerMask GEPKLJMLACN; // 0x68
	::System::Boolean MNEGFKOJBOM; // 0x6C
	::System::Boolean CHFKPNGBDON; // 0x6D

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOHOHLMKMGG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHOHLMKMGG__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHOHLMKMGG_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHOHLMKMGG_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHOHLMKMGG_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::NOHOHLMKMGG* JFDOOELFAOA()
	{
		return ((::NOHOHLMKMGG*(*)())((::PBYTE)hIl2Cpp + NOHOHLMKMGG_JFDOOELFAOA_OFFSET))();
	}
};
