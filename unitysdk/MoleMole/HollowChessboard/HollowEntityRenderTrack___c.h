#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D23DD0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10D23E10)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK___C__GETFILTEREDSECTIONTYPELIST_B__10_0_OFFSET UNITYSDK_OFFSET(0x10D23E20)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK___C__GETFILTEREDSECTIONTYPELIST_B__10_1_OFFSET UNITYSDK_OFFSET(0x10D23E50)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK___C__GETFILTEREDSECTIONTYPELIST_B__10_2_OFFSET UNITYSDK_OFFSET(0x10D23E80)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowEntityRenderTrack___c_TypeDefinitionIndex = 50886;

	class HollowEntityRenderTrack___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HollowEntityRenderTrack___c_TypeDefinitionIndex)->GetStaticField(0x38930);
		}
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__10_2()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HollowEntityRenderTrack___c_TypeDefinitionIndex)->GetStaticField(0x38938);
		}
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HollowEntityRenderTrack___c_TypeDefinitionIndex)->GetStaticField(0x38940);
		}
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__10_1()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HollowEntityRenderTrack___c_TypeDefinitionIndex)->GetStaticField(0x38948);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetFilteredSectionTypeList_b__10_0(::System::Type* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK___C__GETFILTEREDSECTIONTYPELIST_B__10_0_OFFSET))(this, x);
		}

		::System::Boolean _GetFilteredSectionTypeList_b__10_1(::System::Type* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK___C__GETFILTEREDSECTIONTYPELIST_B__10_1_OFFSET))(this, x);
		}

		::System::Boolean _GetFilteredSectionTypeList_b__10_2(::System::Type* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYRENDERTRACK___C__GETFILTEREDSECTIONTYPELIST_B__10_2_OFFSET))(this, x);
		}
	};
}
