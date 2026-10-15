#pragma once
#include "unitysdk/unitysdk.h"

#define DAJAICCAJFD_CTOR_OFFSET UNITYSDK_OFFSET(0xDFC4500)
#define DAJAICCAJFD_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0xDFC4280)
#define DAJAICCAJFD_LBMGICALIOL_OFFSET UNITYSDK_OFFSET(0xDFC4230)
#define DAJAICCAJFD_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xDFC4400)

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
