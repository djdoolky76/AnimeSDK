#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PKHNHEBKPPI.h"
class FIMAFJNMOGM;
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD__UPPERGOODPARAMCOLORPOSTPROCESSOR_CTOR_OFFSET UNITYSDK_OFFSET(0xDC7FD40)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD__UPPERGOODPARAMCOLORPOSTPROCESSOR_POSTPROCESS_OFFSET UNITYSDK_OFFSET(0xDC7FE60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopSpecialGood__UpperGoodParamColorPostProcessor_TypeDefinitionIndex = 66949;

	class GridFightShopSpecialGood__UpperGoodParamColorPostProcessor : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* _LowerParams; // 0x10
		// static const ::System::String* _ChangedColor; // 0x0
		::System::Void _ctor(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD__UPPERGOODPARAMCOLORPOSTPROCESSOR_CTOR_OFFSET))(this, a1);
		}

		::System::String* PostProcess(::System::String* a1, ::System::Object* a2, ::FIMAFJNMOGM* a3, ::PKHNHEBKPPI a4)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Object*, ::FIMAFJNMOGM*, ::PKHNHEBKPPI))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD__UPPERGOODPARAMCOLORPOSTPROCESSOR_POSTPROCESS_OFFSET))(this, a1, a2, a3, a4);
		}

	};
}
