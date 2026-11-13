#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ComicDessertComplexityRestriction; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define HBGOEFCJDEA_LANOLKHFINM_OFFSET UNITYSDK_OFFSET(0x1C16E970)
#define HBGOEFCJDEA_LHJIOHBEHEG_OFFSET UNITYSDK_OFFSET(0x1C16ED50)

inline static constexpr unsigned int HBGOEFCJDEA_TypeDefinitionIndex = 53839;

	class HBGOEFCJDEA : public ::System::Object
	{
	public:
		static ::System::Boolean LANOLKHFINM(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::ComicDessertComplexityRestriction*>* a1, ::System::Object* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::ComicDessertComplexityRestriction*>*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + HBGOEFCJDEA_LANOLKHFINM_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean LHJIOHBEHEG(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2, ::System::Object* a3, ::System::String* a4)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::String*>*, ::System::Int32, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + HBGOEFCJDEA_LHJIOHBEHEG_OFFSET))(a1, a2, a3, a4);
		}

	};
