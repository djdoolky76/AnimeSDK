#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGIIMNHGEPG.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CFPEMKFFOGB_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x1478E1B0)
#define CFPEMKFFOGB_ONEMDJLHENJ_OFFSET UNITYSDK_OFFSET(0x1478E400)
#define CFPEMKFFOGB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1478E120)

inline static constexpr unsigned int CFPEMKFFOGB_TypeDefinitionIndex = 64493;

class CFPEMKFFOGB : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_KKHOIBKGGFO()
	{
		return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CFPEMKFFOGB_TypeDefinitionIndex)->GetStaticField(0x47C10);
	}
	static ::System::Boolean* StaticGet_EMGJKMFNLMH()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CFPEMKFFOGB_TypeDefinitionIndex)->GetStaticField(0x108D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFPEMKFFOGB__CCTOR_OFFSET))();
	}

	static ::System::Void KKFNPONHGEM(::System::Int32 COMDNFILAIC, ::System::Int32 KNJOHKJLEGO, ::System::Int32 KCNOHOOPNAH, ::System::Int32 APJGHNMKNDK, ::IGIIMNHGEPG FAMMCEJDLFE)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::IGIIMNHGEPG))((::PBYTE)hIl2Cpp + CFPEMKFFOGB_KKFNPONHGEM_OFFSET))(COMDNFILAIC, KNJOHKJLEGO, KCNOHOOPNAH, APJGHNMKNDK, FAMMCEJDLFE);
	}

	static ::System::Void ONEMDJLHENJ(::System::EventArgs* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::System::EventArgs*))((::PBYTE)hIl2Cpp + CFPEMKFFOGB_ONEMDJLHENJ_OFFSET))(PIIPCLCCOIG);
	}
};
