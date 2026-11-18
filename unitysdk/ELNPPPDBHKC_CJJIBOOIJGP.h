#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EFNFAOBLNAE;
class ELNPPPDBHKC;
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define ELNPPPDBHKC_CJJIBOOIJGP_DFDOFFIHLDD_OFFSET UNITYSDK_OFFSET(0x11CB7870)
#define ELNPPPDBHKC_CJJIBOOIJGP_KJOPIEGKBDJ_OFFSET UNITYSDK_OFFSET(0x11CB7A10)
#define ELNPPPDBHKC_CJJIBOOIJGP__CTOR_OFFSET UNITYSDK_OFFSET(0x11CB7860)

inline static constexpr unsigned int ELNPPPDBHKC_CJJIBOOIJGP_TypeDefinitionIndex = 48235;

class ELNPPPDBHKC_CJJIBOOIJGP : public ::System::Object
{
public:
	::System::Action_1<::System::Exception*>* KAKAEMACNPB; // 0x10
	::ELNPPPDBHKC* AFKKKJKJEIC; // 0x18
	::Il2CppArray<::System::Single>* PMGFIHJAJHL; // 0x20
	::System::Int32 EHGKAFFGGJF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_CJJIBOOIJGP__CTOR_OFFSET))(this);
	}

	::System::Void DFDOFFIHLDD(::EFNFAOBLNAE* LGBLDAMKBPM, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::EFNFAOBLNAE*, ::System::Int32))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_CJJIBOOIJGP_DFDOFFIHLDD_OFFSET))(this, LGBLDAMKBPM, ABHBKFJKINO);
	}

	::System::Void KJOPIEGKBDJ(::System::Exception* KMDHKNFMCAE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_CJJIBOOIJGP_KJOPIEGKBDJ_OFFSET))(this, KMDHKNFMCAE);
	}
};
