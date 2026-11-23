#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FA78B0257AA80CDE/E830A69E20A5698D.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FD57300206A7CE1C_AD72BD2BEE48068B_OFFSET UNITYSDK_OFFSET(0x38952E0)
#define FD57300206A7CE1C_B6A4D385D7EB3E1A_OFFSET UNITYSDK_OFFSET(0x38951F0)
#define FD57300206A7CE1C_BF3F689C77D69CD5_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define FD57300206A7CE1C_E5D4C3C2C9DF5744_OFFSET UNITYSDK_OFFSET(0x3894F70)
#define FD57300206A7CE1C_F2DB47D28D600A28_OFFSET UNITYSDK_OFFSET(0x38950C0)
#define FD57300206A7CE1C_FAA79BF401A44CB6_OFFSET UNITYSDK_OFFSET(0x3895060)
#define FD57300206A7CE1C__CCTOR_OFFSET UNITYSDK_OFFSET(0x38954E0)
#define FD57300206A7CE1C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FD57300206A7CE1C_TypeDefinitionIndex = 18126;

class FD57300206A7CE1C : public ::System::Object
{
public:
	static ::System::Void B6A4D385D7EB3E1A(::System::String* B75B012A46A5B31F)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FD57300206A7CE1C_B6A4D385D7EB3E1A_OFFSET))(B75B012A46A5B31F);
	}

	static ::FA78B0257AA80CDE::E830A69E20A5698D F2DB47D28D600A28()
	{
		return ((::FA78B0257AA80CDE::E830A69E20A5698D(*)())((::PBYTE)hIl2Cpp + FD57300206A7CE1C_F2DB47D28D600A28_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::String*>* FAA79BF401A44CB6()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + FD57300206A7CE1C_FAA79BF401A44CB6_OFFSET))();
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FD57300206A7CE1C__CCTOR_OFFSET))();
	}

	static ::System::Void E5D4C3C2C9DF5744(::System::String* B75B012A46A5B31F)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FD57300206A7CE1C_E5D4C3C2C9DF5744_OFFSET))(B75B012A46A5B31F);
	}

	static ::System::Void AD72BD2BEE48068B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FD57300206A7CE1C_AD72BD2BEE48068B_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FD57300206A7CE1C__CTOR_OFFSET))(this);
	}

	static ::System::Void BF3F689C77D69CD5(::System::Collections::Generic::List_1<::System::String*>* F870CCC79CDA997F)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + FD57300206A7CE1C_BF3F689C77D69CD5_OFFSET))(F870CCC79CDA997F);
	}
};
