#pragma once
#include "unitysdk/unitysdk.h"

class HIOOPDMDJBC;
class IAAHGDFHCNB_EEMKELNEMJD;
namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AAILCDOANGE_CREATEOP_OFFSET UNITYSDK_OFFSET(0x17DB8D30)
#define AAILCDOANGE_EGDMFJFELBM_OFFSET UNITYSDK_OFFSET(0x17DB8E50)
#define AAILCDOANGE_HOEPJPJODKF_OFFSET UNITYSDK_OFFSET(0x17DB90B0)
#define AAILCDOANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x17DB8CA0)

inline static constexpr unsigned int AAILCDOANGE_TypeDefinitionIndex = 61231;

class AAILCDOANGE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAILCDOANGE__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Object*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAILCDOANGE_CREATEOP_OFFSET))(this);
	}

	static ::System::Void EGDMFJFELBM(::IAAHGDFHCNB_EEMKELNEMJD* NGGNKKAMDGH, ::System::Collections::Generic::List_1<::System::UInt32>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::IAAHGDFHCNB_EEMKELNEMJD*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + AAILCDOANGE_EGDMFJFELBM_OFFSET))(NGGNKKAMDGH, LJBPECKCCEA);
	}

	static ::IAAHGDFHCNB_EEMKELNEMJD* HOEPJPJODKF(::HIOOPDMDJBC* FKDAHCPNEBI)
	{
		return ((::IAAHGDFHCNB_EEMKELNEMJD*(*)(::HIOOPDMDJBC*))((::PBYTE)hIl2Cpp + AAILCDOANGE_HOEPJPJODKF_OFFSET))(FKDAHCPNEBI);
	}
};
