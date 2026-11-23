#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EC05B6FF03DB975D.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define EFDFD8D59E1B8215_CONTROLITEMJSON_F5628F8349D4A8A6_A541680ACD237E5B_OFFSET UNITYSDK_OFFSET(0x3FDA070)
#define EFDFD8D59E1B8215_CONTROLITEMJSON_F5628F8349D4A8A6_E1D67515C6E7EE61_OFFSET UNITYSDK_OFFSET(0x3FDA070)
#define EFDFD8D59E1B8215_CONTROLITEMJSON_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3FDA230)
#define EFDFD8D59E1B8215_CONTROLITEMJSON_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EFDFD8D59E1B8215_ControlItemJson_F5628F8349D4A8A6_TypeDefinitionIndex = 14396;

class EFDFD8D59E1B8215_ControlItemJson_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::EFDFD8D59E1B8215_ControlItemJson_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::EFDFD8D59E1B8215_ControlItemJson_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(EFDFD8D59E1B8215_ControlItemJson_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::System::String*, ::EC05B6FF03DB975D>** StaticGet_E9ECEFD236E8FFBC()
	{
		return (::System::Func_2<::System::String*, ::EC05B6FF03DB975D>**)Il2CppClass::FromTypeDefinitionIndex(EFDFD8D59E1B8215_ControlItemJson_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Func_2<::System::String*, ::EC05B6FF03DB975D>** StaticGet_E59D3D96EDFC10CF()
	{
		return (::System::Func_2<::System::String*, ::EC05B6FF03DB975D>**)Il2CppClass::FromTypeDefinitionIndex(EFDFD8D59E1B8215_ControlItemJson_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFDFD8D59E1B8215_CONTROLITEMJSON_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDFD8D59E1B8215_CONTROLITEMJSON_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::EC05B6FF03DB975D E1D67515C6E7EE61(::System::String* BB8C609F76620E45)
	{
		return ((::EC05B6FF03DB975D(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EFDFD8D59E1B8215_CONTROLITEMJSON_F5628F8349D4A8A6_E1D67515C6E7EE61_OFFSET))(this, BB8C609F76620E45);
	}

	::EC05B6FF03DB975D A541680ACD237E5B(::System::String* BB8C609F76620E45)
	{
		return ((::EC05B6FF03DB975D(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EFDFD8D59E1B8215_CONTROLITEMJSON_F5628F8349D4A8A6_A541680ACD237E5B_OFFSET))(this, BB8C609F76620E45);
	}
};
