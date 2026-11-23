#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define F2792F2598627091_F2D69907E3E63487__CCTOR_OFFSET UNITYSDK_OFFSET(0x42DBC30)
#define F2792F2598627091_F2D69907E3E63487__CTOR_OFFSET UNITYSDK_OFFSET(0x42DBCF0)

namespace F2792F2598627091
{
	inline static constexpr unsigned int F2D69907E3E63487_TypeDefinitionIndex = 13282;

	class F2D69907E3E63487
	{
	public:
		static ::System::Func_2<::UnityEngine::E46B881AA2636190, ::UnityEngine::E46B881AA2636190>** StaticGet_E3443BE3B005B366()
		{
			return (::System::Func_2<::UnityEngine::E46B881AA2636190, ::UnityEngine::E46B881AA2636190>**)Il2CppClass::FromTypeDefinitionIndex(F2D69907E3E63487_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F2792F2598627091_F2D69907E3E63487__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::Int32 BF4B44C7319B6475, ::System::Int32 FD9642755CDCB117)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + F2792F2598627091_F2D69907E3E63487__CTOR_OFFSET))(this, BF4B44C7319B6475, FD9642755CDCB117);
		}
	};
}
