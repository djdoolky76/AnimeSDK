#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/PrimitiveType.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Mesh; }

#define HCEHPDCLOPC_CCTOR_OFFSET UNITYSDK_OFFSET(0x15C18A70)
#define HCEHPDCLOPC_GJBPINOJIGD_OFFSET UNITYSDK_OFFSET(0x15C187B0)
#define HCEHPDCLOPC_KMEIIOAGHON_OFFSET UNITYSDK_OFFSET(0x15C18990)

	class HCEHPDCLOPC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::PrimitiveType, ::UnityEngine::Mesh*>** StaticGet_KPPFGAPLECI()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::PrimitiveType, ::UnityEngine::Mesh*>**)UnitySDK::FromName("", "HCEHPDCLOPC")->GetStaticField(0x6E9F0);
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
