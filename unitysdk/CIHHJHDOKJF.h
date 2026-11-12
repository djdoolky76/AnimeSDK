#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBNOOOMNDEJ.h"
class CIHHJHDOKJF;
namespace RPG::Client { class GridFightTrait; }

#define CIHHJHDOKJF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xD8E7070)
#define CIHHJHDOKJF_CTOR_OFFSET UNITYSDK_OFFSET(0xD8E70E0)
#define CIHHJHDOKJF_DJNGFBIEHIA_OFFSET UNITYSDK_OFFSET(0xD8E70F0)

inline static constexpr unsigned int CIHHJHDOKJF_TypeDefinitionIndex = 67356;

	class CIHHJHDOKJF : public ::JBNOOOMNDEJ
	{
	public:
		::System::Void _ctor(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + CIHHJHDOKJF_CTOR_OFFSET))(this, a1);
		}

		static ::CIHHJHDOKJF* BPLPBPMEODA(::RPG::Client::GridFightTrait* a1)
		{
			return ((::CIHHJHDOKJF*(*)(::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + CIHHJHDOKJF_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean DJNGFBIEHIA(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CIHHJHDOKJF_DJNGFBIEHIA_OFFSET))(this, a1);
		}

	};
