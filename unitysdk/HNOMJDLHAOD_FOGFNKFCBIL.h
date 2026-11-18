#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HNOMJDLHAOD;

#define HNOMJDLHAOD_FOGFNKFCBIL_NGPJHNKHKAJ_OFFSET UNITYSDK_OFFSET(0x15381750)
#define HNOMJDLHAOD_FOGFNKFCBIL__CTOR_OFFSET UNITYSDK_OFFSET(0x15381740)

inline static constexpr unsigned int HNOMJDLHAOD_FOGFNKFCBIL_TypeDefinitionIndex = 48153;

class HNOMJDLHAOD_FOGFNKFCBIL : public ::System::Object
{
public:
	::HNOMJDLHAOD* KLHPEBKNIFB; // 0x10
	::System::Boolean OODGKLOFKOP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOMJDLHAOD_FOGFNKFCBIL__CTOR_OFFSET))(this);
	}

	::System::Void NGPJHNKHKAJ(::System::Int32 OJAFEBCMCNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HNOMJDLHAOD_FOGFNKFCBIL_NGPJHNKHKAJ_OFFSET))(this, OJAFEBCMCNN);
	}
};
