#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::GameCore { class JsonConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::UI { class Image; }

#define KNGCMDJBJEE_CTOR_OFFSET UNITYSDK_OFFSET(0x18FA5380)
#define KNGCMDJBJEE_JDDAEOBDBNK_OFFSET UNITYSDK_OFFSET(0x18FA51A0)
#define KNGCMDJBJEE_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x18FA4F40)
#define KNGCMDJBJEE_PFJDLLGFCOD_OFFSET UNITYSDK_OFFSET(0x18FA50B0)
#define KNGCMDJBJEE__ONBIND_OFFSET UNITYSDK_OFFSET(0x18FA5250)

inline static constexpr unsigned int KNGCMDJBJEE_TypeDefinitionIndex = 74406;

	class KNGCMDJBJEE : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* FDPNCEAAMII; // 0x60
		::UnityEngine::UI::Image* BHMFMBBLADC; // 0x68
		::RPG::Client::UIStateCtrl* LOPDDKFEJEH; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGCMDJBJEE_CTOR_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::GameCore::JsonConfig* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::RPG::GameCore::JsonConfig*))((::PBYTE)hIl2Cpp + KNGCMDJBJEE_NKPPGDENJAE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PFJDLLGFCOD(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KNGCMDJBJEE_PFJDLLGFCOD_OFFSET))(this, a1, a2);
		}

		::System::Void JDDAEOBDBNK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNGCMDJBJEE_JDDAEOBDBNK_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGCMDJBJEE__ONBIND_OFFSET))(this);
		}

	};
