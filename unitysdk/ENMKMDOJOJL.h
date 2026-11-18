#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENMKMDOJOJL_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x17453210)
#define ENMKMDOJOJL_EJOOJFBOHDB_OFFSET UNITYSDK_OFFSET(0x17453470)
#define ENMKMDOJOJL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17453340)
#define ENMKMDOJOJL_JEJDKEOGNIN_OFFSET UNITYSDK_OFFSET(0x17453190)
#define ENMKMDOJOJL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x174531D0)
#define ENMKMDOJOJL__CTOR_OFFSET UNITYSDK_OFFSET(0x174533E0)

inline static constexpr unsigned int ENMKMDOJOJL_TypeDefinitionIndex = 16220;

class ENMKMDOJOJL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENMKMDOJOJL__CTOR_OFFSET))(this);
	}

	::System::String* JEJDKEOGNIN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENMKMDOJOJL_JEJDKEOGNIN_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENMKMDOJOJL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ENMKMDOJOJL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Collections::Generic::List_1<::System::String*>* EJOOJFBOHDB()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENMKMDOJOJL_EJOOJFBOHDB_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENMKMDOJOJL_BBOMJDBNHIC_OFFSET))(this);
	}
};
