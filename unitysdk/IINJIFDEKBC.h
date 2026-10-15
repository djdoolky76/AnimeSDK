#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define IINJIFDEKBC_BLPFHIOJJLP_OFFSET UNITYSDK_OFFSET(0x16446E10)
#define IINJIFDEKBC_CGEJOHMBJFE_OFFSET UNITYSDK_OFFSET(0x16446960)
#define IINJIFDEKBC_CTOR_OFFSET UNITYSDK_OFFSET(0x164465D0)
#define IINJIFDEKBC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16446630)
#define IINJIFDEKBC_GIMLFBJHECH_OFFSET UNITYSDK_OFFSET(0x164466E0)
#define IINJIFDEKBC_LGPCCEMAJDM_OFFSET UNITYSDK_OFFSET(0x16447000)
#define IINJIFDEKBC_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x164469D0)

inline static constexpr unsigned int IINJIFDEKBC_TypeDefinitionIndex = 69101;

	class IINJIFDEKBC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* OPOECLNGMAB; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* MGNJFJDHPAN; // 0x18
		::UnityEngine::GameObject* BBFICHMOMOH; // 0x20
		::UnityEngine::Transform* PNHDMLKLONE; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IINJIFDEKBC_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IINJIFDEKBC_DISPOSE_OFFSET))(this);
		}

		::System::Void GIMLFBJHECH(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IINJIFDEKBC_GIMLFBJHECH_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::UnityEngine::RectTransform* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + IINJIFDEKBC_PAGKOAEOLKA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BLPFHIOJJLP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IINJIFDEKBC_BLPFHIOJJLP_OFFSET))(this, a1);
		}

		::System::Void CGEJOHMBJFE(::UnityEngine::UI::Image* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::Boolean))((::PBYTE)hIl2Cpp + IINJIFDEKBC_CGEJOHMBJFE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::UI::Image* LGPCCEMAJDM(::UnityEngine::RectTransform* a1)
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + IINJIFDEKBC_LGPCCEMAJDM_OFFSET))(this, a1);
		}

	};
