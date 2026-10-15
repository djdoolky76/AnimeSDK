#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftConditionType.h"
#include "unitysdk/System/Object.h"
class BPMDOLJFPNM;
class DGEPFHILKPM;
class JCMJBMIKIFO;

#define ANNPPJHLEGH_CTOR_OFFSET UNITYSDK_OFFSET(0x158A0900)
#define ANNPPJHLEGH_MNEDAKNGGOH_OFFSET UNITYSDK_OFFSET(0x158A0910)

	class ANNPPJHLEGH : public ::System::Object
	{
	public:
		::DGEPFHILKPM* OMLAHOMDEID; // 0x10
		::BPMDOLJFPNM* CEFLLELKFOP; // 0x18
		::System::Void _ctor(::DGEPFHILKPM* a1, ::BPMDOLJFPNM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DGEPFHILKPM*, ::BPMDOLJFPNM*))((::PBYTE)hIl2Cpp + ANNPPJHLEGH_CTOR_OFFSET))(this, a1, a2);
		}

		::JCMJBMIKIFO* MNEDAKNGGOH(::RPG::Client::MechCraft::MechCraftConditionType a1)
		{
			return ((::JCMJBMIKIFO*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftConditionType))((::PBYTE)hIl2Cpp + ANNPPJHLEGH_MNEDAKNGGOH_OFFSET))(this, a1);
		}

	};
