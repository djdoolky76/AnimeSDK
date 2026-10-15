#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define DBIAFBMMBBA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDFD96B0)
#define DBIAFBMMBBA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDFD96F0)
#define DBIAFBMMBBA___C___CREATESNAPSHOT_B__31_1_OFFSET UNITYSDK_OFFSET(0xDFD9700)

inline static constexpr unsigned int DBIAFBMMBBA___c_TypeDefinitionIndex = 79554;

	class DBIAFBMMBBA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59330);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::RPG::Client::MechCraft::MechCraftAttributeType>** StaticGet___9__31_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::RPG::Client::MechCraft::MechCraftAttributeType>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59338);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBIAFBMMBBA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIAFBMMBBA___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::MechCraftAttributeType __CreateSnapshot_b__31_1(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a1)
		{
			return ((::RPG::Client::MechCraft::MechCraftAttributeType(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>))((::PBYTE)hIl2Cpp + DBIAFBMMBBA___C___CREATESNAPSHOT_B__31_1_OFFSET))(this, a1);
		}

	};
