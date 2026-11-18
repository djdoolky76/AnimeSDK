#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHEICKDEKAP.h"
#include "unitysdk/System/ValueType.h"

class CBIPDIHEODD;
class HMNIABJLPGA;
class IHIEEEDAMHC;
class IKNGGHOCDBF;
class NIBDDIKJPMO;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FGGMKLLGDKL_CGOKJLCINPN_OFFSET UNITYSDK_OFFSET(0x8CDDA0)
#define FGGMKLLGDKL_HKPJHLAJAGE_OFFSET UNITYSDK_OFFSET(0x8CDC60)
#define FGGMKLLGDKL_JGECEJIHMLG_1_OFFSET UNITYSDK_OFFSET(0x8CDD20)
#define FGGMKLLGDKL_JGECEJIHMLG_2_OFFSET UNITYSDK_OFFSET(0x8CDE00)
#define FGGMKLLGDKL_JGECEJIHMLG_3_OFFSET UNITYSDK_OFFSET(0x8CDF30)
#define FGGMKLLGDKL_JGECEJIHMLG_OFFSET UNITYSDK_OFFSET(0x8CDD10)
#define FGGMKLLGDKL_JIDMADDMGIE_1_OFFSET UNITYSDK_OFFSET(0x8CDD00)
#define FGGMKLLGDKL_JIDMADDMGIE_2_OFFSET UNITYSDK_OFFSET(0x8CDE80)
#define FGGMKLLGDKL_JIDMADDMGIE_3_OFFSET UNITYSDK_OFFSET(0x8CDF20)
#define FGGMKLLGDKL_JIDMADDMGIE_OFFSET UNITYSDK_OFFSET(0x8CDCF0)
#define FGGMKLLGDKL_KJOMLBGCPMF_OFFSET UNITYSDK_OFFSET(0x8CDCB0)
#define FGGMKLLGDKL_NDENCKOKNFE_OFFSET UNITYSDK_OFFSET(0x8CDEE0)
#define FGGMKLLGDKL_NGFLKPDBJHK_OFFSET UNITYSDK_OFFSET(0x8CDFB0)

inline static constexpr unsigned int FGGMKLLGDKL_TypeDefinitionIndex = 93821;

struct alignas(8) FGGMKLLGDKL
{
	::System::Int32 EJCBEJMGFAJ; // 0x10
	::System::Single EBFCACIEKBC; // 0x14
	::System::Int16 EMIKCAHJLGB; // 0x18
	::System::Byte _padding0[0x6];
	::System::Collections::Generic::List_1<::System::Int16>* MMBHIIHIKJD; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int16, ::System::Int16>* GNMPBKDGIDC; // 0x28
	::System::UInt16 FLKFGIDLKEH; // 0x30
	::System::Byte _padding1[0x6];
	::System::Collections::Generic::List_1<::System::Int16>* LKFJDAKKECN; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int16, ::System::Int16>* BENCGMLBFFO; // 0x40
	::LHEICKDEKAP PJJDEIIAMOL; // 0x48
	::CBIPDIHEODD* EDCALILNNDD; // 0x50
	::CBIPDIHEODD* LPFDFCEHFAD; // 0x58

	::System::Void HKPJHLAJAGE(::System::Int16 NCEICODIONG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + FGGMKLLGDKL_HKPJHLAJAGE_OFFSET))(this, NCEICODIONG);
	}

	::System::Void KJOMLBGCPMF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGMKLLGDKL_KJOMLBGCPMF_OFFSET))(this);
	}

	::System::Boolean JIDMADDMGIE(::IKNGGHOCDBF* IOPMHNGHKGA)
	{
		return ((::System::Boolean(*)(::PVOID, ::IKNGGHOCDBF*))((::PBYTE)hIl2Cpp + FGGMKLLGDKL_JIDMADDMGIE_OFFSET))(this, IOPMHNGHKGA);
	}

	::System::Boolean JIDMADDMGIE_1(::Il2CppArray<::System::Byte>* IOPMHNGHKGA)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FGGMKLLGDKL_JIDMADDMGIE_1_OFFSET))(this, IOPMHNGHKGA);
	}

	::System::Boolean JGECEJIHMLG(::IHIEEEDAMHC*& FNIOJLHMOMN)
	{
		return ((::System::Boolean(*)(::PVOID, ::IHIEEEDAMHC*&))((::PBYTE)hIl2Cpp + FGGMKLLGDKL_JGECEJIHMLG_OFFSET))(this, FNIOJLHMOMN);
	}

	::System::Boolean JGECEJIHMLG_1(::Il2CppArray<::System::Byte>*& IOPMHNGHKGA)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + FGGMKLLGDKL_JGECEJIHMLG_1_OFFSET))(this, IOPMHNGHKGA);
	}

	::System::Void CGOKJLCINPN(::HMNIABJLPGA* ELFGOGPHBJH, ::System::Int16 JIPGOLDGEKN)
	{
		return ((::System::Void(*)(::PVOID, ::HMNIABJLPGA*, ::System::Int16))((::PBYTE)hIl2Cpp + FGGMKLLGDKL_CGOKJLCINPN_OFFSET))(this, ELFGOGPHBJH, JIPGOLDGEKN);
	}

	::System::Boolean JGECEJIHMLG_2(::IKNGGHOCDBF*& IOPMHNGHKGA)
	{
		return ((::System::Boolean(*)(::PVOID, ::IKNGGHOCDBF*&))((::PBYTE)hIl2Cpp + FGGMKLLGDKL_JGECEJIHMLG_2_OFFSET))(this, IOPMHNGHKGA);
	}

	::System::Void JIDMADDMGIE_2(::IHIEEEDAMHC* FNIOJLHMOMN, ::System::Boolean PHANNMLBILI)
	{
		return ((::System::Void(*)(::PVOID, ::IHIEEEDAMHC*, ::System::Boolean))((::PBYTE)hIl2Cpp + FGGMKLLGDKL_JIDMADDMGIE_2_OFFSET))(this, FNIOJLHMOMN, PHANNMLBILI);
	}

	::System::Void NDENCKOKNFE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGMKLLGDKL_NDENCKOKNFE_OFFSET))(this);
	}

	::System::Void JIDMADDMGIE_3(::IHIEEEDAMHC* FNIOJLHMOMN)
	{
		return ((::System::Void(*)(::PVOID, ::IHIEEEDAMHC*))((::PBYTE)hIl2Cpp + FGGMKLLGDKL_JIDMADDMGIE_3_OFFSET))(this, FNIOJLHMOMN);
	}

	::System::Boolean JGECEJIHMLG_3(::IHIEEEDAMHC*& FNIOJLHMOMN, ::System::Boolean AIPPFEBKLFH, ::System::Boolean OOGHCEJJNHL, ::NIBDDIKJPMO* HLFCANNKIJL)
	{
		return ((::System::Boolean(*)(::PVOID, ::IHIEEEDAMHC*&, ::System::Boolean, ::System::Boolean, ::NIBDDIKJPMO*))((::PBYTE)hIl2Cpp + FGGMKLLGDKL_JGECEJIHMLG_3_OFFSET))(this, FNIOJLHMOMN, AIPPFEBKLFH, OOGHCEJJNHL, HLFCANNKIJL);
	}

	::System::String* NGFLKPDBJHK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGMKLLGDKL_NGFLKPDBJHK_OFFSET))(this);
	}
};
