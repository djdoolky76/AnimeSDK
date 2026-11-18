#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KKAEJOPKFMA_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1771E0A0)
#define KKAEJOPKFMA_NGIJFOBBLOF_OFFSET UNITYSDK_OFFSET(0x1771E1C0)
#define KKAEJOPKFMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1771E010)

inline static constexpr unsigned int KKAEJOPKFMA_TypeDefinitionIndex = 63389;

class KKAEJOPKFMA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKAEJOPKFMA__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKAEJOPKFMA_CREATEOP_OFFSET))(this);
	}

	static ::System::Void NGIJFOBBLOF(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* NNCADKDPDPB, ::System::String* DMKBGJMJELN, ::System::Collections::Generic::List_1<::System::String*>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + KKAEJOPKFMA_NGIJFOBBLOF_OFFSET))(NNCADKDPDPB, DMKBGJMJELN, LJBPECKCCEA);
	}
};
