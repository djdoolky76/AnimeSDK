#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMNAMDLMADK;
namespace RPG::Client { class GridFightTrailblazeGood; }

#define LICLCLGDMGB_KMJNGGGPJPF_OFFSET UNITYSDK_OFFSET(0x1BCD9650)

inline static constexpr unsigned int LICLCLGDMGB_TypeDefinitionIndex = 67289;

	class LICLCLGDMGB : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightTrailblazeGood* KMJNGGGPJPF(::AMNAMDLMADK* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::GridFightTrailblazeGood*(*)(::AMNAMDLMADK*, ::System::Int32))((::PBYTE)hIl2Cpp + LICLCLGDMGB_KMJNGGGPJPF_OFFSET))(a1, a2);
		}

	};
