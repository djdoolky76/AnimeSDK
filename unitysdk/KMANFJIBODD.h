#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMANFJIBODD;
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::UI { class RawImage; }

#define KMANFJIBODD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x17B91C90)
#define KMANFJIBODD_CTOR_OFFSET UNITYSDK_OFFSET(0x17B91CF0)
#define KMANFJIBODD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B91FA0)
#define KMANFJIBODD_NHOENLIMKLJ_OFFSET UNITYSDK_OFFSET(0x17B91E50)
#define KMANFJIBODD_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x17B91D00)
#define KMANFJIBODD_PBJAENMIKEJ_OFFSET UNITYSDK_OFFSET(0x17B91EB0)

inline static constexpr unsigned int KMANFJIBODD_TypeDefinitionIndex = 74870;

	class KMANFJIBODD : public ::System::Object
	{
	public:
		::System::String* DCPEFEGGAAM; // 0x10
		::UnityEngine::Material* IMOHCDHKBAJ; // 0x18
		// static const ::System::String* EJOAECPFNCP; // 0x0
		// static const ::System::String* HGAACOINAHD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMANFJIBODD_CTOR_OFFSET))(this);
		}

		static ::KMANFJIBODD* BPLPBPMEODA(::System::String* a1)
		{
			return ((::KMANFJIBODD*(*)(::System::String*))((::PBYTE)hIl2Cpp + KMANFJIBODD_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void NPAFMEBNFOB(::UnityEngine::UI::RawImage* a1, ::UnityEngine::RenderTexture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::RawImage*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + KMANFJIBODD_NPAFMEBNFOB_OFFSET))(this, a1, a2);
		}

		::System::Void PBJAENMIKEJ(::UnityEngine::UI::RawImage* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::RawImage*, ::System::Single))((::PBYTE)hIl2Cpp + KMANFJIBODD_PBJAENMIKEJ_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMANFJIBODD_DISPOSE_OFFSET))(this);
		}

		::System::Void NHOENLIMKLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMANFJIBODD_NHOENLIMKLJ_OFFSET))(this);
		}

	};
