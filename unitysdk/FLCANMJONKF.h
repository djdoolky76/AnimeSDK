#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBNOOOMNDEJ.h"
class FLCANMJONKF;
namespace RPG::Client { class GridFightTrait; }

#define FLCANMJONKF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16798E30)
#define FLCANMJONKF_CTOR_OFFSET UNITYSDK_OFFSET(0x16798EA0)
#define FLCANMJONKF_DJNGFBIEHIA_OFFSET UNITYSDK_OFFSET(0x16798EB0)

inline static constexpr unsigned int FLCANMJONKF_TypeDefinitionIndex = 67357;

	class FLCANMJONKF : public ::JBNOOOMNDEJ
	{
	public:
		::System::Void _ctor(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + FLCANMJONKF_CTOR_OFFSET))(this, a1);
		}

		static ::FLCANMJONKF* BPLPBPMEODA(::RPG::Client::GridFightTrait* a1)
		{
			return ((::FLCANMJONKF*(*)(::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + FLCANMJONKF_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean DJNGFBIEHIA(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLCANMJONKF_DJNGFBIEHIA_OFFSET))(this, a1);
		}

	};
