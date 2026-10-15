#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KODNBILFFFG;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LDEKLAGHCDH_ALDJLODHOML_OFFSET UNITYSDK_OFFSET(0xB61FA30)
#define LDEKLAGHCDH_CCNNKBBOOAC_OFFSET UNITYSDK_OFFSET(0xB61F9B0)
#define LDEKLAGHCDH_CCTOR_OFFSET UNITYSDK_OFFSET(0xB6201E0)
#define LDEKLAGHCDH_CTOR_OFFSET UNITYSDK_OFFSET(0xB61EF60)
#define LDEKLAGHCDH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB61F0D0)
#define LDEKLAGHCDH_EHAHNLNLDCH_OFFSET UNITYSDK_OFFSET(0xB61F940)
#define LDEKLAGHCDH_FHMHEFLGHOI_OFFSET UNITYSDK_OFFSET(0xB61FAC0)
#define LDEKLAGHCDH_OKKJOOPBIDA_OFFSET UNITYSDK_OFFSET(0xB61FE60)
#define LDEKLAGHCDH_OLMKCBEMAPM_OFFSET UNITYSDK_OFFSET(0xB61F460)
#define LDEKLAGHCDH_PLHEIJBAKJI_OFFSET UNITYSDK_OFFSET(0xB61F220)
#define LDEKLAGHCDH_PNELDCNHHGK_OFFSET UNITYSDK_OFFSET(0xB61F9F0)

	class LDEKLAGHCDH : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::KODNBILFFFG*>* PKOIFFNOLOE; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>* CFEENIHHMDN; // 0x18
		::System::Collections::Generic::HashSet_1<::System::Single>* LFNOJHEMDFD; // 0x20
		::System::Int32 HNHGNMBGABG; // 0x28
		static ::System::Int32* StaticGet_GNBIAKAFMDD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LDEKLAGHCDH")->GetStaticField(0x13000);
		}

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDEKLAGHCDH_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDEKLAGHCDH_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEKLAGHCDH_DISPOSE_OFFSET))(this);
		}

		::System::Void PLHEIJBAKJI(::KODNBILFFFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KODNBILFFFG*))((::PBYTE)hIl2Cpp + LDEKLAGHCDH_PLHEIJBAKJI_OFFSET))(this, a1);
		}

		::System::Void EHAHNLNLDCH(::KODNBILFFFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KODNBILFFFG*))((::PBYTE)hIl2Cpp + LDEKLAGHCDH_EHAHNLNLDCH_OFFSET))(this, a1);
		}

		::System::Int32 CCNNKBBOOAC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEKLAGHCDH_CCNNKBBOOAC_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::Single>* PNELDCNHHGK()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEKLAGHCDH_PNELDCNHHGK_OFFSET))(this);
		}

		::System::Void ALDJLODHOML(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LDEKLAGHCDH_ALDJLODHOML_OFFSET))(this, a1, a2);
		}

		::System::Void FHMHEFLGHOI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LDEKLAGHCDH_FHMHEFLGHOI_OFFSET))(this, a1);
		}

		::System::Void OKKJOOPBIDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEKLAGHCDH_OKKJOOPBIDA_OFFSET))(this);
		}

		::System::Void OLMKCBEMAPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEKLAGHCDH_OLMKCBEMAPM_OFFSET))(this);
		}

	};
