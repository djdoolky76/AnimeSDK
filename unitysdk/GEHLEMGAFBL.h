#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TextJoinConfigRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GEHLEMGAFBL_AGIBOFIBMNA_OFFSET UNITYSDK_OFFSET(0x159CBE10)
#define GEHLEMGAFBL_CTOR_OFFSET UNITYSDK_OFFSET(0x159CBB70)
#define GEHLEMGAFBL_POANJGPHBGM_OFFSET UNITYSDK_OFFSET(0x159CBB80)

inline static constexpr unsigned int GEHLEMGAFBL_TypeDefinitionIndex = 74382;

	class GEHLEMGAFBL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* GCIKKMGIPIO; // 0x10
		::System::Void _ctor(::RPG::GameCore::TextJoinConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TextJoinConfigRow*))((::PBYTE)hIl2Cpp + GEHLEMGAFBL_CTOR_OFFSET))(this, a1);
		}

		::System::Void POANJGPHBGM(::RPG::GameCore::TextJoinConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TextJoinConfigRow*))((::PBYTE)hIl2Cpp + GEHLEMGAFBL_POANJGPHBGM_OFFSET))(this, a1);
		}

		::System::String* AGIBOFIBMNA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHLEMGAFBL_AGIBOFIBMNA_OFFSET))(this);
		}

	};
