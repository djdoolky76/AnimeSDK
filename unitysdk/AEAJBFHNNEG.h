#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALDLKGCNIAD;
class EFODGECFLLC;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AEAJBFHNNEG_CTOR_OFFSET UNITYSDK_OFFSET(0xB1489E0)
#define AEAJBFHNNEG_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB148CE0)
#define AEAJBFHNNEG_GET__CURFOGID_OFFSET UNITYSDK_OFFSET(0xB149C80)
#define AEAJBFHNNEG_GET__UNITPIXELCOUNT_OFFSET UNITYSDK_OFFSET(0xB149CA0)
#define AEAJBFHNNEG_GOENDEDEEHI_OFFSET UNITYSDK_OFFSET(0xB148A10)
#define AEAJBFHNNEG_HBHILFJNAHA_OFFSET UNITYSDK_OFFSET(0xB149890)
#define AEAJBFHNNEG_HFOGGEPFKMN_OFFSET UNITYSDK_OFFSET(0xB148D30)
#define AEAJBFHNNEG_MEKELLFMGCA_OFFSET UNITYSDK_OFFSET(0xB149A40)
#define AEAJBFHNNEG_PNJPJAABLIP_OFFSET UNITYSDK_OFFSET(0xB149460)
#define AEAJBFHNNEG_SET__CURFOGID_OFFSET UNITYSDK_OFFSET(0xB149C90)
#define AEAJBFHNNEG_SET__UNITPIXELCOUNT_OFFSET UNITYSDK_OFFSET(0xB149CB0)

	class AEAJBFHNNEG : public ::System::Object
	{
	public:
		::EFODGECFLLC* EEFMDEHLLFI; // 0x10
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x18
		::System::Collections::Generic::List_1<::ALDLKGCNIAD*>* CHKMCJKNFBO; // 0x20
		::System::Int16 __UnitPixelCount_k__BackingField; // 0x28
		::System::Byte _padding0[0x2];
		::System::UInt32 __CurFogID_k__BackingField; // 0x2C
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + AEAJBFHNNEG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void GOENDEDEEHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEAJBFHNNEG_GOENDEDEEHI_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEAJBFHNNEG_EXECUTE_OFFSET))(this);
		}

		::System::Void HFOGGEPFKMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEAJBFHNNEG_HFOGGEPFKMN_OFFSET))(this);
		}

		::System::Void HBHILFJNAHA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AEAJBFHNNEG_HBHILFJNAHA_OFFSET))(this, a1);
		}

		::ALDLKGCNIAD* PNJPJAABLIP(::System::UInt32 a1)
		{
			return ((::ALDLKGCNIAD*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AEAJBFHNNEG_PNJPJAABLIP_OFFSET))(this, a1);
		}

		::System::Boolean MEKELLFMGCA(::ALDLKGCNIAD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALDLKGCNIAD*))((::PBYTE)hIl2Cpp + AEAJBFHNNEG_MEKELLFMGCA_OFFSET))(this, a1);
		}

		::System::UInt32 get__CurFogID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEAJBFHNNEG_GET__CURFOGID_OFFSET))(this);
		}

		::System::Void set__CurFogID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AEAJBFHNNEG_SET__CURFOGID_OFFSET))(this, a1);
		}

		::System::Int16 get__UnitPixelCount()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + AEAJBFHNNEG_GET__UNITPIXELCOUNT_OFFSET))(this);
		}

		::System::Void set__UnitPixelCount(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + AEAJBFHNNEG_SET__UNITPIXELCOUNT_OFFSET))(this, a1);
		}

	};
