#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKHCKLBELFK;
namespace RPG::Client { class VoracityInvasionProgressBuffData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EEDKHIFBBDM_CTOR_OFFSET UNITYSDK_OFFSET(0x13A2ACC0)
#define EEDKHIFBBDM_DILPNAHOJJE_OFFSET UNITYSDK_OFFSET(0x1334AE70)

inline static constexpr unsigned int EEDKHIFBBDM_TypeDefinitionIndex = 68268;

	class EEDKHIFBBDM : public ::System::Object
	{
	public:
		::CKHCKLBELFK* CEFLLELKFOP; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::VoracityInvasionProgressBuffData*>* DDKMNBAGDDB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEDKHIFBBDM_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::VoracityInvasionProgressBuffData*>* DILPNAHOJJE()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::VoracityInvasionProgressBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEDKHIFBBDM_DILPNAHOJJE_OFFSET))(this);
		}

	};
