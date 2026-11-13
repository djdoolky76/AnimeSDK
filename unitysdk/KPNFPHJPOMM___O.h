#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEIGMBOLDOF;
namespace System { class Object; }
namespace UnityEngine::Events { template <typename T1, typename T2> class UnityAction_2; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

inline static constexpr unsigned int KPNFPHJPOMM___O_TypeDefinitionIndex = 50259;

	class KPNFPHJPOMM___O : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction_1<::MEIGMBOLDOF*>** StaticGet__1___OnReleasePooledManagedLight()
		{
			return (::UnityEngine::Events::UnityAction_1<::MEIGMBOLDOF*>**)UnitySDK::FromName("", "<>O")->GetStaticField(0x6F3E0);
		}

		static ::UnityEngine::Events::UnityAction_2<::MEIGMBOLDOF*, ::System::Boolean>** StaticGet__0___OnGetPooledManagedLight()
		{
			return (::UnityEngine::Events::UnityAction_2<::MEIGMBOLDOF*, ::System::Boolean>**)UnitySDK::FromName("", "<>O")->GetStaticField(0x6F3E8);
		}

		static ::System::Object** StaticGet__2___OnDiscardLoadedBlock()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>O")->GetStaticField(0x6F3F0);
		}

	};
