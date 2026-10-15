#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBJBIFHOLGF;
class FEEDKBAABMP;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BBJBIFHOLGF_ABGELBMDOPK_OFFSET UNITYSDK_OFFSET(0x15E81590)
#define BBJBIFHOLGF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15E814B0)
#define BBJBIFHOLGF_CTOR_OFFSET UNITYSDK_OFFSET(0x15E81540)

inline static constexpr unsigned int BBJBIFHOLGF_TypeDefinitionIndex = 62554;

	class BBJBIFHOLGF : public ::System::Object
	{
	public:
		::Il2CppArray<::FEEDKBAABMP*>* DLIFJECKJLH; // 0x10
		::System::Void _ctor(::Il2CppArray<::FEEDKBAABMP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::FEEDKBAABMP*>*))((::PBYTE)hIl2Cpp + BBJBIFHOLGF_CTOR_OFFSET))(this, a1);
		}

		static ::BBJBIFHOLGF* BPLPBPMEODA(::Il2CppArray<::FEEDKBAABMP*>* a1)
		{
			return ((::BBJBIFHOLGF*(*)(::Il2CppArray<::FEEDKBAABMP*>*))((::PBYTE)hIl2Cpp + BBJBIFHOLGF_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* ABGELBMDOPK()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBJBIFHOLGF_ABGELBMDOPK_OFFSET))(this);
		}

	};
