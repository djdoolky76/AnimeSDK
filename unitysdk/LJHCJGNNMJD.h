#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
class BAELLFLPIPF;
class CHGHIALKMFM;
class GGBEEJNPPOP;
class PJPPGJEDCOG;

#define LJHCJGNNMJD_COMPARE_OFFSET UNITYSDK_OFFSET(0x1C56E270)
#define LJHCJGNNMJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C56E260)
#define LJHCJGNNMJD_FEFOILCOBAM_OFFSET UNITYSDK_OFFSET(0x1C56E910)
#define LJHCJGNNMJD_FLOKDGAMOAP_OFFSET UNITYSDK_OFFSET(0x1C56EA40)
#define LJHCJGNNMJD_FNNICNCGLLL_OFFSET UNITYSDK_OFFSET(0x1C56E970)
#define LJHCJGNNMJD_OCHDLMECPAJ_OFFSET UNITYSDK_OFFSET(0x1C56EAF0)

inline static constexpr unsigned int LJHCJGNNMJD_TypeDefinitionIndex = 41811;

	class LJHCJGNNMJD : public ::System::Object
	{
	public:
		::GGBEEJNPPOP* KHLEHDEPMGJ; // 0x10
		::PJPPGJEDCOG* JOPEGOGABEJ; // 0x18
		::BAELLFLPIPF* EIFAMFJPMCE; // 0x20
		::System::Void _ctor(::PJPPGJEDCOG* a1, ::GGBEEJNPPOP* a2, ::BAELLFLPIPF* a3)
		{
			return ((::System::Void(*)(::PVOID, ::PJPPGJEDCOG*, ::GGBEEJNPPOP*, ::BAELLFLPIPF*))((::PBYTE)hIl2Cpp + LJHCJGNNMJD_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 Compare(::CHGHIALKMFM* a1, ::CHGHIALKMFM* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::CHGHIALKMFM*, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + LJHCJGNNMJD_COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Int32 FNNICNCGLLL(::CHGHIALKMFM* a1, ::CHGHIALKMFM* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::CHGHIALKMFM*, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + LJHCJGNNMJD_FNNICNCGLLL_OFFSET))(this, a1, a2);
		}

		::System::Int32 FLOKDGAMOAP(::CHGHIALKMFM* a1, ::CHGHIALKMFM* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::CHGHIALKMFM*, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + LJHCJGNNMJD_FLOKDGAMOAP_OFFSET))(this, a1, a2);
		}

		::System::Int32 OCHDLMECPAJ(::CHGHIALKMFM* a1, ::CHGHIALKMFM* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::CHGHIALKMFM*, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + LJHCJGNNMJD_OCHDLMECPAJ_OFFSET))(this, a1, a2);
		}

		::System::Nullable_1<::System::Int32> FEFOILCOBAM(::System::Int32 a1)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LJHCJGNNMJD_FEFOILCOBAM_OFFSET))(this, a1);
		}

	};
