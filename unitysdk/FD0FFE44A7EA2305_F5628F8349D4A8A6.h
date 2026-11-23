#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B07850EA97DBB75A.h"
#include "unitysdk/E2DE926113CB084F.h"
#include "unitysdk/System/Object.h"

namespace ABC::Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace System { template <typename T> class Func_1; }

#define FD0FFE44A7EA2305_F5628F8349D4A8A6_FB23863E189B2A03_OFFSET UNITYSDK_OFFSET(0x24703F0)
#define FD0FFE44A7EA2305_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x2470450)
#define FD0FFE44A7EA2305_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FD0FFE44A7EA2305_F5628F8349D4A8A6_TypeDefinitionIndex = 4411;

class FD0FFE44A7EA2305_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::FD0FFE44A7EA2305_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::FD0FFE44A7EA2305_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(FD0FFE44A7EA2305_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_1<::ABC::Collections::Pooled::PooledDictionary_2<::B07850EA97DBB75A<::E2DE926113CB084F, ::System::UInt32>, ::System::Object*>*>** StaticGet_E176852753E7ADDB()
	{
		return (::System::Func_1<::ABC::Collections::Pooled::PooledDictionary_2<::B07850EA97DBB75A<::E2DE926113CB084F, ::System::UInt32>, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(FD0FFE44A7EA2305_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FD0FFE44A7EA2305_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FD0FFE44A7EA2305_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::ABC::Collections::Pooled::PooledDictionary_2<::B07850EA97DBB75A<::E2DE926113CB084F, ::System::UInt32>, ::System::Object*>* FB23863E189B2A03()
	{
		return ((::ABC::Collections::Pooled::PooledDictionary_2<::B07850EA97DBB75A<::E2DE926113CB084F, ::System::UInt32>, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FD0FFE44A7EA2305_F5628F8349D4A8A6_FB23863E189B2A03_OFFSET))(this);
	}
};
