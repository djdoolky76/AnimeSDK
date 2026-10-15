#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_MATCUSTOMDICTIONAY_ABKKJIBEBHA_OFFSET UNITYSDK_OFFSET(0xD57D080)
#define RPG_CLIENT_MATCUSTOMDICTIONAY_CTOR_OFFSET UNITYSDK_OFFSET(0xD57CEE0)
#define RPG_CLIENT_MATCUSTOMDICTIONAY_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0xD57CF40)
#define RPG_CLIENT_MATCUSTOMDICTIONAY_FINALIZE_OFFSET UNITYSDK_OFFSET(0xD57D170)
#define RPG_CLIENT_MATCUSTOMDICTIONAY_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xD57D0D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatCustomDictionay_TypeDefinitionIndex = 70746;

	class MatCustomDictionay : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* keys; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* values; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCUSTOMDICTIONAY_CTOR_OFFSET))(this);
		}

		::System::Void EGFCFCBHJJP(::System::String* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCUSTOMDICTIONAY_EGFCFCBHJJP_OFFSET))(this, a1, a2);
		}

		::System::Int32 ABKKJIBEBHA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCUSTOMDICTIONAY_ABKKJIBEBHA_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCUSTOMDICTIONAY_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCUSTOMDICTIONAY_FINALIZE_OFFSET))(this);
		}

	};
}
