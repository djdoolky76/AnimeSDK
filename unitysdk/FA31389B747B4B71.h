#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/FC87496F284D4590.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FA31389B747B4B71_E40943B64A22EEC0_OFFSET UNITYSDK_OFFSET(0x21BD600)
#define FA31389B747B4B71_FF7565765CCB968D_OFFSET UNITYSDK_OFFSET(0x21BD800)
#define FA31389B747B4B71__CCTOR_OFFSET UNITYSDK_OFFSET(0x21BD710)
#define FA31389B747B4B71__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FA31389B747B4B71_TypeDefinitionIndex = 8908;

class FA31389B747B4B71 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::FC87496F284D4590, ::System::Type*>** StaticGet_A0B485798D57E84B()
	{
		return (::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::FC87496F284D4590, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(FA31389B747B4B71_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FA31389B747B4B71__CCTOR_OFFSET))();
	}

	static ::System::Type* E40943B64A22EEC0(::E68AA4EB51923C98::FC87496F284D4590 A288CB28FC2A6DA3)
	{
		return ((::System::Type*(*)(::E68AA4EB51923C98::FC87496F284D4590))((::PBYTE)hIl2Cpp + FA31389B747B4B71_E40943B64A22EEC0_OFFSET))(A288CB28FC2A6DA3);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FA31389B747B4B71__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::FC87496F284D4590, ::System::Type*>* FF7565765CCB968D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::FC87496F284D4590, ::System::Type*>*(*)())((::PBYTE)hIl2Cpp + FA31389B747B4B71_FF7565765CCB968D_OFFSET))();
	}
};
