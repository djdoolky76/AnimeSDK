#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INMMPMDELKE;
namespace RPG::GameCore { class FourRotateVoxelFinishPointConfig; }
namespace RPG::GameCore { class FourRotateVoxelRevert2DVoxelConfig; }
namespace System { class Object; }

#define FAFFMDBPCGJ___C__DISPLAYCLASS21_1_CTOR_OFFSET UNITYSDK_OFFSET(0x15666630)
#define FAFFMDBPCGJ___C__DISPLAYCLASS21_1___ONVIEWLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x1566D430)
#define FAFFMDBPCGJ___C__DISPLAYCLASS21_1___ONVIEWLOAD_B__1_OFFSET UNITYSDK_OFFSET(0x1566D520)
#define FAFFMDBPCGJ___C__DISPLAYCLASS21_1___ONVIEWLOAD_B__2_OFFSET UNITYSDK_OFFSET(0x1566D580)
#define FAFFMDBPCGJ___C__DISPLAYCLASS21_1___ONVIEWLOAD_B__3_OFFSET UNITYSDK_OFFSET(0x1566D600)

inline static constexpr unsigned int FAFFMDBPCGJ___c__DisplayClass21_1_TypeDefinitionIndex = 76737;

	template <typename T>
	class FAFFMDBPCGJ___c__DisplayClass21_1 : public ::System::Object
	{
	public:
		::RPG::GameCore::FourRotateVoxelFinishPointConfig* _finishPropConfig_5__3; // 0x10
		::RPG::GameCore::FourRotateVoxelRevert2DVoxelConfig* _revert2DVoxelConfig_5__2; // 0x18
		::System::Object* CS___8__locals3; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ___C__DISPLAYCLASS21_1_CTOR_OFFSET))(this);
		}

		::System::Void __OnViewLoad_b__0(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ___C__DISPLAYCLASS21_1___ONVIEWLOAD_B__0_OFFSET))(this, a1);
		}

		::System::Void __OnViewLoad_b__1(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ___C__DISPLAYCLASS21_1___ONVIEWLOAD_B__1_OFFSET))(this, a1);
		}

		::System::Void __OnViewLoad_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ___C__DISPLAYCLASS21_1___ONVIEWLOAD_B__2_OFFSET))(this);
		}

		::System::Void __OnViewLoad_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ___C__DISPLAYCLASS21_1___ONVIEWLOAD_B__3_OFFSET))(this);
		}

	};
