#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJNGLDPKCCM;
namespace System { class Exception; }
namespace System { class Object; }

#define NJMFABHNAIG___C__DISPLAYCLASS22_1_CTOR_OFFSET UNITYSDK_OFFSET(0xBC1D9E0)
#define NJMFABHNAIG___C__DISPLAYCLASS22_1__ASYNCREQUESTSTARTNODE_B__1_OFFSET UNITYSDK_OFFSET(0xBC1E9C0)
#define NJMFABHNAIG___C__DISPLAYCLASS22_1__ASYNCREQUESTSTARTNODE_B__2_OFFSET UNITYSDK_OFFSET(0xBC1EF60)

inline static constexpr unsigned int NJMFABHNAIG___c__DisplayClass22_1_TypeDefinitionIndex = 75154;

	template <typename T>
	class NJMFABHNAIG___c__DisplayClass22_1 : public ::System::Object
	{
	public:
		::NJNGLDPKCCM* enterBattleNodeService; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMFABHNAIG___C__DISPLAYCLASS22_1_CTOR_OFFSET))(this);
		}

		::System::Void _AsyncRequestStartNode_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMFABHNAIG___C__DISPLAYCLASS22_1__ASYNCREQUESTSTARTNODE_B__1_OFFSET))(this);
		}

		::System::Void _AsyncRequestStartNode_b__2(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + NJMFABHNAIG___C__DISPLAYCLASS22_1__ASYNCREQUESTSTARTNODE_B__2_OFFSET))(this, a1);
		}

	};
