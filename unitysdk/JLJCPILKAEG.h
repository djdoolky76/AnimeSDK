#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelMainPuzzleStateType.h"
#include "unitysdk/System/Object.h"
class COBPCKBMOCM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define JLJCPILKAEG_CTOR_OFFSET UNITYSDK_OFFSET(0xB24C470)

inline static constexpr unsigned int JLJCPILKAEG_TypeDefinitionIndex = 78305;

	class JLJCPILKAEG : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType, ::UnityEngine::GameObject*>* AIPOOKIFBOA; // 0x10
		::COBPCKBMOCM* BOFGHEHAMKC; // 0x18
		::UnityEngine::Transform* FDJKPEDGKDG; // 0x20
		::UnityEngine::GameObject* PNLCBAAIPCH; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJCPILKAEG_CTOR_OFFSET))(this);
		}

	};
