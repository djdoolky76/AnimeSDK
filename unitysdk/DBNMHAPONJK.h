#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DBNMHAPONJK_CADMAMFIOIE_OFFSET UNITYSDK_OFFSET(0x13E32500)
#define DBNMHAPONJK_GNGHBJGIBLP_OFFSET UNITYSDK_OFFSET(0x13E324B0)
#define DBNMHAPONJK_HBDAKDMFDAK_OFFSET UNITYSDK_OFFSET(0x13E32470)
#define DBNMHAPONJK_OBBPBBMKJHO_OFFSET UNITYSDK_OFFSET(0x13E323D0)
#define DBNMHAPONJK_OCPJCFAOFKP_OFFSET UNITYSDK_OFFSET(0x13E323C0)
#define DBNMHAPONJK__CTOR_OFFSET UNITYSDK_OFFSET(0x13E32330)

inline static constexpr unsigned int DBNMHAPONJK_TypeDefinitionIndex = 67078;

class DBNMHAPONJK : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* HMJJNKDNDDD; // 0x10
	::System::String* EGEGIMGMJHN; // 0x18
	::System::UInt32 _AIAHFFHDECE_k__BackingField; // 0x20

	::System::Void _ctor(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DBNMHAPONJK__CTOR_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OCPJCFAOFKP(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBNMHAPONJK_OCPJCFAOFKP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OBBPBBMKJHO(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DBNMHAPONJK_OBBPBBMKJHO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* HBDAKDMFDAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNMHAPONJK_HBDAKDMFDAK_OFFSET))(this);
	}

	::System::Void GNGHBJGIBLP(::System::UInt32 JDLDDJLMABJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBNMHAPONJK_GNGHBJGIBLP_OFFSET))(this, JDLDDJLMABJ);
	}

	::System::UInt32 CADMAMFIOIE()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNMHAPONJK_CADMAMFIOIE_OFFSET))(this);
	}
};
