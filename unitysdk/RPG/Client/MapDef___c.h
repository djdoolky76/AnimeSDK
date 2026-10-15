#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
class BIDDFDEAEGB;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MAPDEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD539EB0)
#define RPG_CLIENT_MAPDEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD539EF0)
#define RPG_CLIENT_MAPDEF___C__GETACTIVEGROUPDEFS_B__212_0_OFFSET UNITYSDK_OFFSET(0xD539F00)
#define RPG_CLIENT_MAPDEF___C__GETACTIVEGROUPDEFS_B__212_1_OFFSET UNITYSDK_OFFSET(0xD539F10)

namespace RPG::Client
{
	inline static constexpr unsigned int MapDef___c_TypeDefinitionIndex = 62081;

	class MapDef___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::BIDDFDEAEGB*>, ::System::UInt32>** StaticGet___9__212_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::BIDDFDEAEGB*>, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x37C70);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x37C78);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::BIDDFDEAEGB*>, ::BIDDFDEAEGB*>** StaticGet___9__212_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::BIDDFDEAEGB*>, ::BIDDFDEAEGB*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x37C80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEF___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetActiveGroupDefs_b__212_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::BIDDFDEAEGB*> a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::BIDDFDEAEGB*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEF___C__GETACTIVEGROUPDEFS_B__212_0_OFFSET))(this, a1);
		}

		::BIDDFDEAEGB* _GetActiveGroupDefs_b__212_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::BIDDFDEAEGB*> a1)
		{
			return ((::BIDDFDEAEGB*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::BIDDFDEAEGB*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEF___C__GETACTIVEGROUPDEFS_B__212_1_OFFSET))(this, a1);
		}

	};
}
