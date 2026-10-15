#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class JIEDMGCDCGO;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JIEDMGCDCGO_AAEPGLAOEAO_OFFSET UNITYSDK_OFFSET(0xB1EED00)
#define JIEDMGCDCGO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB1EEB80)
#define JIEDMGCDCGO_CTOR_OFFSET UNITYSDK_OFFSET(0xB1EEC50)
#define JIEDMGCDCGO_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xB1EECB0)
#define JIEDMGCDCGO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB1EEED0)

inline static constexpr unsigned int JIEDMGCDCGO_TypeDefinitionIndex = 62559;

	class JIEDMGCDCGO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* JKEOPLNBLAC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIEDMGCDCGO_CTOR_OFFSET))(this);
		}

		static ::JIEDMGCDCGO* BPLPBPMEODA()
		{
			return ((::JIEDMGCDCGO*(*)())((::PBYTE)hIl2Cpp + JIEDMGCDCGO_BPLPBPMEODA_OFFSET))();
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIEDMGCDCGO_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void AAEPGLAOEAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIEDMGCDCGO_AAEPGLAOEAO_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + JIEDMGCDCGO_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
