#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LPOEMCGIBMK;
namespace Code::Logic::Data::ScriptObject::Level { class Layer; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MKIFGEBEBAC___C_CBPEKIJJCJM_OFFSET UNITYSDK_OFFSET(0x14DEF7B0)
#define MKIFGEBEBAC___C_OMAGOCBEELB_OFFSET UNITYSDK_OFFSET(0x14DEF760)
#define MKIFGEBEBAC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DEF710)
#define MKIFGEBEBAC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14DEF750)

inline static constexpr unsigned int MKIFGEBEBAC___c_TypeDefinitionIndex = 50987;

class MKIFGEBEBAC___c : public ::System::Object
{
public:
	static ::System::Func_2<::Code::Logic::Data::ScriptObject::Level::Layer*, ::System::Int32>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::Code::Logic::Data::ScriptObject::Level::Layer*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MKIFGEBEBAC___c_TypeDefinitionIndex)->GetStaticField(0x50AE0);
	}
	static ::System::Func_2<::Code::Logic::Data::ScriptObject::Level::Layer*, ::LPOEMCGIBMK*>** StaticGet___9__4_1()
	{
		return (::System::Func_2<::Code::Logic::Data::ScriptObject::Level::Layer*, ::LPOEMCGIBMK*>**)Il2CppClass::FromTypeDefinitionIndex(MKIFGEBEBAC___c_TypeDefinitionIndex)->GetStaticField(0x50AE8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MKIFGEBEBAC___c_TypeDefinitionIndex)->GetStaticField(0x50AF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKIFGEBEBAC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKIFGEBEBAC___C__CTOR_OFFSET))(this);
	}

	::LPOEMCGIBMK* OMAGOCBEELB(::Code::Logic::Data::ScriptObject::Level::Layer* KMOHKCADPNA)
	{
		return ((::LPOEMCGIBMK*(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::Layer*))((::PBYTE)hIl2Cpp + MKIFGEBEBAC___C_OMAGOCBEELB_OFFSET))(this, KMOHKCADPNA);
	}

	::System::Int32 CBPEKIJJCJM(::Code::Logic::Data::ScriptObject::Level::Layer* KMOHKCADPNA)
	{
		return ((::System::Int32(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::Layer*))((::PBYTE)hIl2Cpp + MKIFGEBEBAC___C_CBPEKIJJCJM_OFFSET))(this, KMOHKCADPNA);
	}
};
