#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define KMHDIJGOAAA_CDGHHDFCBHK_OFFSET UNITYSDK_OFFSET(0x15308410)
#define KMHDIJGOAAA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x15307E40)
#define KMHDIJGOAAA_IJLPBCLMMPE_OFFSET UNITYSDK_OFFSET(0x15307F70)
#define KMHDIJGOAAA_JEJDKEOGNIN_OFFSET UNITYSDK_OFFSET(0x15307DC0)
#define KMHDIJGOAAA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x15307E00)
#define KMHDIJGOAAA__CTOR_OFFSET UNITYSDK_OFFSET(0x15307EE0)

inline static constexpr unsigned int KMHDIJGOAAA_TypeDefinitionIndex = 14473;

class KMHDIJGOAAA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHDIJGOAAA__CTOR_OFFSET))(this);
	}

	::System::String* JEJDKEOGNIN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHDIJGOAAA_JEJDKEOGNIN_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHDIJGOAAA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KMHDIJGOAAA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::String* IJLPBCLMMPE(::System::String* JAOIHBNAKMM)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KMHDIJGOAAA_IJLPBCLMMPE_OFFSET))(this, JAOIHBNAKMM);
	}

	::System::Nullable_1<::System::Object*> CDGHHDFCBHK(::System::String* JAOIHBNAKMM, ::System::String* GDLOCGDAJGL)
	{
		return ((::System::Nullable_1<::System::Object*>(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + KMHDIJGOAAA_CDGHHDFCBHK_OFFSET))(this, JAOIHBNAKMM, GDLOCGDAJGL);
	}
};
