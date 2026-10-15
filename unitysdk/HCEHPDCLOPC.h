#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/PrimitiveType.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Mesh; }

#define HCEHPDCLOPC_CCTOR_OFFSET UNITYSDK_OFFSET(0x15C0BD40)
#define HCEHPDCLOPC_GJBPINOJIGD_OFFSET UNITYSDK_OFFSET(0x15C0BA80)
#define HCEHPDCLOPC_KMEIIOAGHON_OFFSET UNITYSDK_OFFSET(0x15C0BC60)

inline static constexpr unsigned int HCEHPDCLOPC_TypeDefinitionIndex = 52056;

	class HCEHPDCLOPC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::PrimitiveType, ::UnityEngine::Mesh*>** StaticGet_KPPFGAPLECI()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::PrimitiveType, ::UnityEngine::Mesh*>**)UnitySDK::FromName("", "HCEHPDCLOPC")->GetStaticField(0x6F830);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCEHPDCLOPC_CCTOR_OFFSET))();
		}

		static ::UnityEngine::Mesh* GJBPINOJIGD(::UnityEngine::PrimitiveType a1)
		{
			return ((::UnityEngine::Mesh*(*)(::UnityEngine::PrimitiveType))((::PBYTE)hIl2Cpp + HCEHPDCLOPC_GJBPINOJIGD_OFFSET))(a1);
		}

		static ::UnityEngine::Mesh* KMEIIOAGHON(::UnityEngine::PrimitiveType a1)
		{
			return ((::UnityEngine::Mesh*(*)(::UnityEngine::PrimitiveType))((::PBYTE)hIl2Cpp + HCEHPDCLOPC_KMEIIOAGHON_OFFSET))(a1);
		}

	};
