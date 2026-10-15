#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMCOEFHHBPO.h"
#include "unitysdk/RPG/Client/GridFightRoleChangeType.h"
class CDEAABODKCP;
namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HGKDGEHABDA_BBDMKABHOGM_OFFSET UNITYSDK_OFFSET(0x15CA8580)
#define HGKDGEHABDA_CLKBGFNICOK_OFFSET UNITYSDK_OFFSET(0x15CA83E0)
#define HGKDGEHABDA_CTOR_OFFSET UNITYSDK_OFFSET(0x15CA7A90)
#define HGKDGEHABDA_EOMJBFAECGD_OFFSET UNITYSDK_OFFSET(0x15CA7C90)
#define HGKDGEHABDA_HAKHKGAPEDG_OFFSET UNITYSDK_OFFSET(0x15CA86D0)
#define HGKDGEHABDA_MKCMBNHFAMB_OFFSET UNITYSDK_OFFSET(0x15CA8260)
#define HGKDGEHABDA_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x15CA7C40)

	class HGKDGEHABDA : public ::AMCOEFHHBPO
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* DPLHNANNBAJ; // 0x10
		::System::UInt32 JPGGPEDKFKE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKDGEHABDA_CTOR_OFFSET))(this);
		}

		::System::Void UpdateAddRole(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + HGKDGEHABDA_UPDATEADDROLE_OFFSET))(this, a1);
		}

		::System::Void EOMJBFAECGD(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + HGKDGEHABDA_EOMJBFAECGD_OFFSET))(this, a1);
		}

		::System::Void MKCMBNHFAMB(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::GridFightRoleChangeType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::GridFightRoleChangeType))((::PBYTE)hIl2Cpp + HGKDGEHABDA_MKCMBNHFAMB_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::GridFightRole* CLKBGFNICOK(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a4, ::System::UInt32 a5)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + HGKDGEHABDA_CLKBGFNICOK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean BBDMKABHOGM(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::GridFightRoleChangeType a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::GridFightRoleChangeType))((::PBYTE)hIl2Cpp + HGKDGEHABDA_BBDMKABHOGM_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HAKHKGAPEDG(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::GridFightRoleChangeType a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::GridFightRoleChangeType))((::PBYTE)hIl2Cpp + HGKDGEHABDA_HAKHKGAPEDG_OFFSET))(this, a1, a2, a3);
		}

	};
