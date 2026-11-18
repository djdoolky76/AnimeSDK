#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HPPLDKIOIBD;
class LNDDPNGIGJE;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MBCEALDIBEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16C6F2F0)
#define MBCEALDIBEL_GJJLAGAEMPG_OFFSET UNITYSDK_OFFSET(0x16C6F3A0)
#define MBCEALDIBEL_LHKHECIMDJK_OFFSET UNITYSDK_OFFSET(0x16C6F3B0)
#define MBCEALDIBEL__CTOR_OFFSET UNITYSDK_OFFSET(0x16C6F250)

inline static constexpr unsigned int MBCEALDIBEL_TypeDefinitionIndex = 86265;

class MBCEALDIBEL : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::HPPLDKIOIBD*>* DIAGBPLMEOJ; // 0x10
	::LNDDPNGIGJE* _HAIBIFBGNPE_k__BackingField; // 0x18

	::System::Void _ctor(::LNDDPNGIGJE* ODEGGOECOOG)
	{
		return ((::System::Void(*)(::PVOID, ::LNDDPNGIGJE*))((::PBYTE)hIl2Cpp + MBCEALDIBEL__CTOR_OFFSET))(this, ODEGGOECOOG);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBCEALDIBEL_DISPOSE_OFFSET))(this);
	}

	::System::Void GJJLAGAEMPG(::LNDDPNGIGJE* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LNDDPNGIGJE*))((::PBYTE)hIl2Cpp + MBCEALDIBEL_GJJLAGAEMPG_OFFSET))(this, EGEGIMGMJHN);
	}

	::LNDDPNGIGJE* LHKHECIMDJK()
	{
		return ((::LNDDPNGIGJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBCEALDIBEL_LHKHECIMDJK_OFFSET))(this);
	}
};
