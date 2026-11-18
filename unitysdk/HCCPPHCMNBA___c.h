#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KIPBNHIMABA;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define HCCPPHCMNBA___C_BNJLPDBFPOB_OFFSET UNITYSDK_OFFSET(0x14D0D7A0)
#define HCCPPHCMNBA___C_GIKAOBDHNOB_OFFSET UNITYSDK_OFFSET(0x14D0D920)
#define HCCPPHCMNBA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D0D750)
#define HCCPPHCMNBA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14D0D790)

inline static constexpr unsigned int HCCPPHCMNBA___c_TypeDefinitionIndex = 78849;

class HCCPPHCMNBA___c : public ::System::Object
{
public:
	static ::System::Action_2<::System::Boolean, ::KIPBNHIMABA*>** StaticGet___9__0_0()
	{
		return (::System::Action_2<::System::Boolean, ::KIPBNHIMABA*>**)Il2CppClass::FromTypeDefinitionIndex(HCCPPHCMNBA___c_TypeDefinitionIndex)->GetStaticField(0x31D50);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HCCPPHCMNBA___c_TypeDefinitionIndex)->GetStaticField(0x31D58);
	}
	static ::System::Action_3<::System::Int32, ::System::String*, ::System::String*>** StaticGet___9__5_0()
	{
		return (::System::Action_3<::System::Int32, ::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HCCPPHCMNBA___c_TypeDefinitionIndex)->GetStaticField(0x31D60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCCPPHCMNBA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCPPHCMNBA___C__CTOR_OFFSET))(this);
	}

	::System::Void BNJLPDBFPOB(::System::Boolean MBNOJBFDGHD, ::KIPBNHIMABA* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::KIPBNHIMABA*))((::PBYTE)hIl2Cpp + HCCPPHCMNBA___C_BNJLPDBFPOB_OFFSET))(this, MBNOJBFDGHD, GLAOEHCGCFO);
	}

	::System::Void GIKAOBDHNOB(::System::Int32 OMJHEHJJHML, ::System::String* BHDNBGLCNOM, ::System::String* DCPEHNPIFNH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HCCPPHCMNBA___C_GIKAOBDHNOB_OFFSET))(this, OMJHEHJJHML, BHDNBGLCNOM, DCPEHNPIFNH);
	}
};
