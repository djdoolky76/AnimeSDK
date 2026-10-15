#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"
class ICKLANINJDB;
class MIEJIDHEGBK;
class OMLGPGPJGJK;

#define MIEJIDHEGBK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB9528B0)
#define MIEJIDHEGBK_CTOR_OFFSET UNITYSDK_OFFSET(0xB952960)
#define MIEJIDHEGBK_JDKPFHDHBBH_OFFSET UNITYSDK_OFFSET(0xB9528A0)
#define MIEJIDHEGBK_JOHPKPGOGHD_OFFSET UNITYSDK_OFFSET(0xB952890)

inline static constexpr unsigned int MIEJIDHEGBK_TypeDefinitionIndex = 78050;

	class MIEJIDHEGBK
	{
	public:
		::System::Void _ctor(::ICKLANINJDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICKLANINJDB*))((::PBYTE)hIl2Cpp + MIEJIDHEGBK_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId JOHPKPGOGHD()
		{
			return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + MIEJIDHEGBK_JOHPKPGOGHD_OFFSET))(this);
		}

		::OMLGPGPJGJK* JDKPFHDHBBH()
		{
			return ((::OMLGPGPJGJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIEJIDHEGBK_JDKPFHDHBBH_OFFSET))(this);
		}

		static ::MIEJIDHEGBK* BPLPBPMEODA(::ICKLANINJDB* a1)
		{
			return ((::MIEJIDHEGBK*(*)(::ICKLANINJDB*))((::PBYTE)hIl2Cpp + MIEJIDHEGBK_BPLPBPMEODA_OFFSET))(a1);
		}

	};
