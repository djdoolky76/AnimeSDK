#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOMHKLANPAI;
namespace System { class String; }

#define FGKBHGIIBDL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1575AD10)

inline static constexpr unsigned int FGKBHGIIBDL_TypeDefinitionIndex = 76515;

	class FGKBHGIIBDL : public ::System::Object
	{
	public:
		static ::DOMHKLANPAI* BPLPBPMEODA(::System::String* a1, ::System::Int32 a2)
		{
			return ((::DOMHKLANPAI*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + FGKBHGIIBDL_BPLPBPMEODA_OFFSET))(a1, a2);
		}

	};
