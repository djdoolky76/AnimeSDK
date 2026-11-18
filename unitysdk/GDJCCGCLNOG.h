#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGINGHECLHH.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/OGKBNNNOOMA.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GDJCCGCLNOG_JIAEILDPGHD_OFFSET UNITYSDK_OFFSET(0x15A7FC40)
#define GDJCCGCLNOG_MDOMBJLAIIP_OFFSET UNITYSDK_OFFSET(0x15A7FA90)
#define GDJCCGCLNOG__CTOR_OFFSET UNITYSDK_OFFSET(0x15A7FA60)

inline static constexpr unsigned int GDJCCGCLNOG_TypeDefinitionIndex = 10087;

class GDJCCGCLNOG : public ::AGINGHECLHH
{
public:
	::System::Boolean GMPNLMPPJLE; // 0x98
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 OHHIEMACNPA; // 0x9C

	::System::Void _ctor(::OGKBNNNOOMA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OGKBNNNOOMA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GDJCCGCLNOG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	static ::System::Collections::Generic::List_1<::System::String*>* MDOMBJLAIIP(::System::String* KHGFAKJKDGG)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + GDJCCGCLNOG_MDOMBJLAIIP_OFFSET))(KHGFAKJKDGG);
	}

	::UnityEngine::Vector3 JIAEILDPGHD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJCCGCLNOG_JIAEILDPGHD_OFFSET))(this);
	}
};
