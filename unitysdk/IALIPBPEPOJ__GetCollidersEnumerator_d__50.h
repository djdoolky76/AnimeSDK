#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IALIPBPEPOJ;
class IOJGBIAJBIC;
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Shape; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }
namespace System { class Object; }

#define IALIPBPEPOJ__GETCOLLIDERSENUMERATOR_D__50_CTOR_OFFSET UNITYSDK_OFFSET(0x1C68DCA0)
#define IALIPBPEPOJ__GETCOLLIDERSENUMERATOR_D__50_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C68DF50)
#define IALIPBPEPOJ__GETCOLLIDERSENUMERATOR_D__50_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_LITTLEGAMESHARE_HOYOPHYSICS_IHOYOPHYSICS2DCOLLIDER__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C68E090)
#define IALIPBPEPOJ__GETCOLLIDERSENUMERATOR_D__50_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C68E0F0)
#define IALIPBPEPOJ__GETCOLLIDERSENUMERATOR_D__50_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C68E0A0)
#define IALIPBPEPOJ__GETCOLLIDERSENUMERATOR_D__50_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C68DF40)

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50>
	class IALIPBPEPOJ__GetCollidersEnumerator_d__50 : public ::System::Object
	{
	public:
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* _shape_5__3; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* _world_5__2; // 0x18
		::IOJGBIAJBIC* __2__current; // 0x20
		::IALIPBPEPOJ* __4__this; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IALIPBPEPOJ__GETCOLLIDERSENUMERATOR_D__50_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IALIPBPEPOJ__GETCOLLIDERSENUMERATOR_D__50_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IALIPBPEPOJ__GETCOLLIDERSENUMERATOR_D__50_MOVENEXT_OFFSET))(this);
		}

		::IOJGBIAJBIC* System_Collections_Generic_IEnumerator_RPG_LittleGameShare_HoyoPhysics_IHoyoPhysics2DCollider__get_Current()
		{
			return ((::IOJGBIAJBIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IALIPBPEPOJ__GETCOLLIDERSENUMERATOR_D__50_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_LITTLEGAMESHARE_HOYOPHYSICS_IHOYOPHYSICS2DCOLLIDER__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IALIPBPEPOJ__GETCOLLIDERSENUMERATOR_D__50_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IALIPBPEPOJ__GETCOLLIDERSENUMERATOR_D__50_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
