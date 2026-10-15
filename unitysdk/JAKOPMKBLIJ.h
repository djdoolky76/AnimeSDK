#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GameFramework/FileSystem/FileSystemAccess.h"
#include "unitysdk/System/Object.h"
class FCCJBBDBHCA;
class NGOFCNCFPKH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JAKOPMKBLIJ_ADMJJPFNBAK_OFFSET UNITYSDK_OFFSET(0x1CC5FE90)
#define JAKOPMKBLIJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC5FC40)
#define JAKOPMKBLIJ_FKMJDIPINAB_1_OFFSET UNITYSDK_OFFSET(0x1CC60010)
#define JAKOPMKBLIJ_FKMJDIPINAB_OFFSET UNITYSDK_OFFSET(0x1CC5FFC0)
#define JAKOPMKBLIJ_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x1CC5FD70)
#define JAKOPMKBLIJ_KOMMBFGBCHG_OFFSET UNITYSDK_OFFSET(0x1CC5FF60)
#define JAKOPMKBLIJ_NHHEJKHFBFK_OFFSET UNITYSDK_OFFSET(0x1CC5FF00)
#define JAKOPMKBLIJ_OAMOLNDKKCE_OFFSET UNITYSDK_OFFSET(0x1CC5FDD0)
#define JAKOPMKBLIJ_PCJGNCPNPDA_OFFSET UNITYSDK_OFFSET(0x1CC5FE30)

inline static constexpr unsigned int JAKOPMKBLIJ_TypeDefinitionIndex = 43841;

	class JAKOPMKBLIJ : public ::System::Object
	{
	public:
		static ::NGOFCNCFPKH** StaticGet_KHGIBKEKMNA()
		{
			return (::NGOFCNCFPKH**)UnitySDK::FromName("", "JAKOPMKBLIJ")->GetStaticField(0xF00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAKOPMKBLIJ_CCTOR_OFFSET))();
		}

		static ::System::Int32 HIDEJDELEEB()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + JAKOPMKBLIJ_HIDEJDELEEB_OFFSET))();
		}

		static ::System::Boolean OAMOLNDKKCE(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + JAKOPMKBLIJ_OAMOLNDKKCE_OFFSET))(a1);
		}

		static ::FCCJBBDBHCA* PCJGNCPNPDA(::System::String* a1)
		{
			return ((::FCCJBBDBHCA*(*)(::System::String*))((::PBYTE)hIl2Cpp + JAKOPMKBLIJ_PCJGNCPNPDA_OFFSET))(a1);
		}

		static ::FCCJBBDBHCA* ADMJJPFNBAK(::System::String* a1, ::GameFramework::FileSystem::FileSystemAccess a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::FCCJBBDBHCA*(*)(::System::String*, ::GameFramework::FileSystem::FileSystemAccess, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JAKOPMKBLIJ_ADMJJPFNBAK_OFFSET))(a1, a2, a3, a4);
		}

		static ::FCCJBBDBHCA* NHHEJKHFBFK(::System::String* a1, ::GameFramework::FileSystem::FileSystemAccess a2)
		{
			return ((::FCCJBBDBHCA*(*)(::System::String*, ::GameFramework::FileSystem::FileSystemAccess))((::PBYTE)hIl2Cpp + JAKOPMKBLIJ_NHHEJKHFBFK_OFFSET))(a1, a2);
		}

		static ::System::Void KOMMBFGBCHG(::FCCJBBDBHCA* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::FCCJBBDBHCA*, ::System::Boolean))((::PBYTE)hIl2Cpp + JAKOPMKBLIJ_KOMMBFGBCHG_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::FCCJBBDBHCA*>* FKMJDIPINAB()
		{
			return ((::Il2CppArray<::FCCJBBDBHCA*>*(*)())((::PBYTE)hIl2Cpp + JAKOPMKBLIJ_FKMJDIPINAB_OFFSET))();
		}

		static ::System::Void FKMJDIPINAB_1(::System::Collections::Generic::List_1<::FCCJBBDBHCA*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::FCCJBBDBHCA*>*))((::PBYTE)hIl2Cpp + JAKOPMKBLIJ_FKMJDIPINAB_1_OFFSET))(a1);
		}

	};
