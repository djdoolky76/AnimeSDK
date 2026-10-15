#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwordTrainingPerformanceManagerState.h"
#include "unitysdk/RPG/Client/SwordTrainingPerformanceType.h"
#include "unitysdk/System/Object.h"
class PFKHILJPABF;
namespace RPG::GameCore { class LevelGraphComponent; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ANINFPIPICE_CHNKFBBFOFC_OFFSET UNITYSDK_OFFSET(0x155994A0)
#define ANINFPIPICE_CTOR_OFFSET UNITYSDK_OFFSET(0x15599C00)
#define ANINFPIPICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15598D50)
#define ANINFPIPICE_GDLNALHDEGL_OFFSET UNITYSDK_OFFSET(0x155995A0)
#define ANINFPIPICE_GFOLHLFAACG_OFFSET UNITYSDK_OFFSET(0x15599710)
#define ANINFPIPICE_GMMCLPDKJJC_OFFSET UNITYSDK_OFFSET(0x15598E00)
#define ANINFPIPICE_IOALOMLBLNI_OFFSET UNITYSDK_OFFSET(0x15599B00)
#define ANINFPIPICE_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15598E90)
#define ANINFPIPICE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15598D00)
#define ANINFPIPICE_LPIEFKFLKNH_OFFSET UNITYSDK_OFFSET(0x15599230)
#define ANINFPIPICE_LPPADBGEKJP_1_OFFSET UNITYSDK_OFFSET(0x15599110)
#define ANINFPIPICE_LPPADBGEKJP_OFFSET UNITYSDK_OFFSET(0x15598FF0)
#define ANINFPIPICE_MBBKDNKHKEK_OFFSET UNITYSDK_OFFSET(0x15599A90)
#define ANINFPIPICE_NAKIGFCHAMF_OFFSET UNITYSDK_OFFSET(0x15598F40)
#define ANINFPIPICE_ODPIODABKFK_OFFSET UNITYSDK_OFFSET(0x155993D0)

inline static constexpr unsigned int ANINFPIPICE_TypeDefinitionIndex = 61990;

	class ANINFPIPICE : public ::System::Object
	{
	public:
		::PFKHILJPABF* COKJPELDDIE; // 0x10
		::RPG::GameCore::LevelGraphComponent* GIHMEJMLALA; // 0x18
		::PFKHILJPABF* HEAAOANCOJB; // 0x20
		::RPG::Client::SwordTrainingPerformanceManagerState PKAJCJJBILK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANINFPIPICE_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANINFPIPICE_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANINFPIPICE_DISPOSE_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANINFPIPICE_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void NAKIGFCHAMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANINFPIPICE_NAKIGFCHAMF_OFFSET))(this);
		}

		::System::Void LPPADBGEKJP(::RPG::Client::SwordTrainingPerformanceType a1, ::System::UInt32 a2, ::System::Action* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingPerformanceType, ::System::UInt32, ::System::Action*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ANINFPIPICE_LPPADBGEKJP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LPPADBGEKJP_1(::RPG::Client::SwordTrainingPerformanceType a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Action* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingPerformanceType, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ANINFPIPICE_LPPADBGEKJP_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ODPIODABKFK(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::RPG::Client::SwordTrainingPerformanceType a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::Client::SwordTrainingPerformanceType, ::System::Action*))((::PBYTE)hIl2Cpp + ANINFPIPICE_ODPIODABKFK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CHNKFBBFOFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANINFPIPICE_CHNKFBBFOFC_OFFSET))(this);
		}

		::System::Void LPIEFKFLKNH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANINFPIPICE_LPIEFKFLKNH_OFFSET))(this);
		}

		::System::Void MBBKDNKHKEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANINFPIPICE_MBBKDNKHKEK_OFFSET))(this);
		}

		::System::Void IOALOMLBLNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANINFPIPICE_IOALOMLBLNI_OFFSET))(this);
		}

		::System::Boolean GDLNALHDEGL(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ANINFPIPICE_GDLNALHDEGL_OFFSET))(this, a1);
		}

		::System::Boolean GFOLHLFAACG(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ANINFPIPICE_GFOLHLFAACG_OFFSET))(this, a1);
		}

		::System::Void GMMCLPDKJJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANINFPIPICE_GMMCLPDKJJC_OFFSET))(this);
		}

	};
