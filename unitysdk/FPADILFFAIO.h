#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OHDPLBDPKIJ.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectEffType.h"
namespace RPG::Client { class GridFightTrait; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FPADILFFAIO_BJFCDLFGBKK_OFFSET UNITYSDK_OFFSET(0x16838E70)
#define FPADILFFAIO_CBCMPHGOPLA_OFFSET UNITYSDK_OFFSET(0x16839150)
#define FPADILFFAIO_CTOR_OFFSET UNITYSDK_OFFSET(0x16838E60)
#define FPADILFFAIO_DFNFOLHLDAA_OFFSET UNITYSDK_OFFSET(0x168390C0)
#define FPADILFFAIO_IDDDAPEDLJM_OFFSET UNITYSDK_OFFSET(0x16838F00)
#define FPADILFFAIO_PGNAHAPPDJN_OFFSET UNITYSDK_OFFSET(0x16838EB0)

inline static constexpr unsigned int FPADILFFAIO_TypeDefinitionIndex = 67157;

	class FPADILFFAIO : public ::OHDPLBDPKIJ
	{
	public:
		::System::Void _ctor(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + FPADILFFAIO_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean BJFCDLFGBKK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPADILFFAIO_BJFCDLFGBKK_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitEffectEffType PGNAHAPPDJN()
		{
			return ((::RPG::Client::GridFightTraitEffectEffType(*)(::PVOID))((::PBYTE)hIl2Cpp + FPADILFFAIO_PGNAHAPPDJN_OFFSET))(this);
		}

		::System::String* IDDDAPEDLJM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPADILFFAIO_IDDDAPEDLJM_OFFSET))(this);
		}

		::System::String* DFNFOLHLDAA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPADILFFAIO_DFNFOLHLDAA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* CBCMPHGOPLA()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPADILFFAIO_CBCMPHGOPLA_OFFSET))(this);
		}

	};
