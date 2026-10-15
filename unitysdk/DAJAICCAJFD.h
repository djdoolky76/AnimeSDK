#pragma once
#include "unitysdk/unitysdk.h"

#define DAJAICCAJFD_CTOR_OFFSET UNITYSDK_OFFSET(0xDFBA7D0)
#define DAJAICCAJFD_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0xDFBA550)
#define DAJAICCAJFD_LBMGICALIOL_OFFSET UNITYSDK_OFFSET(0xDFBA500)
#define DAJAICCAJFD_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xDFBA6D0)

inline static constexpr unsigned int DAJAICCAJFD_TypeDefinitionIndex = 68703;

	class DAJAICCAJFD
	{
	public:
		::System::Int32 GMGIJGMCKGE; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAJAICCAJFD_CTOR_OFFSET))(this);
		}

		::System::Void LBMGICALIOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAJAICCAJFD_LBMGICALIOL_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAJAICCAJFD_GGNBOEIMEPM_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DAJAICCAJFD_LJOLGCNKIEH_OFFSET))(this, a1);
		}

	};
