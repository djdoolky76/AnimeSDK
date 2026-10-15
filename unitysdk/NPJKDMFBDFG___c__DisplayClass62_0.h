#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BIGECLNFJPJ;
class NPJKDMFBDFG;
class ODGPPIHLOFF;
namespace RPG { template <typename T> class PoolList_1; }

#define NPJKDMFBDFG___C__DISPLAYCLASS62_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBD07B70)
#define NPJKDMFBDFG___C__DISPLAYCLASS62_0__PRELOADPROPERTYRESOURCES1_B__0_OFFSET UNITYSDK_OFFSET(0xBD0BE00)
#define NPJKDMFBDFG___C__DISPLAYCLASS62_0__PRELOADPROPERTYRESOURCES1_B__1_OFFSET UNITYSDK_OFFSET(0xBD0C180)
#define NPJKDMFBDFG___C__DISPLAYCLASS62_0__PRELOADPROPERTYRESOURCES1_B__2_OFFSET UNITYSDK_OFFSET(0xBD0C320)

inline static constexpr unsigned int NPJKDMFBDFG___c__DisplayClass62_0_TypeDefinitionIndex = 49434;

	class NPJKDMFBDFG___c__DisplayClass62_0 : public ::System::Object
	{
	public:
		::BIGECLNFJPJ* asyncResLoadingHandle; // 0x10
		::NPJKDMFBDFG* __4__this; // 0x18
		::RPG::PoolList_1<::ODGPPIHLOFF*>* preloadedHandles; // 0x20
		::ODGPPIHLOFF* allHandle; // 0x28
		::System::Int32 h; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJKDMFBDFG___C__DISPLAYCLASS62_0_CTOR_OFFSET))(this);
		}

		::System::Void _PreloadPropertyResources1_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPJKDMFBDFG___C__DISPLAYCLASS62_0__PRELOADPROPERTYRESOURCES1_B__0_OFFSET))(this, a1);
		}

		::System::Void _PreloadPropertyResources1_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJKDMFBDFG___C__DISPLAYCLASS62_0__PRELOADPROPERTYRESOURCES1_B__1_OFFSET))(this);
		}

		::System::Void _PreloadPropertyResources1_b__2(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPJKDMFBDFG___C__DISPLAYCLASS62_0__PRELOADPROPERTYRESOURCES1_B__2_OFFSET))(this, a1);
		}

	};
