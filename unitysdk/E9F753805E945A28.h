#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/B92BBABCE5ECD236.h"
#include "unitysdk/System/Object.h"

class B1415F48FB5E27BC;
class BC52C4B071283F82;
class E5AF36CD3482D9D3;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define E9F753805E945A28_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x1EAFF50)
#define E9F753805E945A28_FD792C24FE49920B_OFFSET UNITYSDK_OFFSET(0x1EAFFD0)
#define E9F753805E945A28__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB0200)

inline static constexpr unsigned int E9F753805E945A28_TypeDefinitionIndex = 6773;

class E9F753805E945A28 : public ::System::Object
{
public:
	::E68AA4EB51923C98::B92BBABCE5ECD236 E2911D7AC57CCBC8; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::Dictionary_2<::System::String*, ::BC52C4B071283F82*>* F5A79AD1812DB5FE; // 0x18

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9F753805E945A28_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void _ctor(::E68AA4EB51923C98::B92BBABCE5ECD236 ED833F95E0E065E2, ::E5AF36CD3482D9D3* FB31C4A535BEC571, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* BA503C83FE93C0FB)
	{
		return ((::System::Void(*)(::PVOID, ::E68AA4EB51923C98::B92BBABCE5ECD236, ::E5AF36CD3482D9D3*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + E9F753805E945A28__CTOR_OFFSET))(this, ED833F95E0E065E2, FB31C4A535BEC571, BA503C83FE93C0FB);
	}

	::System::Boolean FD792C24FE49920B(::B1415F48FB5E27BC* BF46E29E10918277, ::System::Boolean E21BC0C8A287D980)
	{
		return ((::System::Boolean(*)(::PVOID, ::B1415F48FB5E27BC*, ::System::Boolean))((::PBYTE)hIl2Cpp + E9F753805E945A28_FD792C24FE49920B_OFFSET))(this, BF46E29E10918277, E21BC0C8A287D980);
	}
};
