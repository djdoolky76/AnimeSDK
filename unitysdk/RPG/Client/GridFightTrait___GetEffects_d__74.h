#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class IGridFightTraitEffect; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74_CTOR_OFFSET UNITYSDK_OFFSET(0xD2AA380)
#define RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD2AAF60)
#define RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IGRIDFIGHTTRAITEFFECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xD2AB5E0)
#define RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IGRIDFIGHTTRAITEFFECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD2AB570)
#define RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xD2AB660)
#define RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD2AB5D0)
#define RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD2AB580)
#define RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD2AAD80)
#define RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xD2AAF50)
#define RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0xD2AAE50)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrait___GetEffects_d__74_TypeDefinitionIndex = 65432;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50, typename T51, typename T52, typename T53, typename T54, typename T55, typename T56, typename T57, typename T58, typename T59, typename T60, typename T61, typename T62, typename T63, typename T64, typename T65, typename T66, typename T67, typename T68, typename T69, typename T70, typename T71, typename T72, typename T73, typename T74>
	class GridFightTrait___GetEffects_d__74 : public ::System::Object
	{
	public:
		::System::Object* __7__wrap1; // 0x10
		::System::Byte _padding0[0x10];
		::RPG::Client::GridFightTrait* __4__this; // 0x28
		::System::Collections::Generic::IEnumerator_1<::RPG::Client::IGridFightTraitEffect*>* __7__wrap3; // 0x30
		::RPG::Client::IGridFightTraitEffect* _effect_5__3; // 0x38
		::RPG::Client::IGridFightTraitEffect* __2__current; // 0x40
		::System::Int32 __l__initialThreadId; // 0x48
		::System::Int32 __1__state; // 0x4C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74___M__FINALLY2_OFFSET))(this);
		}

		::RPG::Client::IGridFightTraitEffect* System_Collections_Generic_IEnumerator_RPG_Client_IGridFightTraitEffect__get_Current()
		{
			return ((::RPG::Client::IGridFightTraitEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IGRIDFIGHTTRAITEFFECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::Client::IGridFightTraitEffect*>* System_Collections_Generic_IEnumerable_RPG_Client_IGridFightTraitEffect__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::IGridFightTraitEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IGRIDFIGHTTRAITEFFECT__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___GETEFFECTS_D__74_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
}
