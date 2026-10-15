#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECMHCCJOCKC;
class FCOEMCEDLNL;
namespace System { class String; }

#define ECMHCCJOCKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD3F500)
#define ECMHCCJOCKC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD3F170)

inline static constexpr unsigned int ECMHCCJOCKC_TypeDefinitionIndex = 12670;

	class ECMHCCJOCKC : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* DGFMCMDNJLC; // 0x10
		::Il2CppArray<::System::Single>* EOPMMKLODKL; // 0x18
		::System::String* BEIFJFDOEND; // 0x20
		::System::String* AMHCLPKEAAK; // 0x28
		::Il2CppArray<::System::String*>* CJNNJCBJOHP; // 0x30
		::System::Single JNGDPJMPNKF; // 0x38
		::System::Single PLBGKDFKCAA; // 0x3C
		::System::Single MKFMPOOOHPI; // 0x40
		::System::Single ADAIMBJKPND; // 0x44
		::System::Single LICNLIMAGHF; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECMHCCJOCKC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ECMHCCJOCKC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ECMHCCJOCKC*))((::PBYTE)hIl2Cpp + ECMHCCJOCKC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
