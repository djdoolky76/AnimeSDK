#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNELPKKAEBC.h"
#include "unitysdk/RPG/Client/Prop/ChimePuzzle/ChimeProxy.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GELBKFKOLGG_CTOR_OFFSET UNITYSDK_OFFSET(0x159E0740)
#define GELBKFKOLGG_KBMHMHFNPNF_OFFSET UNITYSDK_OFFSET(0x159E0840)
#define GELBKFKOLGG_PGLILDGJEFA_OFFSET UNITYSDK_OFFSET(0x159E07C0)

	class GELBKFKOLGG : public ::GNELPKKAEBC
	{
	public:
		::Il2CppArray<::System::Int32>* NAGGDFKKBCN; // 0x30
		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimePuzzle::ChimeProxy>* a1, ::Il2CppArray<::System::Int32>* a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* a3, ::System::Int32 a4, ::Il2CppArray<::System::Int32>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimePuzzle::ChimeProxy>*, ::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>*, ::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + GELBKFKOLGG_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean PGLILDGJEFA(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GELBKFKOLGG_PGLILDGJEFA_OFFSET))(this, a1);
		}

		::System::Boolean KBMHMHFNPNF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GELBKFKOLGG_KBMHMHFNPNF_OFFSET))(this);
		}

	};
