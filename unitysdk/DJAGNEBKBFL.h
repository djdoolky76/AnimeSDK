#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GameFramework/FileSystem/FileSystemAccess.h"
#include "unitysdk/System/Object.h"
class FCCJBBDBHCA;
class HCNCDEOBPLN;
class PGBHKIBHELK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DJAGNEBKBFL_ADMJJPFNBAK_OFFSET UNITYSDK_OFFSET(0x208D7290)
#define DJAGNEBKBFL_CTOR_OFFSET UNITYSDK_OFFSET(0x208D6C70)
#define DJAGNEBKBFL_FKMJDIPINAB_1_OFFSET UNITYSDK_OFFSET(0x208D8A00)
#define DJAGNEBKBFL_FKMJDIPINAB_OFFSET UNITYSDK_OFFSET(0x208D8840)
#define DJAGNEBKBFL_HCNFICFIBMB_OFFSET UNITYSDK_OFFSET(0x208D6FF0)
#define DJAGNEBKBFL_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x208D6D30)
#define DJAGNEBKBFL_KOMMBFGBCHG_OFFSET UNITYSDK_OFFSET(0x208D6ED0)
#define DJAGNEBKBFL_LGDKDHPDAEB_OFFSET UNITYSDK_OFFSET(0x208D6D50)
#define DJAGNEBKBFL_NHHEJKHFBFK_OFFSET UNITYSDK_OFFSET(0x208D7DC0)
#define DJAGNEBKBFL_OAMOLNDKKCE_OFFSET UNITYSDK_OFFSET(0x208D70A0)
#define DJAGNEBKBFL_PCJGNCPNPDA_OFFSET UNITYSDK_OFFSET(0x208D7190)

inline static constexpr unsigned int DJAGNEBKBFL_TypeDefinitionIndex = 44935;

	class DJAGNEBKBFL : public ::System::Object
	{
	public:
		::PGBHKIBHELK* LEDLHLHCOGJ; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::HCNCDEOBPLN*>* LFAGLDOMPPG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJAGNEBKBFL_CTOR_OFFSET))(this);
		}

		::System::Int32 HIDEJDELEEB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJAGNEBKBFL_HIDEJDELEEB_OFFSET))(this);
		}

		::System::Void LGDKDHPDAEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJAGNEBKBFL_LGDKDHPDAEB_OFFSET))(this);
		}

		::System::Void HCNFICFIBMB(::PGBHKIBHELK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGBHKIBHELK*))((::PBYTE)hIl2Cpp + DJAGNEBKBFL_HCNFICFIBMB_OFFSET))(this, a1);
		}

		::System::Boolean OAMOLNDKKCE(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DJAGNEBKBFL_OAMOLNDKKCE_OFFSET))(this, a1);
		}

		::FCCJBBDBHCA* PCJGNCPNPDA(::System::String* a1)
		{
			return ((::FCCJBBDBHCA*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DJAGNEBKBFL_PCJGNCPNPDA_OFFSET))(this, a1);
		}

		::FCCJBBDBHCA* ADMJJPFNBAK(::System::String* a1, ::GameFramework::FileSystem::FileSystemAccess a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::FCCJBBDBHCA*(*)(::PVOID, ::System::String*, ::GameFramework::FileSystem::FileSystemAccess, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DJAGNEBKBFL_ADMJJPFNBAK_OFFSET))(this, a1, a2, a3, a4);
		}

		::FCCJBBDBHCA* NHHEJKHFBFK(::System::String* a1, ::GameFramework::FileSystem::FileSystemAccess a2)
		{
			return ((::FCCJBBDBHCA*(*)(::PVOID, ::System::String*, ::GameFramework::FileSystem::FileSystemAccess))((::PBYTE)hIl2Cpp + DJAGNEBKBFL_NHHEJKHFBFK_OFFSET))(this, a1, a2);
		}

		::System::Void KOMMBFGBCHG(::FCCJBBDBHCA* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::FCCJBBDBHCA*, ::System::Boolean))((::PBYTE)hIl2Cpp + DJAGNEBKBFL_KOMMBFGBCHG_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::FCCJBBDBHCA*>* FKMJDIPINAB()
		{
			return ((::Il2CppArray<::FCCJBBDBHCA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJAGNEBKBFL_FKMJDIPINAB_OFFSET))(this);
		}

		::System::Void FKMJDIPINAB_1(::System::Collections::Generic::List_1<::FCCJBBDBHCA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FCCJBBDBHCA*>*))((::PBYTE)hIl2Cpp + DJAGNEBKBFL_FKMJDIPINAB_1_OFFSET))(this, a1);
		}

	};
