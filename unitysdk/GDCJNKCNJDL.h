#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDCJNKCNJDL;
namespace RPG::Client::ActivityIdleLive { class IdleLiveDanmuContentData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GDCJNKCNJDL_BAFBFAOLCHN_OFFSET UNITYSDK_OFFSET(0x159953D0)
#define GDCJNKCNJDL_CIEDAIIDFDF_OFFSET UNITYSDK_OFFSET(0x15995EE0)
#define GDCJNKCNJDL_CTOR_OFFSET UNITYSDK_OFFSET(0x15995530)
#define GDCJNKCNJDL_DGPEEMEOKEG_OFFSET UNITYSDK_OFFSET(0x15995810)
#define GDCJNKCNJDL_DOHGIOOEEIN_OFFSET UNITYSDK_OFFSET(0x15995F80)
#define GDCJNKCNJDL_GET_ID_OFFSET UNITYSDK_OFFSET(0x159953C0)
#define GDCJNKCNJDL_GET_INTERVAL_OFFSET UNITYSDK_OFFSET(0x159953A0)
#define GDCJNKCNJDL_GET_ISENDED_OFFSET UNITYSDK_OFFSET(0x15995380)
#define GDCJNKCNJDL_KBLKNNMBBOF_OFFSET UNITYSDK_OFFSET(0x15995D50)
#define GDCJNKCNJDL_KGKEEBPEJBN_OFFSET UNITYSDK_OFFSET(0x15995DC0)
#define GDCJNKCNJDL_OEKDBNBEDKL_OFFSET UNITYSDK_OFFSET(0x15995420)
#define GDCJNKCNJDL_PBKAECLHOBD_OFFSET UNITYSDK_OFFSET(0x15995650)
#define GDCJNKCNJDL_SET_INTERVAL_OFFSET UNITYSDK_OFFSET(0x159953B0)
#define GDCJNKCNJDL_SET_ISENDED_OFFSET UNITYSDK_OFFSET(0x15995390)

	class GDCJNKCNJDL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDanmuContentData*>* IONEOGPDOBA; // 0x10
		::System::Int32 GHLCFOFDKGK; // 0x18
		::System::Single FLBLLMPABOJ; // 0x1C
		::System::Single _Interval_k__BackingField; // 0x20
		::System::Int32 CLNKKOFGAAA; // 0x24
		::System::Single EAMEIJKODBG; // 0x28
		::System::UInt32 PHCCMACKMNO; // 0x2C
		::System::UInt32 IBEIJHJAELJ; // 0x30
		::System::Boolean AKMOGKHIDPG; // 0x34
		::System::Boolean _IsEnded_k__BackingField; // 0x35
		::System::Boolean JHGKPMKMLKI; // 0x36
		::System::Boolean GHJANJEEEBL; // 0x37
		::System::UInt32 _Id_k__BackingField; // 0x38
		::System::Void _ctor(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::System::Single a2, ::System::UInt32 a3, ::System::Single a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Single, ::System::UInt32, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GDCJNKCNJDL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean get_IsEnded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDCJNKCNJDL_GET_ISENDED_OFFSET))(this);
		}

		::System::Void set_IsEnded(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GDCJNKCNJDL_SET_ISENDED_OFFSET))(this, a1);
		}

		::System::Single get_Interval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GDCJNKCNJDL_GET_INTERVAL_OFFSET))(this);
		}

		::System::Void set_Interval(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GDCJNKCNJDL_SET_INTERVAL_OFFSET))(this, a1);
		}

		::System::UInt32 get_Id()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDCJNKCNJDL_GET_ID_OFFSET))(this);
		}

		::System::Void BAFBFAOLCHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDCJNKCNJDL_BAFBFAOLCHN_OFFSET))(this, a1);
		}

		static ::GDCJNKCNJDL* OEKDBNBEDKL(::System::UInt32 a1)
		{
			return ((::GDCJNKCNJDL*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GDCJNKCNJDL_OEKDBNBEDKL_OFFSET))(a1);
		}

		static ::GDCJNKCNJDL* PBKAECLHOBD(::System::UInt32 a1)
		{
			return ((::GDCJNKCNJDL*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GDCJNKCNJDL_PBKAECLHOBD_OFFSET))(a1);
		}

		::System::Void DGPEEMEOKEG(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + GDCJNKCNJDL_DGPEEMEOKEG_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDanmuContentData* KGKEEBPEJBN()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDanmuContentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDCJNKCNJDL_KGKEEBPEJBN_OFFSET))(this);
		}

		::System::Void CIEDAIIDFDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDCJNKCNJDL_CIEDAIIDFDF_OFFSET))(this);
		}

		::System::Int32 KBLKNNMBBOF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDCJNKCNJDL_KBLKNNMBBOF_OFFSET))(this);
		}

		::System::Void DOHGIOOEEIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDCJNKCNJDL_DOHGIOOEEIN_OFFSET))(this);
		}

	};
