#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace RPG::Client { class RelicItemData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define LIICPMNHBPP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB6D3090)
#define LIICPMNHBPP___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB6D30D0)
#define LIICPMNHBPP___C___GETORCREATEHIGHSCORERELICDATASBYRELICTYPE_B__13_0_OFFSET UNITYSDK_OFFSET(0xB6D30E0)

inline static constexpr unsigned int LIICPMNHBPP___c_TypeDefinitionIndex = 66899;

	class LIICPMNHBPP___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>>** StaticGet___9__13_0()
		{
			return (::System::Comparison_1<::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F790);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F798);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIICPMNHBPP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIICPMNHBPP___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __GetOrCreateHighScoreRelicDatasByRelicType_b__13_0(::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*> a1, ::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*> a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>, ::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>))((::PBYTE)hIl2Cpp + LIICPMNHBPP___C___GETORCREATEHIGHSCORERELICDATASBYRELICTYPE_B__13_0_OFFSET))(this, a1, a2);
		}

	};
