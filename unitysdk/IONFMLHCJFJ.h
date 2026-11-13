#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOEMPPDFFLE;
namespace RPG::GameCore { class CharacterReplaceMaterialRenderList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IONFMLHCJFJ_AFOBEGOJDFA_OFFSET UNITYSDK_OFFSET(0x192F2780)
#define IONFMLHCJFJ_BHMGHNIBDKE_OFFSET UNITYSDK_OFFSET(0x192F2E80)
#define IONFMLHCJFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x192F22E0)
#define IONFMLHCJFJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x192F32A0)
#define IONFMLHCJFJ_NMPJEJADONK_OFFSET UNITYSDK_OFFSET(0x192F2B00)
#define IONFMLHCJFJ_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x192F2390)

inline static constexpr unsigned int IONFMLHCJFJ_TypeDefinitionIndex = 71092;

	class IONFMLHCJFJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* OIKPPAFNOEJ; // 0x10
		::MOEMPPDFFLE* EDLCJHNBKDN; // 0x18
		::RPG::GameCore::CharacterReplaceMaterialRenderList* NHBNDJGDKDA; // 0x20
		::System::Void _ctor(::MOEMPPDFFLE* a1, ::RPG::GameCore::CharacterReplaceMaterialRenderList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MOEMPPDFFLE*, ::RPG::GameCore::CharacterReplaceMaterialRenderList*))((::PBYTE)hIl2Cpp + IONFMLHCJFJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void PKADDEPKJFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IONFMLHCJFJ_PKADDEPKJFN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IONFMLHCJFJ_DISPOSE_OFFSET))(this);
		}

		::System::Void BHMGHNIBDKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IONFMLHCJFJ_BHMGHNIBDKE_OFFSET))(this);
		}

		::System::UInt32 AFOBEGOJDFA(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IONFMLHCJFJ_AFOBEGOJDFA_OFFSET))(this, a1);
		}

		::System::Boolean NMPJEJADONK(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IONFMLHCJFJ_NMPJEJADONK_OFFSET))(this, a1, a2, a3);
		}

	};
