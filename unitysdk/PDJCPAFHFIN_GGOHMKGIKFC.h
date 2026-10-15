#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define PDJCPAFHFIN_GGOHMKGIKFC_CTOR_OFFSET UNITYSDK_OFFSET(0xC00FF80)
#define PDJCPAFHFIN_GGOHMKGIKFC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC00F610)
#define PDJCPAFHFIN_GGOHMKGIKFC_JDFLPLPJKNM_1_OFFSET UNITYSDK_OFFSET(0xC010480)
#define PDJCPAFHFIN_GGOHMKGIKFC_JDFLPLPJKNM_OFFSET UNITYSDK_OFFSET(0xC0108A0)
#define PDJCPAFHFIN_GGOHMKGIKFC_OOMLFJGCECD_1_OFFSET UNITYSDK_OFFSET(0xC010A70)
#define PDJCPAFHFIN_GGOHMKGIKFC_OOMLFJGCECD_OFFSET UNITYSDK_OFFSET(0xC010C60)

inline static constexpr unsigned int PDJCPAFHFIN_GGOHMKGIKFC_TypeDefinitionIndex = 69838;

	class PDJCPAFHFIN_GGOHMKGIKFC : public ::System::Object
	{
	public:
		::System::String* LNCOKKIPAEP; // 0x10
		::UnityEngine::Material* LMKJCJPFCFI; // 0x18
		::Collections::Pooled::PooledList_1<::System::String*>* LLJLLLLANIO; // 0x20
		::System::Boolean FPGCNBFCEJK; // 0x28
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PDJCPAFHFIN_GGOHMKGIKFC_CTOR_OFFSET))(this, a1);
		}

		::System::Void JDFLPLPJKNM(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + PDJCPAFHFIN_GGOHMKGIKFC_JDFLPLPJKNM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JDFLPLPJKNM_1(::UnityEngine::Material* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + PDJCPAFHFIN_GGOHMKGIKFC_JDFLPLPJKNM_1_OFFSET))(this, a1, a2);
		}

		::System::Void OOMLFJGCECD(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + PDJCPAFHFIN_GGOHMKGIKFC_OOMLFJGCECD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OOMLFJGCECD_1(::UnityEngine::Material* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + PDJCPAFHFIN_GGOHMKGIKFC_OOMLFJGCECD_1_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDJCPAFHFIN_GGOHMKGIKFC_DISPOSE_OFFSET))(this);
		}

	};
