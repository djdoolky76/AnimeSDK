#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DPKOIBEFPAO.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define BIJKNADJCGJ_IGJIGJCLNKJ_OFFSET UNITYSDK_OFFSET(0x74BAF0)
#define BIJKNADJCGJ_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x14ECF610)
#define BIJKNADJCGJ_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x14ECF1C0)
#define BIJKNADJCGJ_PADHEHLKBDO_OFFSET UNITYSDK_OFFSET(0x74BB00)
#define BIJKNADJCGJ_PPGBHNIJOIB_OFFSET UNITYSDK_OFFSET(0x14ECF5F0)

inline static constexpr unsigned int BIJKNADJCGJ_TypeDefinitionIndex = 70633;

struct alignas(8) BIJKNADJCGJ
{
	::MoleMole::EntityHandle KEHECMCDLFC; // 0x10
	::System::Int32 LFEDBFBLGOM; // 0x20
	::System::Byte _padding0[0x4];
	::System::String* AOLGDHDOCLP; // 0x28
	::System::String* BGPMDIKJFPJ; // 0x30

	/*
	static ::System::Boolean NOGJIJMACNO(::BIJKNADJCGJ OMPHGGCEIBD, ::BIJKNADJCGJ LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::BIJKNADJCGJ, ::BIJKNADJCGJ))((::PBYTE)hIl2Cpp + BIJKNADJCGJ_NOGJIJMACNO_OFFSET))(OMPHGGCEIBD, LIBPKNHDIGP);
	}
	*/

	::System::Boolean IGJIGJCLNKJ(::System::Collections::Generic::IList_1<::DPKOIBEFPAO>* KOIBHLHLMFC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::DPKOIBEFPAO>*))((::PBYTE)hIl2Cpp + BIJKNADJCGJ_IGJIGJCLNKJ_OFFSET))(this, KOIBHLHLMFC);
	}

	/*
	static ::BIJKNADJCGJ PPGBHNIJOIB()
	{
		return ((::BIJKNADJCGJ(*)())((::PBYTE)hIl2Cpp + BIJKNADJCGJ_PPGBHNIJOIB_OFFSET))();
	}
	*/

	/*
	static ::System::Boolean INCFIJKMIGG(::BIJKNADJCGJ OMPHGGCEIBD, ::BIJKNADJCGJ LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::BIJKNADJCGJ, ::BIJKNADJCGJ))((::PBYTE)hIl2Cpp + BIJKNADJCGJ_INCFIJKMIGG_OFFSET))(OMPHGGCEIBD, LIBPKNHDIGP);
	}
	*/

	/*
	::System::Boolean PADHEHLKBDO(::BIJKNADJCGJ LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::BIJKNADJCGJ))((::PBYTE)hIl2Cpp + BIJKNADJCGJ_PADHEHLKBDO_OFFSET))(this, LIBPKNHDIGP);
	}
	*/
};
