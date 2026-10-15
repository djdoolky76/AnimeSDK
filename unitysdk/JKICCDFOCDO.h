#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLFHMKMJNPK.h"
class FDPALAEIHPB;
class KHPOKIKCOFO;

#define JKICCDFOCDO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB73180)
#define JKICCDFOCDO_ELBAFKMECNC_OFFSET UNITYSDK_OFFSET(0x1CB73D10)
#define JKICCDFOCDO_LOBNKIPPCBG_OFFSET UNITYSDK_OFFSET(0x1CB73410)
#define JKICCDFOCDO_OGKIBELNEIC_OFFSET UNITYSDK_OFFSET(0x1CB73190)

inline static constexpr unsigned int JKICCDFOCDO_TypeDefinitionIndex = 42385;

	class JKICCDFOCDO : public ::HLFHMKMJNPK
	{
	public:
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + JKICCDFOCDO_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean OGKIBELNEIC(::KHPOKIKCOFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + JKICCDFOCDO_OGKIBELNEIC_OFFSET))(this, a1);
		}

		::System::Boolean LOBNKIPPCBG(::KHPOKIKCOFO* a1, ::KHPOKIKCOFO* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHPOKIKCOFO*, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + JKICCDFOCDO_LOBNKIPPCBG_OFFSET))(this, a1, a2);
		}

		::System::Boolean ELBAFKMECNC(::KHPOKIKCOFO* a1, ::KHPOKIKCOFO* a2, ::System::Boolean a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHPOKIKCOFO*, ::KHPOKIKCOFO*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + JKICCDFOCDO_ELBAFKMECNC_OFFSET))(this, a1, a2, a3, a4);
		}

	};
