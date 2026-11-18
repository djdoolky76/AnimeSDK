#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PMJGFLIMNPB.h"
#include "unitysdk/System/Object.h"

class COAKKJJNKCM;
class EGKOJHLOKBM;
class EKOMAFPIPMA_DKCFBCFGADG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OIGBHACJLFF_GAHLNMDMKFD_OFFSET UNITYSDK_OFFSET(0x14F7FF40)
#define OIGBHACJLFF_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x14F7FF50)
#define OIGBHACJLFF_JLIMOLHLFAK_OFFSET UNITYSDK_OFFSET(0x14F7FF70)
#define OIGBHACJLFF_OPAMKIPAPHE_OFFSET UNITYSDK_OFFSET(0x14F80270)
#define OIGBHACJLFF_PHAELKNCPLK_OFFSET UNITYSDK_OFFSET(0x14F7FF60)
#define OIGBHACJLFF_RESET_OFFSET UNITYSDK_OFFSET(0x14F7FFC0)
#define OIGBHACJLFF_RESTOREPARAS_OFFSET UNITYSDK_OFFSET(0x14F800E0)
#define OIGBHACJLFF__CTOR_OFFSET UNITYSDK_OFFSET(0x14F801F0)

inline static constexpr unsigned int OIGBHACJLFF_TypeDefinitionIndex = 57947;

class OIGBHACJLFF : public ::System::Object
{
public:
	::EGKOJHLOKBM* IGMLHENCEAL; // 0x10
	::System::Collections::Generic::List_1<::COAKKJJNKCM*>* GMJFOMBALNN; // 0x18
	::COAKKJJNKCM* _IJNLLIGGGPM_k__BackingField; // 0x20
	::System::Boolean JDFMJFOFEFE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGBHACJLFF__CTOR_OFFSET))(this);
	}

	::COAKKJJNKCM* GAHLNMDMKFD()
	{
		return ((::COAKKJJNKCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGBHACJLFF_GAHLNMDMKFD_OFFSET))(this);
	}

	::PMJGFLIMNPB get_Type()
	{
		return ((::PMJGFLIMNPB(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGBHACJLFF_GET_TYPE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::COAKKJJNKCM*>* PHAELKNCPLK()
	{
		return ((::System::Collections::Generic::List_1<::COAKKJJNKCM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGBHACJLFF_PHAELKNCPLK_OFFSET))(this);
	}

	::System::Void JLIMOLHLFAK(::EKOMAFPIPMA_DKCFBCFGADG* HNOPAJLDCFB)
	{
		return ((::System::Void(*)(::PVOID, ::EKOMAFPIPMA_DKCFBCFGADG*))((::PBYTE)hIl2Cpp + OIGBHACJLFF_JLIMOLHLFAK_OFFSET))(this, HNOPAJLDCFB);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGBHACJLFF_RESET_OFFSET))(this);
	}

	::EKOMAFPIPMA_DKCFBCFGADG* RestoreParas()
	{
		return ((::EKOMAFPIPMA_DKCFBCFGADG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGBHACJLFF_RESTOREPARAS_OFFSET))(this);
	}

	::System::Void OPAMKIPAPHE(::COAKKJJNKCM* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::COAKKJJNKCM*))((::PBYTE)hIl2Cpp + OIGBHACJLFF_OPAMKIPAPHE_OFFSET))(this, EGEGIMGMJHN);
	}
};
