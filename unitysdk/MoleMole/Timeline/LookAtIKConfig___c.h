#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class LookAtBoneSetup; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_TIMELINE_LOOKATIKCONFIG___C_EOBBCBPLCCB_OFFSET UNITYSDK_OFFSET(0x13A0B8F0)
#define MOLEMOLE_TIMELINE_LOOKATIKCONFIG___C_KFLKCGLENCJ_OFFSET UNITYSDK_OFFSET(0x13A0B9F0)
#define MOLEMOLE_TIMELINE_LOOKATIKCONFIG___C_MCDPGLOHEGI_OFFSET UNITYSDK_OFFSET(0x13A0B8D0)
#define MOLEMOLE_TIMELINE_LOOKATIKCONFIG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A0B880)
#define MOLEMOLE_TIMELINE_LOOKATIKCONFIG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13A0B8C0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int LookAtIKConfig___c_TypeDefinitionIndex = 57776;

	class LookAtIKConfig___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Char, ::System::Boolean>** StaticGet___9__3_2()
		{
			return (::System::Func_2<::System::Char, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LookAtIKConfig___c_TypeDefinitionIndex)->GetStaticField(0x3EBA0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LookAtIKConfig___c_TypeDefinitionIndex)->GetStaticField(0x3EBA8);
		}
		static ::System::Func_2<::MoleMole::Timeline::LookAtBoneSetup*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::MoleMole::Timeline::LookAtBoneSetup*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LookAtIKConfig___c_TypeDefinitionIndex)->GetStaticField(0x3EBB0);
		}
		static ::System::Func_2<::MoleMole::Timeline::LookAtBoneSetup*, ::System::Int32>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::MoleMole::Timeline::LookAtBoneSetup*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LookAtIKConfig___c_TypeDefinitionIndex)->GetStaticField(0x3EBB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKCONFIG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKCONFIG___C__CTOR_OFFSET))(this);
		}

		::System::Boolean MCDPGLOHEGI(::MoleMole::Timeline::LookAtBoneSetup* EBFCACIEKBC)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::LookAtBoneSetup*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKCONFIG___C_MCDPGLOHEGI_OFFSET))(this, EBFCACIEKBC);
		}

		::System::Int32 EOBBCBPLCCB(::MoleMole::Timeline::LookAtBoneSetup* EBFCACIEKBC)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Timeline::LookAtBoneSetup*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKCONFIG___C_EOBBCBPLCCB_OFFSET))(this, EBFCACIEKBC);
		}

		::System::Boolean KFLKCGLENCJ(::System::Char CBLGCIFLMKL)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATIKCONFIG___C_KFLKCGLENCJ_OFFSET))(this, CBLGCIFLMKL);
		}
	};
}
