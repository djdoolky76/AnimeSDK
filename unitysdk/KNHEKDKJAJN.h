#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class ECPEBMKLBBN_JCEKJBFHBCJ;
class FJAKNHFCIDD;
class IDOLCJGLMKP;
class KBGGKIJMICI;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KNHEKDKJAJN_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x18645510)
#define KNHEKDKJAJN_GIEOEDAPAHL_1_OFFSET UNITYSDK_OFFSET(0x186453C0)
#define KNHEKDKJAJN_GIEOEDAPAHL_OFFSET UNITYSDK_OFFSET(0x18644E80)
#define KNHEKDKJAJN_HJGAADOHCHF_1_OFFSET UNITYSDK_OFFSET(0x186455A0)
#define KNHEKDKJAJN_HJGAADOHCHF_2_OFFSET UNITYSDK_OFFSET(0x18645830)
#define KNHEKDKJAJN_HJGAADOHCHF_OFFSET UNITYSDK_OFFSET(0x18644FC0)
#define KNHEKDKJAJN_NLCHKEPJAJE_1_OFFSET UNITYSDK_OFFSET(0x18645640)
#define KNHEKDKJAJN_NLCHKEPJAJE_2_OFFSET UNITYSDK_OFFSET(0x18645250)
#define KNHEKDKJAJN_NLCHKEPJAJE_OFFSET UNITYSDK_OFFSET(0x186452E0)
#define KNHEKDKJAJN_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x186460E0)
#define KNHEKDKJAJN_ONOPOCOCFMI_OFFSET UNITYSDK_OFFSET(0x18644C70)
#define KNHEKDKJAJN_ONSTART_OFFSET UNITYSDK_OFFSET(0x18644A10)
#define KNHEKDKJAJN__CTOR_OFFSET UNITYSDK_OFFSET(0x18644A70)

inline static constexpr unsigned int KNHEKDKJAJN_TypeDefinitionIndex = 85601;

class KNHEKDKJAJN : public ::JGELKBLKFHE
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::FJAKNHFCIDD*>* CHDDOGILHKK; // 0x18
	::System::Collections::Generic::List_1<::IDOLCJGLMKP*>* GFDMIEBCJND; // 0x20
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::FJAKNHFCIDD*>>* AMLIJBMNEKL; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::FJAKNHFCIDD*>* HFPFDAAGGDB; // 0x30
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::FJAKNHFCIDD*>>* PKNJFNHCLGA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHEKDKJAJN__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHEKDKJAJN_ONSTART_OFFSET))(this);
	}

	::System::Void ONOPOCOCFMI(::IDOLCJGLMKP* FCGFMELJHNL)
	{
		return ((::System::Void(*)(::PVOID, ::IDOLCJGLMKP*))((::PBYTE)hIl2Cpp + KNHEKDKJAJN_ONOPOCOCFMI_OFFSET))(this, FCGFMELJHNL);
	}

	::System::Void GIEOEDAPAHL(::System::Int32 JJGNKFNINLM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNHEKDKJAJN_GIEOEDAPAHL_OFFSET))(this, JJGNKFNINLM);
	}

	::System::Void HJGAADOHCHF(::System::Int32 KANJODNFFOI, ::IDOLCJGLMKP* FCGFMELJHNL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::IDOLCJGLMKP*))((::PBYTE)hIl2Cpp + KNHEKDKJAJN_HJGAADOHCHF_OFFSET))(this, KANJODNFFOI, FCGFMELJHNL);
	}

	::System::Void NLCHKEPJAJE(::KBGGKIJMICI* KANJODNFFOI)
	{
		return ((::System::Void(*)(::PVOID, ::KBGGKIJMICI*))((::PBYTE)hIl2Cpp + KNHEKDKJAJN_NLCHKEPJAJE_OFFSET))(this, KANJODNFFOI);
	}

	::System::Void GIEOEDAPAHL_1(::System::String* JJGNKFNINLM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KNHEKDKJAJN_GIEOEDAPAHL_1_OFFSET))(this, JJGNKFNINLM);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHEKDKJAJN_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void HJGAADOHCHF_1(::IDOLCJGLMKP* FCGFMELJHNL, ::Il2CppArray<::System::Int32>* HFPFDAAGGDB)
	{
		return ((::System::Void(*)(::PVOID, ::IDOLCJGLMKP*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + KNHEKDKJAJN_HJGAADOHCHF_1_OFFSET))(this, FCGFMELJHNL, HFPFDAAGGDB);
	}

	::System::Void NLCHKEPJAJE_1(::ECPEBMKLBBN_JCEKJBFHBCJ* DEKJDEPKKLH)
	{
		return ((::System::Void(*)(::PVOID, ::ECPEBMKLBBN_JCEKJBFHBCJ*))((::PBYTE)hIl2Cpp + KNHEKDKJAJN_NLCHKEPJAJE_1_OFFSET))(this, DEKJDEPKKLH);
	}

	::System::Void NLCHKEPJAJE_2(::System::Int32 JJGNKFNINLM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNHEKDKJAJN_NLCHKEPJAJE_2_OFFSET))(this, JJGNKFNINLM);
	}

	::System::String* HJGAADOHCHF_2(::IDOLCJGLMKP* FCGFMELJHNL, ::System::String* KANJODNFFOI)
	{
		return ((::System::String*(*)(::PVOID, ::IDOLCJGLMKP*, ::System::String*))((::PBYTE)hIl2Cpp + KNHEKDKJAJN_HJGAADOHCHF_2_OFFSET))(this, FCGFMELJHNL, KANJODNFFOI);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHEKDKJAJN_OKJCHFGIKBH_OFFSET))(this);
	}
};
