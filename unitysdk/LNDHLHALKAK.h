#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIAdaptState.h"
#include "unitysdk/System/Object.h"
class LNDHLHALKAK;
namespace RPG::GameCore { class UIOperationConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define LNDHLHALKAK_CPJFFHLIIHA_OFFSET UNITYSDK_OFFSET(0xB7DAC50)
#define LNDHLHALKAK_CTOR_OFFSET UNITYSDK_OFFSET(0xB7DAB30)
#define LNDHLHALKAK_EHLMLDMHCME_OFFSET UNITYSDK_OFFSET(0xB7DAB50)
#define LNDHLHALKAK_EOBFFMDNFAI_OFFSET UNITYSDK_OFFSET(0xB7DADE0)
#define LNDHLHALKAK_FOGIEMDMHFJ_OFFSET UNITYSDK_OFFSET(0xB7DAD20)
#define LNDHLHALKAK_HNNEMHEKNDB_OFFSET UNITYSDK_OFFSET(0xB7DADA0)
#define LNDHLHALKAK_KMDGFGPPDCK_OFFSET UNITYSDK_OFFSET(0xB7DA350)

inline static constexpr unsigned int LNDHLHALKAK_TypeDefinitionIndex = 60080;

	class LNDHLHALKAK : public ::System::Object
	{
	public:
		::System::String* KOLMEDKMGND; // 0x10
		::UnityEngine::RectTransform* IDCAKBLPFDD; // 0x18
		::UnityEngine::Transform* IEIJMJOAKNI; // 0x20
		::RPG::Client::UIAdaptState INHEHPJBGBF; // 0x28
		::System::Void _ctor(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + LNDHLHALKAK_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Collections::Generic::List_1<::LNDHLHALKAK*>* KMDGFGPPDCK(::RPG::GameCore::UIOperationConfig* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Collections::Generic::List_1<::LNDHLHALKAK*>*(*)(::RPG::GameCore::UIOperationConfig*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LNDHLHALKAK_KMDGFGPPDCK_OFFSET))(a1, a2);
		}

		::System::Void EHLMLDMHCME(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LNDHLHALKAK_EHLMLDMHCME_OFFSET))(this, a1);
		}

		::System::Void CPJFFHLIIHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDHLHALKAK_CPJFFHLIIHA_OFFSET))(this);
		}

		::System::Boolean FOGIEMDMHFJ(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LNDHLHALKAK_FOGIEMDMHFJ_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* HNNEMHEKNDB()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDHLHALKAK_HNNEMHEKNDB_OFFSET))(this);
		}

		::UnityEngine::RectTransform* EOBFFMDNFAI()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDHLHALKAK_EOBFFMDNFAI_OFFSET))(this);
		}

	};
