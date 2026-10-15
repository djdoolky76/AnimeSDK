#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NEBMBGBIHHH.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class FHJKNCMMMON;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }

#define BOIIFECIHAK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC192220)
#define BOIIFECIHAK___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC192260)
#define BOIIFECIHAK___C__GET_ATTRIBUTEVALUES_B__35_0_OFFSET UNITYSDK_OFFSET(0xC192290)
#define BOIIFECIHAK___C__GET_SHAPE_B__32_0_OFFSET UNITYSDK_OFFSET(0xC192270)

	class BOIIFECIHAK___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::FHJKNCMMMON*, ::UnityEngine::Vector2Int>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::FHJKNCMMMON*, ::UnityEngine::Vector2Int>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1FF0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Collections::Generic::KeyValuePair*>** StaticGet___9__35_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Collections::Generic::KeyValuePair*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1FF8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2000);
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

		::System::Collections::Generic::KeyValuePair* _get_AttributeValues_b__35_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Collections::Generic::KeyValuePair*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + BOIIFECIHAK___C__GET_ATTRIBUTEVALUES_B__35_0_OFFSET))(this, a1);
		}

	};
