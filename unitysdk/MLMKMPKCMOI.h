#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLFHMKMJNPK.h"
#include "unitysdk/RPG/MVector3.h"
class FDPALAEIHPB;
class KHPOKIKCOFO;

#define MLMKMPKCMOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C263D20)
#define MLMKMPKCMOI_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x1C263E10)
#define MLMKMPKCMOI_LFEIDIIBFNH_OFFSET UNITYSDK_OFFSET(0x1C2641C0)
#define MLMKMPKCMOI_PFNCDENJFAH_OFFSET UNITYSDK_OFFSET(0x1C263D30)

inline static constexpr unsigned int MLMKMPKCMOI_TypeDefinitionIndex = 43363;

	class MLMKMPKCMOI : public ::HLFHMKMJNPK
	{
	public:
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + MLMKMPKCMOI_CTOR_OFFSET))(this, a1);
		}

		::System::Single PFNCDENJFAH(::KHPOKIKCOFO* a1)
		{
			return ((::System::Single(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + MLMKMPKCMOI_PFNCDENJFAH_OFFSET))(this, a1);
		}

		::RPG::MVector3 JAILHGGFLDH(::KHPOKIKCOFO* a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + MLMKMPKCMOI_JAILHGGFLDH_OFFSET))(this, a1);
		}

		::System::Single LFEIDIIBFNH(::KHPOKIKCOFO* a1)
		{
			return ((::System::Single(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + MLMKMPKCMOI_LFEIDIIBFNH_OFFSET))(this, a1);
		}

	};
