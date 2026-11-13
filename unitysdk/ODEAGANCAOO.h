#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FACKIAAMEHD;
class FIDEMAJHMFB;
class KHDHPOKJFDP;
class ODEAGANCAOO;

#define ODEAGANCAOO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x19A3E450)
#define ODEAGANCAOO_CTOR_OFFSET UNITYSDK_OFFSET(0x19A3E4C0)
#define ODEAGANCAOO_IAFMCGPICOG_OFFSET UNITYSDK_OFFSET(0x19A3E610)
#define ODEAGANCAOO_JJBGNJFCHPL_OFFSET UNITYSDK_OFFSET(0x19A3E4D0)

inline static constexpr unsigned int ODEAGANCAOO_TypeDefinitionIndex = 73839;

	class ODEAGANCAOO : public ::System::Object
	{
	public:
		::KHDHPOKJFDP* DMFEKIIDMFL; // 0x10
		::FACKIAAMEHD* BEDGMFJBDAJ; // 0x18
		::FIDEMAJHMFB* EDKEBMJKKMC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODEAGANCAOO_CTOR_OFFSET))(this);
		}

		static ::ODEAGANCAOO* BPLPBPMEODA(::FIDEMAJHMFB* a1, ::KHDHPOKJFDP* a2)
		{
			return ((::ODEAGANCAOO*(*)(::FIDEMAJHMFB*, ::KHDHPOKJFDP*))((::PBYTE)hIl2Cpp + ODEAGANCAOO_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void JJBGNJFCHPL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODEAGANCAOO_JJBGNJFCHPL_OFFSET))(this, a1);
		}

		::System::Void IAFMCGPICOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODEAGANCAOO_IAFMCGPICOG_OFFSET))(this);
		}

	};
