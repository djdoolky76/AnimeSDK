#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APOGNPMEHDK;
class OFAHLLPMOBO;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OFAHLLPMOBO_FOINCEBDIPB_BNNKNIJBGPA_OFFSET UNITYSDK_OFFSET(0xBE330F0)
#define OFAHLLPMOBO_FOINCEBDIPB_BOGEMFPOPPL_OFFSET UNITYSDK_OFFSET(0xBE32E80)
#define OFAHLLPMOBO_FOINCEBDIPB_CTOR_OFFSET UNITYSDK_OFFSET(0xBE32BC0)
#define OFAHLLPMOBO_FOINCEBDIPB_ENFFCLICPHI_OFFSET UNITYSDK_OFFSET(0xBE334E0)
#define OFAHLLPMOBO_FOINCEBDIPB_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBE329C0)
#define OFAHLLPMOBO_FOINCEBDIPB_JLNIGEMKDJH_OFFSET UNITYSDK_OFFSET(0xBE33C90)
#define OFAHLLPMOBO_FOINCEBDIPB_KMEMHLGFLMF_OFFSET UNITYSDK_OFFSET(0xBE33530)
#define OFAHLLPMOBO_FOINCEBDIPB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBE32C20)
#define OFAHLLPMOBO_FOINCEBDIPB_NCOHELNNGHF_OFFSET UNITYSDK_OFFSET(0xBE33D30)
#define OFAHLLPMOBO_FOINCEBDIPB_OJHFEAHDAGB_OFFSET UNITYSDK_OFFSET(0xBE333C0)

inline static constexpr unsigned int OFAHLLPMOBO_FOINCEBDIPB_TypeDefinitionIndex = 60225;

	class OFAHLLPMOBO_FOINCEBDIPB : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* PPHNKNLMPIM; // 0x10
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x18
		::APOGNPMEHDK* JKJPFJALGKO; // 0x20
		::System::Collections::Generic::HashSet_1<::System::Int32>* OBJOKEJANKE; // 0x28
		::OFAHLLPMOBO* CFKHNPGEAJA; // 0x30
		::System::Int32 NOLOALOEBGB; // 0x38
		::System::Boolean AOPCDEEJLKP; // 0x3C
		::System::Boolean KAOPBAAJGOM; // 0x3D
		::System::Boolean FPMNBLLLLFI; // 0x3E
		::System::Byte _padding0[0x1];
		::System::Int32 FBJBCCLPMJO; // 0x40
		::System::UInt32 EILMPFEEIJH; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAHLLPMOBO_FOINCEBDIPB_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2, ::APOGNPMEHDK* a3, ::OFAHLLPMOBO* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::APOGNPMEHDK*, ::OFAHLLPMOBO*))((::PBYTE)hIl2Cpp + OFAHLLPMOBO_FOINCEBDIPB_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAHLLPMOBO_FOINCEBDIPB_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void BNNKNIJBGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAHLLPMOBO_FOINCEBDIPB_BNNKNIJBGPA_OFFSET))(this);
		}

		::System::Void ENFFCLICPHI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OFAHLLPMOBO_FOINCEBDIPB_ENFFCLICPHI_OFFSET))(this, a1);
		}

		::System::Void KMEMHLGFLMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAHLLPMOBO_FOINCEBDIPB_KMEMHLGFLMF_OFFSET))(this);
		}

		::System::Void JLNIGEMKDJH(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OFAHLLPMOBO_FOINCEBDIPB_JLNIGEMKDJH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BOGEMFPOPPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAHLLPMOBO_FOINCEBDIPB_BOGEMFPOPPL_OFFSET))(this);
		}

		::System::Void NCOHELNNGHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAHLLPMOBO_FOINCEBDIPB_NCOHELNNGHF_OFFSET))(this);
		}

		::System::Void OJHFEAHDAGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAHLLPMOBO_FOINCEBDIPB_OJHFEAHDAGB_OFFSET))(this);
		}

	};
