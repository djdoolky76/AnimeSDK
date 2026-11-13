#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMAEPJJBPBK.h"
namespace RPG::GameCore { class NewFireMultiProjectiles; }
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PJAOMDKMPKJ_ADMGPJLEBEF_OFFSET UNITYSDK_OFFSET(0x1A9DF050)
#define PJAOMDKMPKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1A9DED60)
#define PJAOMDKMPKJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A9DF4E0)
#define PJAOMDKMPKJ_ENPMICEBFJE_OFFSET UNITYSDK_OFFSET(0x1A9DF2B0)
#define PJAOMDKMPKJ_GOCHKBNMOJM_OFFSET UNITYSDK_OFFSET(0x1A9DED70)

inline static constexpr unsigned int PJAOMDKMPKJ_TypeDefinitionIndex = 56412;

	class PJAOMDKMPKJ : public ::IMAEPJJBPBK
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::NewProjectileConfig*>* FNJMGKNBPKK; // 0x68
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NewFireMultiProjectiles* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NewFireMultiProjectiles*))((::PBYTE)hIl2Cpp + PJAOMDKMPKJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void GOCHKBNMOJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAOMDKMPKJ_GOCHKBNMOJM_OFFSET))(this);
		}

		::System::Void ADMGPJLEBEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAOMDKMPKJ_ADMGPJLEBEF_OFFSET))(this);
		}

		::System::Void ENPMICEBFJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAOMDKMPKJ_ENPMICEBFJE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAOMDKMPKJ_DISPOSE_OFFSET))(this);
		}

	};
