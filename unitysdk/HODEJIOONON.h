#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class MJAOHLLPLGK;
class PFEKPLADKKC;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HODEJIOONON_BPMDECMACHN_OFFSET UNITYSDK_OFFSET(0x1A388990)
#define HODEJIOONON_CTOR_OFFSET UNITYSDK_OFFSET(0x1A388220)
#define HODEJIOONON_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A388350)
#define HODEJIOONON_FCAGLHJCEMM_OFFSET UNITYSDK_OFFSET(0x1A3887D0)
#define HODEJIOONON_FHEONCNDFKN_OFFSET UNITYSDK_OFFSET(0x1A388B80)
#define HODEJIOONON_IIBDBENFDLF_OFFSET UNITYSDK_OFFSET(0x1A388AA0)

inline static constexpr unsigned int HODEJIOONON_TypeDefinitionIndex = 80008;

	class HODEJIOONON : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* FLBPGCDPEAM; // 0x10
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x18
		::PFEKPLADKKC* ALBNGCIHFEO; // 0x20
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* HBDGFLPGFJE; // 0x30
		::System::Boolean FILOLLPDKJJ; // 0x38
		::System::Boolean GIPIBIHIJPH; // 0x39
		::System::Boolean IHHJGINFNOC; // 0x3A
		::System::Byte _padding0[0x1];
		::System::UInt32 BLIHKBHJMIM; // 0x3C
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
