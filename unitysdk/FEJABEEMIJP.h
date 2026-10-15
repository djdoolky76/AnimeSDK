#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEJABEEMIJP_OpenState.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/MJKLAEILHPK.h"
class FBNEEJIHIMG;
namespace RPG::Client { class CakeCatchCatData; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FEJABEEMIJP_BOEHJLLAILJ_OFFSET UNITYSDK_OFFSET(0x157247B0)
#define FEJABEEMIJP_CTOR_OFFSET UNITYSDK_OFFSET(0x15723FD0)
#define FEJABEEMIJP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15723FE0)
#define FEJABEEMIJP_GFIJEIEFBIC_OFFSET UNITYSDK_OFFSET(0x15724950)
#define FEJABEEMIJP_LHENKGJJDJN_OFFSET UNITYSDK_OFFSET(0x15724360)
#define FEJABEEMIJP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15724190)
#define FEJABEEMIJP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x157240F0)
#define FEJABEEMIJP_TICK_OFFSET UNITYSDK_OFFSET(0x15724570)

	class FEJABEEMIJP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::FBNEEJIHIMG* OFKGLJOAMLD; // 0x20
		::MJKLAEILHPK OLMFJLICIIA; // 0x28
		::FEJABEEMIJP_OpenState HKHDOFAKKDE; // 0x58
		::System::Single PGMIOKKLHIE; // 0x5C
		// static const ::System::Object CFKBAFDGANF; // 0x0
		// static const ::System::String* ONOAHPEMJBB; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FBNEEJIHIMG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FBNEEJIHIMG*))((::PBYTE)hIl2Cpp + FEJABEEMIJP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEJABEEMIJP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEJABEEMIJP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEJABEEMIJP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FEJABEEMIJP_TICK_OFFSET))(this, a1);
		}

		::System::Void GFIJEIEFBIC(::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>*))((::PBYTE)hIl2Cpp + FEJABEEMIJP_GFIJEIEFBIC_OFFSET))(this, a1);
		}

		::System::Void BOEHJLLAILJ(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + FEJABEEMIJP_BOEHJLLAILJ_OFFSET))(this, a1);
		}

		::System::Void LHENKGJJDJN(::FEJABEEMIJP_OpenState a1)
		{
			return ((::System::Void(*)(::PVOID, ::FEJABEEMIJP_OpenState))((::PBYTE)hIl2Cpp + FEJABEEMIJP_LHENKGJJDJN_OFFSET))(this, a1);
		}

	};
