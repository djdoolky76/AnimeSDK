#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define FDINAIPJBLM_OBFNCCCLIMH_OFFSET UNITYSDK_OFFSET(0x1CDAF920)

inline static constexpr unsigned int FDINAIPJBLM_TypeDefinitionIndex = 24851;

	class FDINAIPJBLM : public ::System::Object
	{
	public:
		static ::System::String* OBFNCCCLIMH(::System::Object* a1)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + FDINAIPJBLM_OBFNCCCLIMH_OFFSET))(a1);
		}

	};
