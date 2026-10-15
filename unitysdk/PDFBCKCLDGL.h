#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class GGLKJLLMHBN;
class GHCECAKHKJP;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifier_1; }

#define PDFBCKCLDGL_CTOR_OFFSET UNITYSDK_OFFSET(0xC010D90)
#define PDFBCKCLDGL_GETMODIFIER_OFFSET UNITYSDK_OFFSET(0xC010DA0)

inline static constexpr unsigned int PDFBCKCLDGL_TypeDefinitionIndex = 62716;

	class PDFBCKCLDGL : public ::System::Object
	{
	public:
		::GGLKJLLMHBN* IJKFLFBFMBF; // 0x10
		::System::Void _ctor(::GGLKJLLMHBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGLKJLLMHBN*))((::PBYTE)hIl2Cpp + PDFBCKCLDGL_CTOR_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>* GetModifier(::GHCECAKHKJP* a1)
		{
			return ((::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::GHCECAKHKJP*))((::PBYTE)hIl2Cpp + PDFBCKCLDGL_GETMODIFIER_OFFSET))(this, a1);
		}

	};
