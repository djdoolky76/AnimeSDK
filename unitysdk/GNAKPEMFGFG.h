#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KEEEKDDBENC.h"
#include "unitysdk/RPG/LogTag.h"
#include "unitysdk/System/ReadOnlySpan_1_075EFA8CFBE0DE9A.h"
namespace System { class Object; }
namespace System { class String; }

#define GNAKPEMFGFG_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1DD331D0)
#define GNAKPEMFGFG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C49B40)
#define GNAKPEMFGFG_CTOR_2_OFFSET UNITYSDK_OFFSET(0x3C49C20)
#define GNAKPEMFGFG_CTOR_OFFSET UNITYSDK_OFFSET(0x3C49A60)
#define GNAKPEMFGFG_GLJBKIONOJP_OFFSET UNITYSDK_OFFSET(0x3C49F00)
#define GNAKPEMFGFG_HGONLLOPGBB_OFFSET UNITYSDK_OFFSET(0x3C49CB0)
#define GNAKPEMFGFG_LOOPAIJCJEE_4_OFFSET UNITYSDK_OFFSET(0x3C49CC0)
#define GNAKPEMFGFG_LOOPAIJCJEE_5_OFFSET UNITYSDK_OFFSET(0x3C49D80)
#define GNAKPEMFGFG_LOOPAIJCJEE_6_OFFSET UNITYSDK_OFFSET(0x3C49DB0)
#define GNAKPEMFGFG_LOOPAIJCJEE_7_OFFSET UNITYSDK_OFFSET(0x3C49DC0)
#define GNAKPEMFGFG_LOOPAIJCJEE_8_OFFSET UNITYSDK_OFFSET(0x3C49E60)

inline static constexpr unsigned int GNAKPEMFGFG_TypeDefinitionIndex = 6407;

	struct alignas(4) GNAKPEMFGFG
	{
		::KEEEKDDBENC GHAFIAKHLLO; // 0x10
		::System::Boolean ECLOEFEBPNB; // 0x40
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::RPG::LogTag a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::LogTag, ::System::Boolean))((::PBYTE)hIl2Cpp + GNAKPEMFGFG_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GNAKPEMFGFG_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GNAKPEMFGFG_CTOR_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HGONLLOPGBB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GNAKPEMFGFG_HGONLLOPGBB_OFFSET))(this, a1);
		}

		::System::Void LOOPAIJCJEE_4(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>))((::PBYTE)hIl2Cpp + GNAKPEMFGFG_LOOPAIJCJEE_4_OFFSET))(this, a1);
		}

		::System::Void LOOPAIJCJEE_5(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + GNAKPEMFGFG_LOOPAIJCJEE_5_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LOOPAIJCJEE_6(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GNAKPEMFGFG_LOOPAIJCJEE_6_OFFSET))(this, a1);
		}

		::System::Void LOOPAIJCJEE_7(::System::String* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + GNAKPEMFGFG_LOOPAIJCJEE_7_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LOOPAIJCJEE_8(::System::Object* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + GNAKPEMFGFG_LOOPAIJCJEE_8_OFFSET))(this, a1, a2, a3);
		}

		::System::String* GLJBKIONOJP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNAKPEMFGFG_GLJBKIONOJP_OFFSET))(this);
		}

		/*
		static ::System::String* BBNJCKPKPDN(::GNAKPEMFGFG a1)
		{
			return ((::System::String*(*)(::GNAKPEMFGFG))((::PBYTE)hIl2Cpp + GNAKPEMFGFG_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

	};
