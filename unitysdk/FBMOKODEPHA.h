#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FBMOKODEPHA_CBOEJABOEPB_OFFSET UNITYSDK_OFFSET(0x2E766C0)
#define FBMOKODEPHA_DCDIDAKFFKL_OFFSET UNITYSDK_OFFSET(0x2E764C0)
#define FBMOKODEPHA_FBCHMKEPGFC_OFFSET UNITYSDK_OFFSET(0x2E76720)
#define FBMOKODEPHA_IJMDLFPOOCJ_OFFSET UNITYSDK_OFFSET(0x2E76580)
#define FBMOKODEPHA_JPHJMABHOJO_OFFSET UNITYSDK_OFFSET(0x2E76570)
#define FBMOKODEPHA_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x2E767E0)
#define FBMOKODEPHA_LDMLAOAGHHL_OFFSET UNITYSDK_OFFSET(0x2E76780)
#define FBMOKODEPHA_MBLNPEILJEH_OFFSET UNITYSDK_OFFSET(0x2E76620)
#define FBMOKODEPHA_MJBCGNNLONE_OFFSET UNITYSDK_OFFSET(0x2E76560)

inline static constexpr unsigned int FBMOKODEPHA_TypeDefinitionIndex = 57683;

	struct alignas(8) FBMOKODEPHA
	{
		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* IIHGDFDBFCC; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* HJONNOCPBIF; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* AMIANEKJBEI; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* DCDIDAKFFKL()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMOKODEPHA_DCDIDAKFFKL_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MJBCGNNLONE()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMOKODEPHA_MJBCGNNLONE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint JPHJMABHOJO()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMOKODEPHA_JPHJMABHOJO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* IJMDLFPOOCJ()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMOKODEPHA_IJMDLFPOOCJ_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* MBLNPEILJEH()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMOKODEPHA_MBLNPEILJEH_OFFSET))(this);
		}

		::System::Boolean CBOEJABOEPB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMOKODEPHA_CBOEJABOEPB_OFFSET))(this);
		}

		::System::Boolean FBCHMKEPGFC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMOKODEPHA_FBCHMKEPGFC_OFFSET))(this);
		}

		::System::Boolean LDMLAOAGHHL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMOKODEPHA_LDMLAOAGHHL_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMOKODEPHA_KHGIKBFDLFB_OFFSET))(this);
		}

	};
