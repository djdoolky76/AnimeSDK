#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class BaseRaycaster; }

#define E11F33EA73B4931A_B9428DD9EE0D0AC4_OFFSET UNITYSDK_OFFSET(0x4228BE0)
#define E11F33EA73B4931A_BDC25CEA92DDA6AC_OFFSET UNITYSDK_OFFSET(0x4228A60)
#define E11F33EA73B4931A_E5CF8DD3817CC1BF_OFFSET UNITYSDK_OFFSET(0x4228B90)
#define E11F33EA73B4931A__CCTOR_OFFSET UNITYSDK_OFFSET(0x4228CB0)

inline static constexpr unsigned int E11F33EA73B4931A_TypeDefinitionIndex = 18521;

class E11F33EA73B4931A : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>** StaticGet_AAFCC48B6BAC2C5C()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>**)Il2CppClass::FromTypeDefinitionIndex(E11F33EA73B4931A_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E11F33EA73B4931A__CCTOR_OFFSET))();
	}

	static ::System::Void BDC25CEA92DDA6AC(::UnityEngine::EventSystems::BaseRaycaster* FC2F70D1EB74F8FD)
	{
		return ((::System::Void(*)(::UnityEngine::EventSystems::BaseRaycaster*))((::PBYTE)hIl2Cpp + E11F33EA73B4931A_BDC25CEA92DDA6AC_OFFSET))(FC2F70D1EB74F8FD);
	}

	static ::System::Void B9428DD9EE0D0AC4(::UnityEngine::EventSystems::BaseRaycaster* FC2F70D1EB74F8FD)
	{
		return ((::System::Void(*)(::UnityEngine::EventSystems::BaseRaycaster*))((::PBYTE)hIl2Cpp + E11F33EA73B4931A_B9428DD9EE0D0AC4_OFFSET))(FC2F70D1EB74F8FD);
	}

	static ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>* E5CF8DD3817CC1BF()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>*(*)())((::PBYTE)hIl2Cpp + E11F33EA73B4931A_E5CF8DD3817CC1BF_OFFSET))();
	}
};
