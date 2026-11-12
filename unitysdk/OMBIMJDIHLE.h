#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityAttributeType.h"
#include "unitysdk/System/Object.h"
class BCDFHNMLPFJ;
class OMBIMJDIHLE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OMBIMJDIHLE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1DB5FB00)
#define OMBIMJDIHLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5FBC0)
#define OMBIMJDIHLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DB5FBD0)

inline static constexpr unsigned int OMBIMJDIHLE_TypeDefinitionIndex = 42973;

	class OMBIMJDIHLE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::BCDFHNMLPFJ*>* OLJCAJMFJPO; // 0x10
		::System::Boolean IJCDEINGADN; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::GameCore::LittleGameAbilityAttributeType CADLBIKGCCP; // 0x1C
		::RPG::GameCore::FixPoint DDAGDNNDCDI; // 0x20
		::RPG::GameCore::FixPoint MNDFOPKBHKP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBIMJDIHLE_CTOR_OFFSET))(this);
		}

		static ::OMBIMJDIHLE* BPLPBPMEODA(::RPG::GameCore::LittleGameAbilityAttributeType a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::OMBIMJDIHLE*(*)(::RPG::GameCore::LittleGameAbilityAttributeType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OMBIMJDIHLE_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBIMJDIHLE_TOSTRING_OFFSET))(this);
		}

	};
