#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NEBMBGBIHHH.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class FHJKNCMMMON;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define BOIIFECIHAK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC190D20)
#define BOIIFECIHAK___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC190D60)
#define BOIIFECIHAK___C__GET_ATTRIBUTEVALUES_B__35_0_OFFSET UNITYSDK_OFFSET(0xC190D90)
#define BOIIFECIHAK___C__GET_SHAPE_B__32_0_OFFSET UNITYSDK_OFFSET(0xC190D70)

inline static constexpr unsigned int BOIIFECIHAK___c_TypeDefinitionIndex = 80089;

	class BOIIFECIHAK___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::NEBMBGBIHHH, ::System::UInt32>, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>** StaticGet___9__35_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::NEBMBGBIHHH, ::System::UInt32>, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D30);
		}

		static ::System::Func_2<::FHJKNCMMMON*, ::UnityEngine::Vector2Int>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::FHJKNCMMMON*, ::UnityEngine::Vector2Int>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D38);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOIIFECIHAK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIIFECIHAK___C_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2Int _get_Shape_b__32_0(::FHJKNCMMMON* a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::FHJKNCMMMON*))((::PBYTE)hIl2Cpp + BOIIFECIHAK___C__GET_SHAPE_B__32_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> _get_AttributeValues_b__35_0(::System::Collections::Generic::KeyValuePair_2<::NEBMBGBIHHH, ::System::UInt32> a1)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::NEBMBGBIHHH, ::System::UInt32>))((::PBYTE)hIl2Cpp + BOIIFECIHAK___C__GET_ATTRIBUTEVALUES_B__35_0_OFFSET))(this, a1);
		}

	};
