#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwordTrainingPerformanceManagerState.h"
#include "unitysdk/RPG/Client/SwordTrainingPerformanceType.h"
#include "unitysdk/System/Object.h"
class PFKHILJPABF;
namespace RPG::GameCore { class LevelGraphComponent; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ANINFPIPICE_CHNKFBBFOFC_OFFSET UNITYSDK_OFFSET(0x1A825290)
#define ANINFPIPICE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A8259F0)
#define ANINFPIPICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A824B80)
#define ANINFPIPICE_GDLNALHDEGL_OFFSET UNITYSDK_OFFSET(0x1A825390)
#define ANINFPIPICE_GFOLHLFAACG_OFFSET UNITYSDK_OFFSET(0x1A825500)
#define ANINFPIPICE_GMMCLPDKJJC_OFFSET UNITYSDK_OFFSET(0x1A824C20)
#define ANINFPIPICE_IOALOMLBLNI_OFFSET UNITYSDK_OFFSET(0x1A8258F0)
#define ANINFPIPICE_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1A824CA0)
#define ANINFPIPICE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1A824B30)
#define ANINFPIPICE_LPIEFKFLKNH_OFFSET UNITYSDK_OFFSET(0x1A825020)
#define ANINFPIPICE_LPPADBGEKJP_1_OFFSET UNITYSDK_OFFSET(0x1A824F00)
#define ANINFPIPICE_LPPADBGEKJP_OFFSET UNITYSDK_OFFSET(0x1A824DE0)
#define ANINFPIPICE_MBBKDNKHKEK_OFFSET UNITYSDK_OFFSET(0x1A825880)
#define ANINFPIPICE_NAKIGFCHAMF_OFFSET UNITYSDK_OFFSET(0x1A824D40)
#define ANINFPIPICE_ODPIODABKFK_OFFSET UNITYSDK_OFFSET(0x1A8251C0)

inline static constexpr unsigned int ANINFPIPICE_TypeDefinitionIndex = 63402;

	class ANINFPIPICE : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelGraphComponent* GIHMEJMLALA; // 0x10
		::PFKHILJPABF* HEAAOANCOJB; // 0x18
		::PFKHILJPABF* COKJPELDDIE; // 0x20
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
