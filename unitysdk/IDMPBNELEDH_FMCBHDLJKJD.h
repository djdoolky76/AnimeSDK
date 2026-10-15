#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKIODIMJPNA;
class IDMPBNELEDH;
class IDMPBNELEDH_FMCBHDLJKJD_CKBAEFHDPDG;
namespace RPG::GameCore { class LevelCurveInstance; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IDMPBNELEDH_FMCBHDLJKJD_BHHKMMEJDKA_OFFSET UNITYSDK_OFFSET(0x15EDC3F0)
#define IDMPBNELEDH_FMCBHDLJKJD_CTOR_OFFSET UNITYSDK_OFFSET(0x15EDC360)
#define IDMPBNELEDH_FMCBHDLJKJD_EFPOOKBLIAO_OFFSET UNITYSDK_OFFSET(0x15EDD150)
#define IDMPBNELEDH_FMCBHDLJKJD_FPMOOPGJEJF_OFFSET UNITYSDK_OFFSET(0x15EDD450)
#define IDMPBNELEDH_FMCBHDLJKJD_GNNPFBBMFLA_OFFSET UNITYSDK_OFFSET(0x15EDC8D0)
#define IDMPBNELEDH_FMCBHDLJKJD_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15EDC930)
#define IDMPBNELEDH_FMCBHDLJKJD_HIFNCJIKNJO_OFFSET UNITYSDK_OFFSET(0x15EDD3B0)
#define IDMPBNELEDH_FMCBHDLJKJD_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15EDCC90)
#define IDMPBNELEDH_FMCBHDLJKJD_LFBPHCBIELD_OFFSET UNITYSDK_OFFSET(0x15EDC730)
#define IDMPBNELEDH_FMCBHDLJKJD_NPPBDLLOKJO_OFFSET UNITYSDK_OFFSET(0x15EDD7D0)

inline static constexpr unsigned int IDMPBNELEDH_FMCBHDLJKJD_TypeDefinitionIndex = 60198;

	class IDMPBNELEDH_FMCBHDLJKJD : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelCurveInstance* PNOHBBMHGLB; // 0x10
		::IDMPBNELEDH* CFKHNPGEAJA; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* DALBPHIMMII; // 0x20
		::System::Single HNEFLJOEPIM; // 0x28
		::System::Void _ctor(::IDMPBNELEDH* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IDMPBNELEDH*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IDMPBNELEDH_FMCBHDLJKJD_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GNNPFBBMFLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMPBNELEDH_FMCBHDLJKJD_GNNPFBBMFLA_OFFSET))(this);
		}

		::System::Void BHHKMMEJDKA(::FKIODIMJPNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKIODIMJPNA*))((::PBYTE)hIl2Cpp + IDMPBNELEDH_FMCBHDLJKJD_BHHKMMEJDKA_OFFSET))(this, a1);
		}

		::System::Void LFBPHCBIELD(::FKIODIMJPNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKIODIMJPNA*))((::PBYTE)hIl2Cpp + IDMPBNELEDH_FMCBHDLJKJD_LFBPHCBIELD_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IDMPBNELEDH_FMCBHDLJKJD_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Single HIFNCJIKNJO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMPBNELEDH_FMCBHDLJKJD_HIFNCJIKNJO_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMPBNELEDH_FMCBHDLJKJD_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void EFPOOKBLIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMPBNELEDH_FMCBHDLJKJD_EFPOOKBLIAO_OFFSET))(this);
		}

		::System::Void NPPBDLLOKJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMPBNELEDH_FMCBHDLJKJD_NPPBDLLOKJO_OFFSET))(this);
		}

		::System::Void FPMOOPGJEJF(::IDMPBNELEDH_FMCBHDLJKJD_CKBAEFHDPDG* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::IDMPBNELEDH_FMCBHDLJKJD_CKBAEFHDPDG*, ::System::Single))((::PBYTE)hIl2Cpp + IDMPBNELEDH_FMCBHDLJKJD_FPMOOPGJEJF_OFFSET))(this, a1, a2);
		}

	};
