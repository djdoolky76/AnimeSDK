#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIFCMGADLEI_OLOLADKPPIM;
namespace RPG::GameCore { class ChimeraDuelBubbleEventListener; }
namespace RPG::GameCore { class ChimeraDuelConditionConfig; }
namespace RPG::GameCore { class ChimeraDuelEventListener; }
namespace RPG::GameCore { class ChimeraDuelNodeContainer; }
namespace System { class String; }

#define KIFCMGADLEI_CTOR_OFFSET UNITYSDK_OFFSET(0xB41DF70)
#define KIFCMGADLEI_GLCAMCHCJBE_OFFSET UNITYSDK_OFFSET(0xB41DCA0)
#define KIFCMGADLEI_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB41D870)
#define KIFCMGADLEI_HDFLJMNOEBC_OFFSET UNITYSDK_OFFSET(0xB41D9D0)
#define KIFCMGADLEI_HMIHOMIAOCB_OFFSET UNITYSDK_OFFSET(0xB41D8B0)
#define KIFCMGADLEI_IEICEOCKADM_OFFSET UNITYSDK_OFFSET(0xB41DA90)
#define KIFCMGADLEI_IHOGIONAAAO_OFFSET UNITYSDK_OFFSET(0xB41DBE0)
#define KIFCMGADLEI_JOGPOKAPKLE_OFFSET UNITYSDK_OFFSET(0xB41DED0)
#define KIFCMGADLEI_MCLMOECKKFL_OFFSET UNITYSDK_OFFSET(0xB41D970)

inline static constexpr unsigned int KIFCMGADLEI_TypeDefinitionIndex = 63369;

	class KIFCMGADLEI : public ::System::Object
	{
	public:
		::KIFCMGADLEI_OLOLADKPPIM* LPDAIJPKFIJ; // 0x10
		::KIFCMGADLEI_OLOLADKPPIM* NKKGDBMIFLF; // 0x18
		::KIFCMGADLEI_OLOLADKPPIM* FKFADAODHOC; // 0x20
		::KIFCMGADLEI_OLOLADKPPIM* LICDPJJEAGG; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFCMGADLEI_CTOR_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFCMGADLEI_HADOHLNHHGB_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraDuelNodeContainer* HMIHOMIAOCB(::System::String* a1)
		{
			return ((::RPG::GameCore::ChimeraDuelNodeContainer*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KIFCMGADLEI_HMIHOMIAOCB_OFFSET))(this, a1);
		}

		::System::Void MCLMOECKKFL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KIFCMGADLEI_MCLMOECKKFL_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChimeraDuelConditionConfig* HDFLJMNOEBC(::System::String* a1)
		{
			return ((::RPG::GameCore::ChimeraDuelConditionConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KIFCMGADLEI_HDFLJMNOEBC_OFFSET))(this, a1);
		}

		::System::Void IEICEOCKADM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KIFCMGADLEI_IEICEOCKADM_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChimeraDuelEventListener* IHOGIONAAAO(::System::String* a1)
		{
			return ((::RPG::GameCore::ChimeraDuelEventListener*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KIFCMGADLEI_IHOGIONAAAO_OFFSET))(this, a1);
		}

		::System::Void GLCAMCHCJBE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KIFCMGADLEI_GLCAMCHCJBE_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChimeraDuelBubbleEventListener* JOGPOKAPKLE(::System::String* a1)
		{
			return ((::RPG::GameCore::ChimeraDuelBubbleEventListener*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KIFCMGADLEI_JOGPOKAPKLE_OFFSET))(this, a1);
		}

	};
