#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCAFLGBOMFN;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JKCPMBNBMPG_AEJBNCANLDK_OFFSET UNITYSDK_OFFSET(0x17B1B560)
#define JKCPMBNBMPG_AHFLOHDAAHE_OFFSET UNITYSDK_OFFSET(0x17B1B330)
#define JKCPMBNBMPG_CTOR_OFFSET UNITYSDK_OFFSET(0x17B1B6C0)
#define JKCPMBNBMPG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B1A760)
#define JKCPMBNBMPG_GFEBHNKPENL_OFFSET UNITYSDK_OFFSET(0x17B1B4C0)
#define JKCPMBNBMPG_GMICIHPLJHI_OFFSET UNITYSDK_OFFSET(0x17B1B650)
#define JKCPMBNBMPG_GOALMCNMJJD_OFFSET UNITYSDK_OFFSET(0x17B1B380)
#define JKCPMBNBMPG_HNHKBFLDBJI_OFFSET UNITYSDK_OFFSET(0x17B1AA80)
#define JKCPMBNBMPG_JGADFPOHBIE_OFFSET UNITYSDK_OFFSET(0x17B1B5B0)
#define JKCPMBNBMPG_KCIEEJPFOCM_OFFSET UNITYSDK_OFFSET(0x17B1ABA0)
#define JKCPMBNBMPG_KDGDOGEFKPB_OFFSET UNITYSDK_OFFSET(0x17B1B140)
#define JKCPMBNBMPG_LNNICOPFEBI_OFFSET UNITYSDK_OFFSET(0x17B1ACC0)

inline static constexpr unsigned int JKCPMBNBMPG_TypeDefinitionIndex = 73676;

	class JKCPMBNBMPG : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::FCAFLGBOMFN*>* DNHGMBPFOLN; // 0x10
		::FCAFLGBOMFN* KBLKJLOIEKG; // 0x18
		::System::Boolean JJFKNFLEOIL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKCPMBNBMPG_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKCPMBNBMPG_DISPOSE_OFFSET))(this);
		}

		::System::Void KCIEEJPFOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKCPMBNBMPG_KCIEEJPFOCM_OFFSET))(this);
		}

		::System::Void HNHKBFLDBJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKCPMBNBMPG_HNHKBFLDBJI_OFFSET))(this);
		}

		::System::Void LNNICOPFEBI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JKCPMBNBMPG_LNNICOPFEBI_OFFSET))(this, a1);
		}

		::System::Void AHFLOHDAAHE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JKCPMBNBMPG_AHFLOHDAAHE_OFFSET))(this, a1);
		}

		::System::Void GFEBHNKPENL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JKCPMBNBMPG_GFEBHNKPENL_OFFSET))(this, a1);
		}

		::System::Void KDGDOGEFKPB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JKCPMBNBMPG_KDGDOGEFKPB_OFFSET))(this, a1);
		}

		::System::Void GMICIHPLJHI(::FCAFLGBOMFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCAFLGBOMFN*))((::PBYTE)hIl2Cpp + JKCPMBNBMPG_GMICIHPLJHI_OFFSET))(this, a1);
		}

		::System::Void GOALMCNMJJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKCPMBNBMPG_GOALMCNMJJD_OFFSET))(this);
		}

		::System::Void JGADFPOHBIE(::FCAFLGBOMFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCAFLGBOMFN*))((::PBYTE)hIl2Cpp + JKCPMBNBMPG_JGADFPOHBIE_OFFSET))(this, a1);
		}

		::System::Void AEJBNCANLDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKCPMBNBMPG_AEJBNCANLDK_OFFSET))(this);
		}

	};
