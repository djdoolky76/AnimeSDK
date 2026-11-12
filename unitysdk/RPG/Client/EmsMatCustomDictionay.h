#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_EMSMATCUSTOMDICTIONAY_ABKKJIBEBHA_OFFSET UNITYSDK_OFFSET(0xD7B3290)
#define RPG_CLIENT_EMSMATCUSTOMDICTIONAY_CTOR_OFFSET UNITYSDK_OFFSET(0xD7B30F0)
#define RPG_CLIENT_EMSMATCUSTOMDICTIONAY_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0xD7B3150)
#define RPG_CLIENT_EMSMATCUSTOMDICTIONAY_FINALIZE_OFFSET UNITYSDK_OFFSET(0xD7B3380)
#define RPG_CLIENT_EMSMATCUSTOMDICTIONAY_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xD7B32E0)

namespace RPG::Client
{
	inline static constexpr unsigned int EmsMatCustomDictionay_TypeDefinitionIndex = 72719;

	class EmsMatCustomDictionay : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* keys; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* EmsMat; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMSMATCUSTOMDICTIONAY_CTOR_OFFSET))(this);
		}

		::System::Void EGFCFCBHJJP(::System::String* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMSMATCUSTOMDICTIONAY_EGFCFCBHJJP_OFFSET))(this, a1, a2);
		}

		::System::Int32 ABKKJIBEBHA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMSMATCUSTOMDICTIONAY_ABKKJIBEBHA_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMSMATCUSTOMDICTIONAY_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMSMATCUSTOMDICTIONAY_FINALIZE_OFFSET))(this);
		}

	};
}
