#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNCICEGGMKF.h"

class CGGLJLECNJM;
class DELNMAOIHAE;
class OFLPOCHHHLC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OHOLHJBPDNL_KLJLMGMLIIH_OFFSET UNITYSDK_OFFSET(0x1F36E750)
#define OHOLHJBPDNL_PLBLIDMPFGI_OFFSET UNITYSDK_OFFSET(0x1F36E980)
#define OHOLHJBPDNL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36EB30)

inline static constexpr unsigned int OHOLHJBPDNL_TypeDefinitionIndex = 96578;

class OHOLHJBPDNL : public ::MNCICEGGMKF
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* JONNJHABLAN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOLHJBPDNL__CTOR_OFFSET))(this);
	}

	::System::Void KLJLMGMLIIH(::OFLPOCHHHLC* OAJIHMBGELO, ::OFLPOCHHHLC* LGOCCGBAHEA, ::CGGLJLECNJM* EGOIOLIBKMN)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*, ::OFLPOCHHHLC*, ::CGGLJLECNJM*))((::PBYTE)hIl2Cpp + OHOLHJBPDNL_KLJLMGMLIIH_OFFSET))(this, OAJIHMBGELO, LGOCCGBAHEA, EGOIOLIBKMN);
	}

	::System::Void PLBLIDMPFGI(::DELNMAOIHAE* GEEHGDABNJF, ::System::Int32 BIOGEIHKABE)
	{
		return ((::System::Void(*)(::PVOID, ::DELNMAOIHAE*, ::System::Int32))((::PBYTE)hIl2Cpp + OHOLHJBPDNL_PLBLIDMPFGI_OFFSET))(this, GEEHGDABNJF, BIOGEIHKABE);
	}
};
