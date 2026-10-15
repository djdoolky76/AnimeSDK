#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGIPKMPPBAL;
class KIAMMMCBMJC;
namespace RPG::GameCore { class RedDotNodeConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NLEKIECBHFE_AKJABINEGDJ_OFFSET UNITYSDK_OFFSET(0xBC63F60)
#define NLEKIECBHFE_CTOR_OFFSET UNITYSDK_OFFSET(0xBC63F10)
#define NLEKIECBHFE_GPLCMHDFMEK_OFFSET UNITYSDK_OFFSET(0xBC64F30)
#define NLEKIECBHFE_IDFGDJEPFIK_OFFSET UNITYSDK_OFFSET(0xBC647A0)

	class NLEKIECBHFE : public ::System::Object
	{
	public:
		::KIAMMMCBMJC* AHDMPIOFBLD; // 0x10
		::System::Void _ctor(::KIAMMMCBMJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIAMMMCBMJC*))((::PBYTE)hIl2Cpp + NLEKIECBHFE_CTOR_OFFSET))(this, a1);
		}

		::BGIPKMPPBAL* AKJABINEGDJ()
		{
			return ((::BGIPKMPPBAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLEKIECBHFE_AKJABINEGDJ_OFFSET))(this);
		}

		static ::System::Void IDFGDJEPFIK(::Il2CppArray<::RPG::GameCore::RedDotNodeConfig*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::RedDotNodeConfig*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + NLEKIECBHFE_IDFGDJEPFIK_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* GPLCMHDFMEK(::Il2CppArray<::System::UInt32>* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + NLEKIECBHFE_GPLCMHDFMEK_OFFSET))(a1, a2);
		}

	};
