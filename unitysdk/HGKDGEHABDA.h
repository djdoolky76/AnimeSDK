#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRoleChangeType.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
class CDEAABODKCP;
namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HGKDGEHABDA_BBDMKABHOGM_OFFSET UNITYSDK_OFFSET(0x1C44FDE0)
#define HGKDGEHABDA_CLKBGFNICOK_OFFSET UNITYSDK_OFFSET(0x1C44FC40)
#define HGKDGEHABDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C44F250)
#define HGKDGEHABDA_HAKHKGAPEDG_OFFSET UNITYSDK_OFFSET(0x1C4501C0)
#define HGKDGEHABDA_MKCMBNHFAMB_OFFSET UNITYSDK_OFFSET(0x1C44FAC0)
#define HGKDGEHABDA_NKGJGDMDICH_OFFSET UNITYSDK_OFFSET(0x1C450110)
#define HGKDGEHABDA_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x1C44F4A0)
#define HGKDGEHABDA_UPDATEROLE_OFFSET UNITYSDK_OFFSET(0x1C44F4F0)

inline static constexpr unsigned int HGKDGEHABDA_TypeDefinitionIndex = 66899;

	class HGKDGEHABDA : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* DPLHNANNBAJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKDGEHABDA_CTOR_OFFSET))(this);
		}

		::System::Void UpdateAddRole(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + HGKDGEHABDA_UPDATEADDROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateRole(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + HGKDGEHABDA_UPDATEROLE_OFFSET))(this, a1);
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

		::System::Boolean NKGJGDMDICH(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::GridFightRoleChangeType a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::GridFightRoleChangeType))((::PBYTE)hIl2Cpp + HGKDGEHABDA_NKGJGDMDICH_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HAKHKGAPEDG(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::GridFightRoleChangeType a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::GridFightRoleChangeType))((::PBYTE)hIl2Cpp + HGKDGEHABDA_HAKHKGAPEDG_OFFSET))(this, a1, a2, a3);
		}

	};
