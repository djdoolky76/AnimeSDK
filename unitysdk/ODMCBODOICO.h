#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class FOLOGHLENFB;
class MFIEFBBOAPH;
namespace Share { class CRandom; }
namespace System { class String; }

#define ODMCBODOICO_MPNBFJLHEIH_OFFSET UNITYSDK_OFFSET(0x1CFF7FC0)
#define ODMCBODOICO_PBCFLINMKMC_OFFSET UNITYSDK_OFFSET(0x1CFF8450)
#define ODMCBODOICO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF7FB0)

inline static constexpr unsigned int ODMCBODOICO_TypeDefinitionIndex = 10708;

class ODMCBODOICO : public ::System::Object
{
public:
	::Il2CppArray<::MFIEFBBOAPH*>* KIFMGOBJPNG; // 0x10

	::System::Void _ctor(::Il2CppArray<::MFIEFBBOAPH*>* NHDOLPNHFNL)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MFIEFBBOAPH*>*))((::PBYTE)hIl2Cpp + ODMCBODOICO__CTOR_OFFSET))(this, NHDOLPNHFNL);
	}

	::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::FOLOGHLENFB*, ::System::Int32>>* MPNBFJLHEIH(::Share::CRandom* LCEJHCFADCH)
	{
		return ((::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::FOLOGHLENFB*, ::System::Int32>>*(*)(::PVOID, ::Share::CRandom*))((::PBYTE)hIl2Cpp + ODMCBODOICO_MPNBFJLHEIH_OFFSET))(this, LCEJHCFADCH);
	}

	static ::ODMCBODOICO* PBCFLINMKMC(::System::String* EMCJPKMNNLG)
	{
		return ((::ODMCBODOICO*(*)(::System::String*))((::PBYTE)hIl2Cpp + ODMCBODOICO_PBCFLINMKMC_OFFSET))(EMCJPKMNNLG);
	}
};
