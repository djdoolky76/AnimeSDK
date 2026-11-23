#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/A32676FCB736C8E8.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define F2792F2598627091_F1FA9D33FC3D26B9__CCTOR_OFFSET UNITYSDK_OFFSET(0x42DBAD0)
#define F2792F2598627091_F1FA9D33FC3D26B9__CTOR_OFFSET UNITYSDK_OFFSET(0x42DBB90)

namespace F2792F2598627091
{
	inline static constexpr unsigned int F1FA9D33FC3D26B9_TypeDefinitionIndex = 13275;

	class F1FA9D33FC3D26B9
	{
	public:
		static ::System::Func_2<::UnityEngine::E46B881AA2636190, ::UnityEngine::A32676FCB736C8E8>** StaticGet_E3443BE3B005B366()
		{
			return (::System::Func_2<::UnityEngine::E46B881AA2636190, ::UnityEngine::A32676FCB736C8E8>**)Il2CppClass::FromTypeDefinitionIndex(F1FA9D33FC3D26B9_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F2792F2598627091_F1FA9D33FC3D26B9__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::Int32 BF4B44C7319B6475, ::System::Int32 FD9642755CDCB117)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + F2792F2598627091_F1FA9D33FC3D26B9__CTOR_OFFSET))(this, BF4B44C7319B6475, FD9642755CDCB117);
		}
	};
}
