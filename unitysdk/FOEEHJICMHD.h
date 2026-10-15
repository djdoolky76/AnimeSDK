#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFNPIPBLFJM;
class FINMGDLKNMH;
namespace RPG::Client::B51Racing { class B51RacingScoreBoardPageViewModel; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FOEEHJICMHD_CTOR_OFFSET UNITYSDK_OFFSET(0x158E71E0)
#define FOEEHJICMHD_DBEPONCEPNH_1_OFFSET UNITYSDK_OFFSET(0x158E6420)
#define FOEEHJICMHD_DBEPONCEPNH_OFFSET UNITYSDK_OFFSET(0x158E63B0)
#define FOEEHJICMHD_DGJFBMGGALA_OFFSET UNITYSDK_OFFSET(0x158E5E20)
#define FOEEHJICMHD_HHLJLAEGHMA_OFFSET UNITYSDK_OFFSET(0x158E6CC0)
#define FOEEHJICMHD_KDJLAMJJCDK_OFFSET UNITYSDK_OFFSET(0x158E6F00)

	class FOEEHJICMHD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOEEHJICMHD_CTOR_OFFSET))(this);
		}

		::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel* DGJFBMGGALA(::System::Collections::Generic::IReadOnlyList_1<::AFNPIPBLFJM*>* a1)
		{
			return ((::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::AFNPIPBLFJM*>*))((::PBYTE)hIl2Cpp + FOEEHJICMHD_DGJFBMGGALA_OFFSET))(this, a1);
		}

		::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel* DBEPONCEPNH(::System::Collections::Generic::IReadOnlyList_1<::AFNPIPBLFJM*>* a1, ::FINMGDLKNMH* a2)
		{
			return ((::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::AFNPIPBLFJM*>*, ::FINMGDLKNMH*))((::PBYTE)hIl2Cpp + FOEEHJICMHD_DBEPONCEPNH_OFFSET))(this, a1, a2);
		}

		::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel* DBEPONCEPNH_1(::System::Collections::Generic::IReadOnlyList_1<::AFNPIPBLFJM*>* a1, ::FINMGDLKNMH* a2, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a3)
		{
			return ((::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::AFNPIPBLFJM*>*, ::FINMGDLKNMH*, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + FOEEHJICMHD_DBEPONCEPNH_1_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Int32 HHLJLAEGHMA(::System::Collections::Generic::IReadOnlyList_1<::AFNPIPBLFJM*>* a1)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::IReadOnlyList_1<::AFNPIPBLFJM*>*))((::PBYTE)hIl2Cpp + FOEEHJICMHD_HHLJLAEGHMA_OFFSET))(a1);
		}

		static ::System::Int32 KDJLAMJJCDK(::System::UInt32 a1, ::FINMGDLKNMH* a2, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a3)
		{
			return ((::System::Int32(*)(::System::UInt32, ::FINMGDLKNMH*, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + FOEEHJICMHD_KDJLAMJJCDK_OFFSET))(a1, a2, a3);
		}

	};
