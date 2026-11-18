#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCCJAAKCJMO.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::AI { class NavMeshLink; }

#define PECIOCLHHOL_ADOEJBOBPCP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9CF4A0)

inline static constexpr unsigned int PECIOCLHHOL_ADOEJBOBPCP_TypeDefinitionIndex = 91718;

class PECIOCLHHOL_ADOEJBOBPCP : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AI::NavMeshLink*>* ANBKAOPAENL; // 0x10
	::UnityEngine::GameObject* MNHMOLPLIJF; // 0x18
	::System::Collections::Generic::List_1<::FCCJAAKCJMO>* LHHFFIPJOMD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_ADOEJBOBPCP__CTOR_OFFSET))(this);
	}
};
