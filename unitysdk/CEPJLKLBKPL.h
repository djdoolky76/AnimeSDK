#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/Pet/PetIdentifier.h"
namespace RPG::Client::Pet { class IPet; }
namespace System { template <typename T> class Action_1; }

#define CEPJLKLBKPL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC9F13A0)
#define CEPJLKLBKPL_NLPBKFAGFGA_OFFSET UNITYSDK_OFFSET(0xC9F1430)
#define CEPJLKLBKPL_OEEEMAOHNEP_OFFSET UNITYSDK_OFFSET(0xC9F16A0)
#define CEPJLKLBKPL_PLOCFDOAIMG_OFFSET UNITYSDK_OFFSET(0xC9F1490)
#define CEPJLKLBKPL_PPENAJCONBD_OFFSET UNITYSDK_OFFSET(0xC9F15C0)

inline static constexpr unsigned int CEPJLKLBKPL_TypeDefinitionIndex = 75674;

	class CEPJLKLBKPL : public ::System::Object
	{
	public:
		static ::RPG::Client::Pet::IPet* BPLPBPMEODA(::RPG::Client::Pet::PetIdentifier a1)
		{
			return ((::RPG::Client::Pet::IPet*(*)(::RPG::Client::Pet::PetIdentifier))((::PBYTE)hIl2Cpp + CEPJLKLBKPL_BPLPBPMEODA_OFFSET))(a1);
		}

		static ::System::Void NLPBKFAGFGA(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CEPJLKLBKPL_NLPBKFAGFGA_OFFSET))(a1);
		}

		static ::System::Void PLOCFDOAIMG(::System::Action_1<::RPG::Client::Pet::PetIdentifier>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::RPG::Client::Pet::PetIdentifier>*))((::PBYTE)hIl2Cpp + CEPJLKLBKPL_PLOCFDOAIMG_OFFSET))(a1);
		}

		static ::System::Boolean PPENAJCONBD(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CEPJLKLBKPL_PPENAJCONBD_OFFSET))(a1);
		}

		static ::System::Boolean OEEEMAOHNEP(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CEPJLKLBKPL_OEEEMAOHNEP_OFFSET))(a1);
		}

	};
