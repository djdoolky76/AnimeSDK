#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
class ODOLBBHAKKB;
namespace System { class String; }

#define JPOCJBFHNMJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBB52620)
#define JPOCJBFHNMJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBB526B0)

inline static constexpr unsigned int JPOCJBFHNMJ_TypeDefinitionIndex = 64165;

	class JPOCJBFHNMJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPOCJBFHNMJ_CTOR_OFFSET))(this);
		}

		::ODOLBBHAKKB* BPLPBPMEODA(::System::String* a1, ::RPG::GameCore::GenderType a2)
		{
			return ((::ODOLBBHAKKB*(*)(::PVOID, ::System::String*, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + JPOCJBFHNMJ_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

	};
