#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFIILHCFHPC;
namespace RPG::GameCore { class PsActivityRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAGJNOOBLKB_AJCBPHDLENP_OFFSET UNITYSDK_OFFSET(0xC31FF70)
#define NAGJNOOBLKB_BNKCLCHKKCD_OFFSET UNITYSDK_OFFSET(0xC3207F0)
#define NAGJNOOBLKB_CGOEKINGCFI_OFFSET UNITYSDK_OFFSET(0xC3203B0)
#define NAGJNOOBLKB_CTOR_OFFSET UNITYSDK_OFFSET(0xC31FF50)
#define NAGJNOOBLKB_DPGGIFPHOCN_OFFSET UNITYSDK_OFFSET(0xC320830)
#define NAGJNOOBLKB_IJJMIMJMNBN_OFFSET UNITYSDK_OFFSET(0xC320630)
#define NAGJNOOBLKB_KJOHOMBFBDE_OFFSET UNITYSDK_OFFSET(0xC320410)
#define NAGJNOOBLKB_LJKGFKNGJDF_OFFSET UNITYSDK_OFFSET(0xC3207A0)
#define NAGJNOOBLKB_OLIOHDILFHP_OFFSET UNITYSDK_OFFSET(0xC3204E0)

inline static constexpr unsigned int NAGJNOOBLKB_TypeDefinitionIndex = 68670;

	class NAGJNOOBLKB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* CDLOJLOPKMB; // 0x10
		::RPG::GameCore::PsActivityRow* IBPBJBOKKMF; // 0x18
		::System::Collections::Generic::List_1<::IFIILHCFHPC*>* LFIPGNPEDLK; // 0x20
		::System::Void _ctor(::RPG::GameCore::PsActivityRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PsActivityRow*))((::PBYTE)hIl2Cpp + NAGJNOOBLKB_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean CGOEKINGCFI(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NAGJNOOBLKB_CGOEKINGCFI_OFFSET))(this, a1);
		}

		::IFIILHCFHPC* KJOHOMBFBDE(::System::UInt32 a1)
		{
			return ((::IFIILHCFHPC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NAGJNOOBLKB_KJOHOMBFBDE_OFFSET))(this, a1);
		}

		::IFIILHCFHPC* OLIOHDILFHP(::System::UInt32 a1)
		{
			return ((::IFIILHCFHPC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NAGJNOOBLKB_OLIOHDILFHP_OFFSET))(this, a1);
		}

		::System::Boolean IJJMIMJMNBN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGJNOOBLKB_IJJMIMJMNBN_OFFSET))(this);
		}

		::System::UInt32 LJKGFKNGJDF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGJNOOBLKB_LJKGFKNGJDF_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::IFIILHCFHPC*>* BNKCLCHKKCD()
		{
			return ((::System::Collections::Generic::List_1<::IFIILHCFHPC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGJNOOBLKB_BNKCLCHKKCD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* DPGGIFPHOCN()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGJNOOBLKB_DPGGIFPHOCN_OFFSET))(this);
		}

		::System::Void AJCBPHDLENP(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + NAGJNOOBLKB_AJCBPHDLENP_OFFSET))(this, a1);
		}

	};
