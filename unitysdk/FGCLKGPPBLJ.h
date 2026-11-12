#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGCLKGPPBLJ;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace XLua { class LuaTable; }

#define FGCLKGPPBLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16671C90)
#define FGCLKGPPBLJ_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x16671F70)
#define FGCLKGPPBLJ_FABMGFPLBNC_OFFSET UNITYSDK_OFFSET(0x166721F0)
#define FGCLKGPPBLJ_FIFKOODDLEM_OFFSET UNITYSDK_OFFSET(0x16672230)
#define FGCLKGPPBLJ_IAEEDOIHAHA_OFFSET UNITYSDK_OFFSET(0x16671BF0)
#define FGCLKGPPBLJ_KBLCPIHEKJN_OFFSET UNITYSDK_OFFSET(0x16672180)
#define FGCLKGPPBLJ_NNJEOOMCPJE_OFFSET UNITYSDK_OFFSET(0x16671ED0)
#define FGCLKGPPBLJ_OHCAPGGOAGE_OFFSET UNITYSDK_OFFSET(0x16672270)
#define FGCLKGPPBLJ___INIT_B__3_0_OFFSET UNITYSDK_OFFSET(0x166722B0)

inline static constexpr unsigned int FGCLKGPPBLJ_TypeDefinitionIndex = 75163;

	class FGCLKGPPBLJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::String*>* EKEIGOABEJN; // 0x10
		::System::String* AJDOEJPFFBF; // 0x18
		::System::String* HAMGKGDFKFK; // 0x20
		::System::String* JDIEAOBPPGL; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* BLICIKDLKOC; // 0x30
		::System::Void _ctor(::XLua::LuaTable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + FGCLKGPPBLJ_CTOR_OFFSET))(this, a1);
		}

		static ::FGCLKGPPBLJ* IAEEDOIHAHA(::XLua::LuaTable* a1)
		{
			return ((::FGCLKGPPBLJ*(*)(::XLua::LuaTable*))((::PBYTE)hIl2Cpp + FGCLKGPPBLJ_IAEEDOIHAHA_OFFSET))(a1);
		}

		static ::FGCLKGPPBLJ* NNJEOOMCPJE(::XLua::LuaTable* a1)
		{
			return ((::FGCLKGPPBLJ*(*)(::XLua::LuaTable*))((::PBYTE)hIl2Cpp + FGCLKGPPBLJ_NNJEOOMCPJE_OFFSET))(a1);
		}

		::System::Void DIOEAJEHHND(::XLua::LuaTable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + FGCLKGPPBLJ_DIOEAJEHHND_OFFSET))(this, a1);
		}

		::System::String* KBLCPIHEKJN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCLKGPPBLJ_KBLCPIHEKJN_OFFSET))(this);
		}

		::System::String* FABMGFPLBNC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCLKGPPBLJ_FABMGFPLBNC_OFFSET))(this);
		}

		::System::String* FIFKOODDLEM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCLKGPPBLJ_FIFKOODDLEM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* OHCAPGGOAGE()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCLKGPPBLJ_OHCAPGGOAGE_OFFSET))(this);
		}

		::System::Void __Init_b__3_0(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + FGCLKGPPBLJ___INIT_B__3_0_OFFSET))(this, a1, a2);
		}

	};
