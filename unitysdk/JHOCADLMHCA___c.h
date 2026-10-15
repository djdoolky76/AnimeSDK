#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define JHOCADLMHCA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB1BAF60)
#define JHOCADLMHCA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB1BAFA0)
#define JHOCADLMHCA___C__GETSHEETVALUES_B__4_0_OFFSET UNITYSDK_OFFSET(0xB1BAFB0)
#define JHOCADLMHCA___C__GETSHEETVALUES_B__4_1_OFFSET UNITYSDK_OFFSET(0xB1BAFD0)

inline static constexpr unsigned int JHOCADLMHCA___c_TypeDefinitionIndex = 50034;

	class JHOCADLMHCA___c : public ::System::Object
	{
	public:
		static ::System::Func_3<::Newtonsoft::Json::Linq::JToken*, ::System::Int32, ::System::ValueTuple_2<::Newtonsoft::Json::Linq::JToken*, ::System::Int32>>** StaticGet___9__4_1()
		{
			return (::System::Func_3<::Newtonsoft::Json::Linq::JToken*, ::System::Int32, ::System::ValueTuple_2<::Newtonsoft::Json::Linq::JToken*, ::System::Int32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12BB0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12BB8);
		}

		static ::System::Func_3<::Newtonsoft::Json::Linq::JToken*, ::System::Int32, ::System::ValueTuple_2<::Newtonsoft::Json::Linq::JToken*, ::System::Int32>>** StaticGet___9__4_0()
		{
			return (::System::Func_3<::Newtonsoft::Json::Linq::JToken*, ::System::Int32, ::System::ValueTuple_2<::Newtonsoft::Json::Linq::JToken*, ::System::Int32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12BC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHOCADLMHCA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOCADLMHCA___C_CTOR_OFFSET))(this);
		}

		::System::ValueTuple_2<::Newtonsoft::Json::Linq::JToken*, ::System::Int32> _GetSheetValues_b__4_0(::Newtonsoft::Json::Linq::JToken* a1, ::System::Int32 a2)
		{
			return ((::System::ValueTuple_2<::Newtonsoft::Json::Linq::JToken*, ::System::Int32>(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*, ::System::Int32))((::PBYTE)hIl2Cpp + JHOCADLMHCA___C__GETSHEETVALUES_B__4_0_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple_2<::Newtonsoft::Json::Linq::JToken*, ::System::Int32> _GetSheetValues_b__4_1(::Newtonsoft::Json::Linq::JToken* a1, ::System::Int32 a2)
		{
			return ((::System::ValueTuple_2<::Newtonsoft::Json::Linq::JToken*, ::System::Int32>(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*, ::System::Int32))((::PBYTE)hIl2Cpp + JHOCADLMHCA___C__GETSHEETVALUES_B__4_1_OFFSET))(this, a1, a2);
		}

	};
