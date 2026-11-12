#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MEEPKFKOAHA.h"
#include "unitysdk/RPG/MVector3.h"
class AEEKMHCMBPL;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DGOAKJNHIFJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xF42B550)
#define DGOAKJNHIFJ_MHAHLFKCLKI_OFFSET UNITYSDK_OFFSET(0x1064F0)

inline static constexpr unsigned int DGOAKJNHIFJ_TypeDefinitionIndex = 71354;

	struct alignas(8) DGOAKJNHIFJ
	{
		::System::UInt32 GEEJAJPPGDG; // 0x10
		::System::UInt32 KLIHOACGEIO; // 0x14
		::System::UInt32 FOGBHFGKEIA; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* FNCJLBKBKBI; // 0x20
		::System::Collections::Generic::IList_1<::MEEPKFKOAHA>* MIAOGDAKOEM; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* EEDPLDBFMMM; // 0x30
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>* BMIBPINLEEJ; // 0x38
		::RPG::MVector3 BBFOLEOPPPL; // 0x40
		::RPG::MVector3 NMELCPIOKNO; // 0x4C
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* GBPHKOAFCNE; // 0x58
		static ::Il2CppArray<::MEEPKFKOAHA>** StaticGet_HKHKOPBHOBF()
		{
			return (::Il2CppArray<::MEEPKFKOAHA>**)UnitySDK::FromName("", "DGOAKJNHIFJ")->GetStaticField(0x5D3A0);
		}

		static ::Il2CppArray<::MEEPKFKOAHA>** StaticGet_JJGGODNBFKK()
		{
			return (::Il2CppArray<::MEEPKFKOAHA>**)UnitySDK::FromName("", "DGOAKJNHIFJ")->GetStaticField(0x5D3A8);
		}

		static ::Il2CppArray<::MEEPKFKOAHA>** StaticGet_KDHKBFENLDH()
		{
			return (::Il2CppArray<::MEEPKFKOAHA>**)UnitySDK::FromName("", "DGOAKJNHIFJ")->GetStaticField(0x5D3B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGOAKJNHIFJ_CCTOR_OFFSET))();
		}

		::System::Boolean MHAHLFKCLKI(::AEEKMHCMBPL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AEEKMHCMBPL*))((::PBYTE)hIl2Cpp + DGOAKJNHIFJ_MHAHLFKCLKI_OFFSET))(this, a1);
		}

	};
