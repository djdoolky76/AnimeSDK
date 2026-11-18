#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJKEGKLJPNE.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWindowController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }

#define FOEBJGMNILL_COFHOCIEHPD_OFFSET UNITYSDK_OFFSET(0x142B8020)
#define FOEBJGMNILL_DOKMKBKALAH_OFFSET UNITYSDK_OFFSET(0x142B7D40)
#define FOEBJGMNILL_FJGFIKMPJJP_OFFSET UNITYSDK_OFFSET(0x142B7F50)
#define FOEBJGMNILL_GFLELGEAEPC_OFFSET UNITYSDK_OFFSET(0x142B7F00)
#define FOEBJGMNILL_GJBKBNIMDFG_OFFSET UNITYSDK_OFFSET(0x142B7BE0)
#define FOEBJGMNILL_IDHMNDOFKBM_OFFSET UNITYSDK_OFFSET(0x142B7F60)
#define FOEBJGMNILL__CTOR_OFFSET UNITYSDK_OFFSET(0x142B7B00)

inline static constexpr unsigned int FOEBJGMNILL_TypeDefinitionIndex = 78280;

class FOEBJGMNILL : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* LFNJKLCBNPG; // 0x10
	::UnityEngine::GameObject* LANBPMAABPO; // 0x18
	::System::Boolean GKJMFCODABB; // 0x20
	::System::Byte _padding0[0x3];
	::System::Int32 PBAINBPJEDO; // 0x24

	::System::Void _ctor(::UnityEngine::GameObject* NEDIKFHNIPN, ::PJKEGKLJPNE DFOLAGMLFPB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::PJKEGKLJPNE))((::PBYTE)hIl2Cpp + FOEBJGMNILL__CTOR_OFFSET))(this, NEDIKFHNIPN, DFOLAGMLFPB);
	}

	::System::Void GJBKBNIMDFG(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + FOEBJGMNILL_GJBKBNIMDFG_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void DOKMKBKALAH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOEBJGMNILL_DOKMKBKALAH_OFFSET))(this);
	}

	::System::Void GFLELGEAEPC(::System::Boolean FBILHHBPEHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOEBJGMNILL_GFLELGEAEPC_OFFSET))(this, FBILHHBPEHD);
	}

	::System::Void FJGFIKMPJJP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOEBJGMNILL_FJGFIKMPJJP_OFFSET))(this);
	}

	::System::Void IDHMNDOFKBM(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + FOEBJGMNILL_IDHMNDOFKBM_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void COFHOCIEHPD(::MoleMole::UIWindowController* JNLBPMKIFNK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + FOEBJGMNILL_COFHOCIEHPD_OFFSET))(this, JNLBPMKIFNK);
	}
};
