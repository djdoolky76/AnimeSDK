#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }

#define DBIAFBMMBBA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDFE3380)
#define DBIAFBMMBBA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDFE33C0)
#define DBIAFBMMBBA___C___CREATESNAPSHOT_B__31_1_OFFSET UNITYSDK_OFFSET(0xDFE33D0)

inline static constexpr unsigned int DBIAFBMMBBA___c_TypeDefinitionIndex = 79555;

	class DBIAFBMMBBA___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::RPG::Client::MechCraft::MechCraftAttributeType>** StaticGet___9__31_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::RPG::Client::MechCraft::MechCraftAttributeType>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CE00);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CE08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBIAFBMMBBA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIAFBMMBBA___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::MechCraftAttributeType __CreateSnapshot_b__31_1(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::RPG::Client::MechCraft::MechCraftAttributeType(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + DBIAFBMMBBA___C___CREATESNAPSHOT_B__31_1_OFFSET))(this, a1);
		}

	};
