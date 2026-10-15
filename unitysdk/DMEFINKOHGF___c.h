#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define DMEFINKOHGF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xFEB7040)
#define DMEFINKOHGF___C_CTOR_OFFSET UNITYSDK_OFFSET(0xFEB7080)
#define DMEFINKOHGF___C__FINDBOTTOMPOINT_B__3_0_OFFSET UNITYSDK_OFFSET(0xFEB7090)

inline static constexpr unsigned int DMEFINKOHGF___c_TypeDefinitionIndex = 70361;

	class DMEFINKOHGF___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::UnityEngine::Vector3>, ::System::Single>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::UnityEngine::Vector3>, ::System::Single>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B4A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B4A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMEFINKOHGF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEFINKOHGF___C_CTOR_OFFSET))(this);
		}

		::System::Single _FindBottomPoint_b__3_0(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::UnityEngine::Vector3> a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + DMEFINKOHGF___C__FINDBOTTOMPOINT_B__3_0_OFFSET))(this, a1);
		}

	};
