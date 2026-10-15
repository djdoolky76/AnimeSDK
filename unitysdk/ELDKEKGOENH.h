#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPGTools/Timeline/BindInfo.h"
namespace RPGTools::Timeline { class ArchiveAsset; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define ELDKEKGOENH_AOALPEGDHNM_OFFSET UNITYSDK_OFFSET(0x15510F20)
#define ELDKEKGOENH_AOLMMHPHDKG_OFFSET UNITYSDK_OFFSET(0x15510AF0)
#define ELDKEKGOENH_BDCKGNDHMMF_OFFSET UNITYSDK_OFFSET(0x15510A30)
#define ELDKEKGOENH_CGGPGFMCDLC_OFFSET UNITYSDK_OFFSET(0x155111A0)
#define ELDKEKGOENH_CTOR_OFFSET UNITYSDK_OFFSET(0x155112A0)
#define ELDKEKGOENH_DPADCJPDADK_OFFSET UNITYSDK_OFFSET(0x15511210)
#define ELDKEKGOENH_FOKMDJHNDIM_OFFSET UNITYSDK_OFFSET(0x15511260)
#define ELDKEKGOENH_IPMFEOJKEGA_OFFSET UNITYSDK_OFFSET(0x15511150)
#define ELDKEKGOENH_KGOICHFICLG_OFFSET UNITYSDK_OFFSET(0x155110E0)
#define ELDKEKGOENH_NALJOBHGFPJ_OFFSET UNITYSDK_OFFSET(0x15510CC0)
#define ELDKEKGOENH_OBOEDJJAOKB_OFFSET UNITYSDK_OFFSET(0x155108B0)

inline static constexpr unsigned int ELDKEKGOENH_TypeDefinitionIndex = 48512;

	class ELDKEKGOENH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPGTools::Timeline::ArchiveAsset*>* IDLPKIODJEJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDKEKGOENH_CTOR_OFFSET))(this);
		}

		::System::Void OBOEDJJAOKB(::RPGTools::Timeline::ArchiveAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + ELDKEKGOENH_OBOEDJJAOKB_OFFSET))(this, a1);
		}

		::UnityEngine::Object* BDCKGNDHMMF(::RPGTools::Timeline::BindInfo a1)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::RPGTools::Timeline::BindInfo))((::PBYTE)hIl2Cpp + ELDKEKGOENH_BDCKGNDHMMF_OFFSET))(this, a1);
		}

		::System::Void NALJOBHGFPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDKEKGOENH_NALJOBHGFPJ_OFFSET))(this);
		}

		::UnityEngine::Object* AOLMMHPHDKG(::RPGTools::Timeline::BindInfo a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::RPGTools::Timeline::BindInfo, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ELDKEKGOENH_AOLMMHPHDKG_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Object* AOALPEGDHNM(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + ELDKEKGOENH_AOALPEGDHNM_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Object* KGOICHFICLG(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + ELDKEKGOENH_KGOICHFICLG_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Object* IPMFEOJKEGA(::RPGTools::Timeline::ArchiveAsset* a1)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + ELDKEKGOENH_IPMFEOJKEGA_OFFSET))(this, a1);
		}

		::System::Void CGGPGFMCDLC(::RPGTools::Timeline::BindInfo a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::BindInfo, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ELDKEKGOENH_CGGPGFMCDLC_OFFSET))(this, a1, a2);
		}

		::System::Void DPADCJPDADK(::RPGTools::Timeline::ArchiveAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + ELDKEKGOENH_DPADCJPDADK_OFFSET))(this, a1);
		}

		::System::Void FOKMDJHNDIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDKEKGOENH_FOKMDJHNDIM_OFFSET))(this);
		}

	};
