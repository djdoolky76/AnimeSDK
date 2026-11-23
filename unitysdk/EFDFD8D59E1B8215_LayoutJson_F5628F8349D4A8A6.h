#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EC05B6FF03DB975D.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define EFDFD8D59E1B8215_LAYOUTJSON_F5628F8349D4A8A6_A33C24CD557187EE_OFFSET UNITYSDK_OFFSET(0x3FDA070)
#define EFDFD8D59E1B8215_LAYOUTJSON_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3FDA2A0)
#define EFDFD8D59E1B8215_LAYOUTJSON_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EFDFD8D59E1B8215_LayoutJson_F5628F8349D4A8A6_TypeDefinitionIndex = 14394;

class EFDFD8D59E1B8215_LayoutJson_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::EFDFD8D59E1B8215_LayoutJson_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::EFDFD8D59E1B8215_LayoutJson_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(EFDFD8D59E1B8215_LayoutJson_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::System::String*, ::EC05B6FF03DB975D>** StaticGet_E4AE7C6234D30C14()
	{
		return (::System::Func_2<::System::String*, ::EC05B6FF03DB975D>**)Il2CppClass::FromTypeDefinitionIndex(EFDFD8D59E1B8215_LayoutJson_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFDFD8D59E1B8215_LAYOUTJSON_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDFD8D59E1B8215_LAYOUTJSON_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::EC05B6FF03DB975D A33C24CD557187EE(::System::String* BB8C609F76620E45)
	{
		return ((::EC05B6FF03DB975D(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EFDFD8D59E1B8215_LAYOUTJSON_F5628F8349D4A8A6_A33C24CD557187EE_OFFSET))(this, BB8C609F76620E45);
	}
};
