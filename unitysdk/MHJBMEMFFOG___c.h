#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AEMCAOEICDG;
class EHKKPCGAJHO;
class GJHAOFIJKEM;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define MHJBMEMFFOG___C_DHIPFOHDMOE_OFFSET UNITYSDK_OFFSET(0x14DE4E70)
#define MHJBMEMFFOG___C_FDGKMJIJKJJ_OFFSET UNITYSDK_OFFSET(0x14DE4E50)
#define MHJBMEMFFOG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DE4E00)
#define MHJBMEMFFOG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14DE4E40)

inline static constexpr unsigned int MHJBMEMFFOG___c_TypeDefinitionIndex = 48350;

class MHJBMEMFFOG___c : public ::System::Object
{
public:
	static ::System::Action_3<::GJHAOFIJKEM*, ::AEMCAOEICDG*, ::EHKKPCGAJHO*>** StaticGet___9__6_0()
	{
		return (::System::Action_3<::GJHAOFIJKEM*, ::AEMCAOEICDG*, ::EHKKPCGAJHO*>**)Il2CppClass::FromTypeDefinitionIndex(MHJBMEMFFOG___c_TypeDefinitionIndex)->GetStaticField(0x4F7F0);
	}
	static ::System::Action_3<::GJHAOFIJKEM*, ::AEMCAOEICDG*, ::EHKKPCGAJHO*>** StaticGet___9__5_0()
	{
		return (::System::Action_3<::GJHAOFIJKEM*, ::AEMCAOEICDG*, ::EHKKPCGAJHO*>**)Il2CppClass::FromTypeDefinitionIndex(MHJBMEMFFOG___c_TypeDefinitionIndex)->GetStaticField(0x4F7F8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MHJBMEMFFOG___c_TypeDefinitionIndex)->GetStaticField(0x4F800);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHJBMEMFFOG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJBMEMFFOG___C__CTOR_OFFSET))(this);
	}

	::System::Void FDGKMJIJKJJ(::GJHAOFIJKEM* DFCKBJGKGCG, ::AEMCAOEICDG* OHPJHPEOFLD, ::EHKKPCGAJHO* POBADKEDFOE)
	{
		return ((::System::Void(*)(::PVOID, ::GJHAOFIJKEM*, ::AEMCAOEICDG*, ::EHKKPCGAJHO*))((::PBYTE)hIl2Cpp + MHJBMEMFFOG___C_FDGKMJIJKJJ_OFFSET))(this, DFCKBJGKGCG, OHPJHPEOFLD, POBADKEDFOE);
	}

	::System::Void DHIPFOHDMOE(::GJHAOFIJKEM* DFCKBJGKGCG, ::AEMCAOEICDG* OHPJHPEOFLD, ::EHKKPCGAJHO* POBADKEDFOE)
	{
		return ((::System::Void(*)(::PVOID, ::GJHAOFIJKEM*, ::AEMCAOEICDG*, ::EHKKPCGAJHO*))((::PBYTE)hIl2Cpp + MHJBMEMFFOG___C_DHIPFOHDMOE_OFFSET))(this, DFCKBJGKGCG, OHPJHPEOFLD, POBADKEDFOE);
	}
};
