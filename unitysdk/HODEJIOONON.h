#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class MJAOHLLPLGK;
class PFEKPLADKKC;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HODEJIOONON_BPMDECMACHN_OFFSET UNITYSDK_OFFSET(0x16D52710)
#define HODEJIOONON_CTOR_OFFSET UNITYSDK_OFFSET(0x16D51FA0)
#define HODEJIOONON_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16D520D0)
#define HODEJIOONON_FCAGLHJCEMM_OFFSET UNITYSDK_OFFSET(0x16D52550)
#define HODEJIOONON_FHEONCNDFKN_OFFSET UNITYSDK_OFFSET(0x16D52900)
#define HODEJIOONON_IIBDBENFDLF_OFFSET UNITYSDK_OFFSET(0x16D52820)

inline static constexpr unsigned int HODEJIOONON_TypeDefinitionIndex = 80009;

	class HODEJIOONON : public ::System::Object
	{
	public:
		::PFEKPLADKKC* ALBNGCIHFEO; // 0x10
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* FLBPGCDPEAM; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* HBDGFLPGFJE; // 0x28
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x30
		::System::UInt32 BLIHKBHJMIM; // 0x38
		::System::Boolean IHHJGINFNOC; // 0x3C
		::System::Boolean FILOLLPDKJJ; // 0x3D
		::System::Boolean GIPIBIHIJPH; // 0x3E
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + HODEJIOONON_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HODEJIOONON_EXECUTE_OFFSET))(this);
		}

		::System::Boolean BPMDECMACHN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HODEJIOONON_BPMDECMACHN_OFFSET))(this);
		}

		::System::Boolean FCAGLHJCEMM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HODEJIOONON_FCAGLHJCEMM_OFFSET))(this);
		}

		::System::Boolean IIBDBENFDLF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HODEJIOONON_IIBDBENFDLF_OFFSET))(this);
		}

		::System::Void FHEONCNDFKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HODEJIOONON_FHEONCNDFKN_OFFSET))(this);
		}

	};
