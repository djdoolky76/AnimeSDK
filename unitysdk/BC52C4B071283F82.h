#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class AC99ED5FF667DC04;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define BC52C4B071283F82_AC028616C80B8404_OFFSET UNITYSDK_OFFSET(0x2263200)
#define BC52C4B071283F82__CTOR_OFFSET UNITYSDK_OFFSET(0x2263A10)

inline static constexpr unsigned int BC52C4B071283F82_TypeDefinitionIndex = 9239;

class BC52C4B071283F82 : public ::System::Object
{
public:
	::System::Int32 A177F33AD9155693; // 0x10
	::System::Nullable_1<::System::Int32> F9BAA275E5F32E6A; // 0x14
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::System::Object*>*>* E2EDCC1619F2808A; // 0x20
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::UnityEngine::Quaternion>* BDE2AC78849E036C; // 0x28

	::System::Void _ctor(::AC99ED5FF667DC04* B1EF781AF9B040F7, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* BA503C83FE93C0FB)
	{
		return ((::System::Void(*)(::PVOID, ::AC99ED5FF667DC04*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + BC52C4B071283F82__CTOR_OFFSET))(this, B1EF781AF9B040F7, BA503C83FE93C0FB);
	}

	::System::Boolean AC028616C80B8404(::System::Int32 ACE6C785534616B2, ::System::Boolean E21BC0C8A287D980)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BC52C4B071283F82_AC028616C80B8404_OFFSET))(this, ACE6C785534616B2, E21BC0C8A287D980);
	}
};
