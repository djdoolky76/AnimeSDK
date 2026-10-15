#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Entitas { class ISystem; }
namespace System { class String; }

#define FNFDEHPJGAJ_OFPLCANEGOK_OFFSET UNITYSDK_OFFSET(0x15862830)

inline static constexpr unsigned int FNFDEHPJGAJ_TypeDefinitionIndex = 76769;

	class FNFDEHPJGAJ : public ::System::Object
	{
	public:
		static ::System::String* OFPLCANEGOK(::System::String* a1, ::Entitas::ISystem* a2)
		{
			return ((::System::String*(*)(::System::String*, ::Entitas::ISystem*))((::PBYTE)hIl2Cpp + FNFDEHPJGAJ_OFPLCANEGOK_OFFSET))(a1, a2);
		}

	};
