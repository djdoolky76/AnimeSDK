#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EJCAFDPKILE.h"
class ALMCMIDIKDD;
class HLJNBBHKKMI;
class JHKLFDOEELE;
class JMHHBMNIJJB;
class MJAOHLLPLGK;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define AIMNIEIFJIO_CTOR_OFFSET UNITYSDK_OFFSET(0x12D85E30)
#define AIMNIEIFJIO_JJOBPJGFNAC_OFFSET UNITYSDK_OFFSET(0x12D86640)
#define AIMNIEIFJIO_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x12D860C0)
#define AIMNIEIFJIO_JLGCGAAPEFH_OFFSET UNITYSDK_OFFSET(0x12D86870)
#define AIMNIEIFJIO_PLELODHLCEG_OFFSET UNITYSDK_OFFSET(0x12D86770)

inline static constexpr unsigned int AIMNIEIFJIO_TypeDefinitionIndex = 79893;

	class AIMNIEIFJIO : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt64>* JBACCJGHMBF; // 0x10
		::JHKLFDOEELE* DJEBMFEGCHN; // 0x18
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x20
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x28
		::ALMCMIDIKDD* DBCDNDPKGJF; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* FELLCJPEMNA; // 0x38
		::System::UInt32 PPPKKCFIOFF; // 0x40
		::System::UInt32 IFCFDIHGOKA; // 0x44
		::System::Single PBLGHIGPEIP; // 0x48
		::System::Single ENHODBOKIDN; // 0x4C
		::System::Boolean KGHINGAEMLN; // 0x50
		// static const ::System::Object OMBCGKHLNNO; // 0x0
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + AIMNIEIFJIO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AIMNIEIFJIO_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean JJOBPJGFNAC(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AIMNIEIFJIO_JJOBPJGFNAC_OFFSET))(this, a1);
		}

		::System::Boolean PLELODHLCEG(::EJCAFDPKILE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EJCAFDPKILE))((::PBYTE)hIl2Cpp + AIMNIEIFJIO_PLELODHLCEG_OFFSET))(this, a1);
		}

		::System::Void JLGCGAAPEFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIMNIEIFJIO_JLGCGAAPEFH_OFFSET))(this);
		}

	};
