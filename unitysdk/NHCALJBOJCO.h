#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBEPKIPNAHF.h"
class BKDFNNDKCDA;

#define NHCALJBOJCO_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0xBBB6750)
#define NHCALJBOJCO_CAHKEGBPMJI_OFFSET UNITYSDK_OFFSET(0xBBB6500)
#define NHCALJBOJCO_CTOR_OFFSET UNITYSDK_OFFSET(0xBBB6430)
#define NHCALJBOJCO_EDBPHODBFCP_OFFSET UNITYSDK_OFFSET(0xBBB6480)
#define NHCALJBOJCO_LKIFDCACLOK_OFFSET UNITYSDK_OFFSET(0xBBB66F0)
#define NHCALJBOJCO_MJKKFEOGNGJ_OFFSET UNITYSDK_OFFSET(0xBBB66A0)

inline static constexpr unsigned int NHCALJBOJCO_TypeDefinitionIndex = 56193;

	class NHCALJBOJCO : public ::OBEPKIPNAHF
	{
	public:
		::System::Void _ctor(::BKDFNNDKCDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKDFNNDKCDA*))((::PBYTE)hIl2Cpp + NHCALJBOJCO_CTOR_OFFSET))(this, a1);
		}

		::System::Void EDBPHODBFCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHCALJBOJCO_EDBPHODBFCP_OFFSET))(this);
		}

		::System::Void MJKKFEOGNGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHCALJBOJCO_MJKKFEOGNGJ_OFFSET))(this);
		}

		::System::Void LKIFDCACLOK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHCALJBOJCO_LKIFDCACLOK_OFFSET))(this, a1);
		}

		::System::Void CAHKEGBPMJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHCALJBOJCO_CAHKEGBPMJI_OFFSET))(this);
		}

		::BKDFNNDKCDA* ANALOEDDDHD()
		{
			return ((::BKDFNNDKCDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHCALJBOJCO_ANALOEDDDHD_OFFSET))(this);
		}

	};
