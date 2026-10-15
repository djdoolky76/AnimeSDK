#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DanmuType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DNNCLMDGIFH.h"
class HBPJOJJIPPM;
class MFLJIEBFMOF;
namespace RPG::Client { class MonoDanmuController; }
namespace RPG::GameCore { class DanmuGroupRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABBBGGNFEDE_BELLOEDGFBN_OFFSET UNITYSDK_OFFSET(0xB0E5780)
#define ABBBGGNFEDE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB0E55F0)
#define ABBBGGNFEDE_CTOR_OFFSET UNITYSDK_OFFSET(0xB0E5CA0)
#define ABBBGGNFEDE_LHIAHGJCGFI_OFFSET UNITYSDK_OFFSET(0xB0E5960)
#define ABBBGGNFEDE_OFMKIJCIJCO_OFFSET UNITYSDK_OFFSET(0xB0E5B90)

	class ABBBGGNFEDE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBBGGNFEDE_CTOR_OFFSET))(this);
		}

		::HBPJOJJIPPM* BPLPBPMEODA(::System::UInt32 a1, ::RPG::GameCore::DanmuType a2, ::System::Single a3)
		{
			return ((::HBPJOJJIPPM*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::DanmuType, ::System::Single))((::PBYTE)hIl2Cpp + ABBBGGNFEDE_BPLPBPMEODA_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::MFLJIEBFMOF*>* BELLOEDGFBN(::RPG::GameCore::DanmuGroupRow* a1)
		{
			return ((::System::Collections::Generic::List_1<::MFLJIEBFMOF*>*(*)(::PVOID, ::RPG::GameCore::DanmuGroupRow*))((::PBYTE)hIl2Cpp + ABBBGGNFEDE_BELLOEDGFBN_OFFSET))(this, a1);
		}

		::MFLJIEBFMOF* LHIAHGJCGFI(::RPG::GameCore::DanmuType a1, ::System::UInt32 a2)
		{
			return ((::MFLJIEBFMOF*(*)(::PVOID, ::RPG::GameCore::DanmuType, ::System::UInt32))((::PBYTE)hIl2Cpp + ABBBGGNFEDE_LHIAHGJCGFI_OFFSET))(this, a1, a2);
		}

		::System::Void OFMKIJCIJCO(::RPG::Client::MonoDanmuController* a1, ::DNNCLMDGIFH a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoDanmuController*, ::DNNCLMDGIFH, ::System::Single))((::PBYTE)hIl2Cpp + ABBBGGNFEDE_OFMKIJCIJCO_OFFSET))(this, a1, a2, a3);
		}

	};
