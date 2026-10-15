#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKOAMFCJHNH.h"
class KPBPOKHFDOM;
class ODGPPIHLOFF;
namespace System { class Action; }

#define POLGKBLMEBP_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xC370AF0)
#define POLGKBLMEBP_ANHDEECJEIO_OFFSET UNITYSDK_OFFSET(0xC370DA0)
#define POLGKBLMEBP_BBLFBKOJICH_OFFSET UNITYSDK_OFFSET(0xC370A60)
#define POLGKBLMEBP_CTOR_OFFSET UNITYSDK_OFFSET(0xC3709E0)
#define POLGKBLMEBP_LADMGDAOLOD_1_OFFSET UNITYSDK_OFFSET(0xC370E20)
#define POLGKBLMEBP_LADMGDAOLOD_OFFSET UNITYSDK_OFFSET(0xC370AA0)

inline static constexpr unsigned int POLGKBLMEBP_TypeDefinitionIndex = 49197;

	class POLGKBLMEBP : public ::DKOAMFCJHNH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POLGKBLMEBP_CTOR_OFFSET))(this);
		}

		::System::Void BBLFBKOJICH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POLGKBLMEBP_BBLFBKOJICH_OFFSET))(this);
		}

		::System::Void LADMGDAOLOD(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + POLGKBLMEBP_LADMGDAOLOD_OFFSET))(this, a1);
		}

		static ::ODGPPIHLOFF* ACMKLFOMPFC()
		{
			return ((::ODGPPIHLOFF*(*)())((::PBYTE)hIl2Cpp + POLGKBLMEBP_ACMKLFOMPFC_OFFSET))();
		}

		::System::Void ANHDEECJEIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POLGKBLMEBP_ANHDEECJEIO_OFFSET))(this);
		}

		::System::Void LADMGDAOLOD_1(::KPBPOKHFDOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPBPOKHFDOM*))((::PBYTE)hIl2Cpp + POLGKBLMEBP_LADMGDAOLOD_1_OFFSET))(this, a1);
		}

	};
