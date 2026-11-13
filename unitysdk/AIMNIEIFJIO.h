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

#define AIMNIEIFJIO_CTOR_OFFSET UNITYSDK_OFFSET(0x19D28F80)
#define AIMNIEIFJIO_JJOBPJGFNAC_OFFSET UNITYSDK_OFFSET(0x19D29790)
#define AIMNIEIFJIO_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x19D29210)
#define AIMNIEIFJIO_JLGCGAAPEFH_OFFSET UNITYSDK_OFFSET(0x19D299C0)
#define AIMNIEIFJIO_PLELODHLCEG_OFFSET UNITYSDK_OFFSET(0x19D298C0)

inline static constexpr unsigned int AIMNIEIFJIO_TypeDefinitionIndex = 79892;

	class AIMNIEIFJIO : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt64>* JBACCJGHMBF; // 0x10
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x18
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* FELLCJPEMNA; // 0x28
		::ALMCMIDIKDD* DBCDNDPKGJF; // 0x30
		::JHKLFDOEELE* DJEBMFEGCHN; // 0x38
		::System::Single ENHODBOKIDN; // 0x40
		::System::Boolean KGHINGAEMLN; // 0x44
		::System::Byte _padding0[0x3];
		::System::UInt32 PPPKKCFIOFF; // 0x48
		::System::Single PBLGHIGPEIP; // 0x4C
		::System::UInt32 IFCFDIHGOKA; // 0x50
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
