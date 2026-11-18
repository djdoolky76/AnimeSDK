#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"
#include "unitysdk/UnityEngine/LayerMask.h"

class GIGFDLPMNND;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CCACHJICOBI_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x14781F20)
#define CCACHJICOBI_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x147823A0)
#define CCACHJICOBI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x14782140)
#define CCACHJICOBI__CTOR_OFFSET UNITYSDK_OFFSET(0x14782090)

inline static constexpr unsigned int CCACHJICOBI_TypeDefinitionIndex = 77850;

class CCACHJICOBI : public ::PKMJPMFCNBK
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* NGOJLJIJEJB; // 0x80
	::System::Collections::Generic::HashSet_1<::System::Int32>* LBJEKLPPNLP; // 0x88
	::GIGFDLPMNND* NLNNFINONOI; // 0x90
	::Il2CppArray<::UnityEngine::Collider*>* CMMOKEECOJB; // 0x98
	::System::Boolean CHFKPNGBDON; // 0xA0
	::System::Boolean MNEGFKOJBOM; // 0xA1
	::System::Byte _padding0[0x2];
	::UnityEngine::LayerMask GEPKLJMLACN; // 0xA4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCACHJICOBI__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCACHJICOBI_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCACHJICOBI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCACHJICOBI_KHJELIBOECB_OFFSET))(this);
	}
};
