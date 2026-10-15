#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class AHDANEIIJML;
namespace System { class Object; }

#define AHDANEIIJML_BBEEKLGNJLL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xEB75F30)
#define AHDANEIIJML_BBEEKLGNJLL_CTOR_OFFSET UNITYSDK_OFFSET(0xEB75FF0)

inline static constexpr unsigned int AHDANEIIJML_BBEEKLGNJLL_TypeDefinitionIndex = 79773;

	class AHDANEIIJML_BBEEKLGNJLL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDANEIIJML_BBEEKLGNJLL_CTOR_OFFSET))(this);
		}

		::AHDANEIIJML* BPLPBPMEODA(::RPG::Client::TextID a1, ::System::Boolean a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::AHDANEIIJML*(*)(::PVOID, ::RPG::Client::TextID, ::System::Boolean, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + AHDANEIIJML_BBEEKLGNJLL_BPLPBPMEODA_OFFSET))(this, a1, a2, a3);
		}

	};
