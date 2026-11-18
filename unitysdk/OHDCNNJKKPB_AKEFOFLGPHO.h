#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AFMMAIKKACF;
class CJKFPGAJOBO;
class OHDCNNJKKPB;
template <typename T> class DFDEIDBBGHG_1;

#define OHDCNNJKKPB_AKEFOFLGPHO_EOKPEMGOPNA_OFFSET UNITYSDK_OFFSET(0xE14F0A0)
#define OHDCNNJKKPB_AKEFOFLGPHO_MKIFLNPIBEN_OFFSET UNITYSDK_OFFSET(0xE14EB30)
#define OHDCNNJKKPB_AKEFOFLGPHO__CTOR_OFFSET UNITYSDK_OFFSET(0xE14EB20)

inline static constexpr unsigned int OHDCNNJKKPB_AKEFOFLGPHO_TypeDefinitionIndex = 62659;

class OHDCNNJKKPB_AKEFOFLGPHO : public ::System::Object
{
public:
	::OHDCNNJKKPB* KLHPEBKNIFB; // 0x10
	::AFMMAIKKACF* AAOCANGHBDG; // 0x18
	::System::UInt32 LPALEBPKMNO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHDCNNJKKPB_AKEFOFLGPHO__CTOR_OFFSET))(this);
	}

	::System::Void MKIFLNPIBEN(::DFDEIDBBGHG_1<::CJKFPGAJOBO*>* KALNFNBBABH)
	{
		return ((::System::Void(*)(::PVOID, ::DFDEIDBBGHG_1<::CJKFPGAJOBO*>*))((::PBYTE)hIl2Cpp + OHDCNNJKKPB_AKEFOFLGPHO_MKIFLNPIBEN_OFFSET))(this, KALNFNBBABH);
	}

	::System::Void EOKPEMGOPNA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHDCNNJKKPB_AKEFOFLGPHO_EOKPEMGOPNA_OFFSET))(this);
	}
};
