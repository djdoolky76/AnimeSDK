#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B07850EA97DBB75A.h"
#include "unitysdk/E20D2565425431BC_B8EB5E7FF04D73E4.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/BEBEE1FAD8783C95.h"
#include "unitysdk/E20D2565425431BC_F88B9AEE9CFC7624.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class FieldInfo; }

#define E20D2565425431BC_A22F3B926823A288_OFFSET UNITYSDK_OFFSET(0x412D460)
#define E20D2565425431BC_AE056676A210D7EA_OFFSET UNITYSDK_OFFSET(0x412EB50)
#define E20D2565425431BC_B69727A38099746E_OFFSET UNITYSDK_OFFSET(0x412D330)
#define E20D2565425431BC_E35DA8D395028F67_OFFSET UNITYSDK_OFFSET(0x412E5B0)
#define E20D2565425431BC_F3EF0472CF473C44_OFFSET UNITYSDK_OFFSET(0x412D050)
#define E20D2565425431BC_F71F917ECFD9B229_OFFSET UNITYSDK_OFFSET(0x412CF10)
#define E20D2565425431BC__CCTOR_OFFSET UNITYSDK_OFFSET(0x412EBC0)

inline static constexpr unsigned int E20D2565425431BC_TypeDefinitionIndex = 17120;

class E20D2565425431BC : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::B07850EA97DBB75A<::System::Object*, ::System::Type*>, ::UnityEngine::BEBEE1FAD8783C95>** StaticGet_EDABD76E1B0681CD()
	{
		return (::System::Collections::Generic::Dictionary_2<::B07850EA97DBB75A<::System::Object*, ::System::Type*>, ::UnityEngine::BEBEE1FAD8783C95>**)Il2CppClass::FromTypeDefinitionIndex(E20D2565425431BC_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::String* B69727A38099746E(::System::Reflection::FieldInfo* FE9471F4FA6926E0)
	{
		return ((::System::String*(*)(::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + E20D2565425431BC_B69727A38099746E_OFFSET))(FE9471F4FA6926E0);
	}

	static ::System::String* AE056676A210D7EA(::E20D2565425431BC_F88B9AEE9CFC7624& param_0)
	{
		return ((::System::String*(*)(::E20D2565425431BC_F88B9AEE9CFC7624&))((::PBYTE)hIl2Cpp + E20D2565425431BC_AE056676A210D7EA_OFFSET))(param_0);
	}

	static ::System::Void E35DA8D395028F67(::System::Type* F5ED866017D4F5C9, ::UnityEngine::BEBEE1FAD8783C95& FBD53F2C4A7C34BC)
	{
		return ((::System::Void(*)(::System::Type*, ::UnityEngine::BEBEE1FAD8783C95&))((::PBYTE)hIl2Cpp + E20D2565425431BC_E35DA8D395028F67_OFFSET))(F5ED866017D4F5C9, FBD53F2C4A7C34BC);
	}

	static ::System::Boolean F71F917ECFD9B229(::System::Reflection::FieldInfo* FE9471F4FA6926E0, ::E20D2565425431BC_B8EB5E7FF04D73E4 F9C001DAC1F349AB)
	{
		return ((::System::Boolean(*)(::System::Reflection::FieldInfo*, ::E20D2565425431BC_B8EB5E7FF04D73E4))((::PBYTE)hIl2Cpp + E20D2565425431BC_F71F917ECFD9B229_OFFSET))(FE9471F4FA6926E0, F9C001DAC1F349AB);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E20D2565425431BC__CCTOR_OFFSET))();
	}

	static ::UnityEngine::BEBEE1FAD8783C95 A22F3B926823A288(::System::Type* F5ED866017D4F5C9, ::E20D2565425431BC_B8EB5E7FF04D73E4 F9C001DAC1F349AB, ::System::Func_2<::System::String*, ::System::String*>* B25F2AD434BB11FB)
	{
		return ((::UnityEngine::BEBEE1FAD8783C95(*)(::System::Type*, ::E20D2565425431BC_B8EB5E7FF04D73E4, ::System::Func_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + E20D2565425431BC_A22F3B926823A288_OFFSET))(F5ED866017D4F5C9, F9C001DAC1F349AB, B25F2AD434BB11FB);
	}

	static ::System::String* F3EF0472CF473C44(::System::Reflection::FieldInfo* FE9471F4FA6926E0, ::System::Func_2<::System::String*, ::System::String*>* B25F2AD434BB11FB)
	{
		return ((::System::String*(*)(::System::Reflection::FieldInfo*, ::System::Func_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + E20D2565425431BC_F3EF0472CF473C44_OFFSET))(FE9471F4FA6926E0, B25F2AD434BB11FB);
	}
};
