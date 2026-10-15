#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Expression/TokenType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define HEFMJGIINFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE6C2B0)

inline static constexpr unsigned int HEFMJGIINFM_TypeDefinitionIndex = 10378;

	class HEFMJGIINFM : public ::System::Object
	{
	public:
		::System::String* MKIJKDGCIIJ; // 0x10
		::RPG::Expression::TokenType MPDOMNOHGJK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFMJGIINFM_CTOR_OFFSET))(this);
		}

	};
