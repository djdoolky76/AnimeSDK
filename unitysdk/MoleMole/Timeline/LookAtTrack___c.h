#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class LookAtBoneSetup; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_TIMELINE_LOOKATTRACK___C_AEPEBBGNJNB_OFFSET UNITYSDK_OFFSET(0x18824080)
#define MOLEMOLE_TIMELINE_LOOKATTRACK___C_FLFDIDHMHAI_OFFSET UNITYSDK_OFFSET(0x18824070)
#define MOLEMOLE_TIMELINE_LOOKATTRACK___C_LPPHANNJHPP_OFFSET UNITYSDK_OFFSET(0x188240A0)
#define MOLEMOLE_TIMELINE_LOOKATTRACK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18824020)
#define MOLEMOLE_TIMELINE_LOOKATTRACK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18824060)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int LookAtTrack___c_TypeDefinitionIndex = 70428;

	class LookAtTrack___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LookAtTrack___c_TypeDefinitionIndex)->GetStaticField(0x41D50);
		}
		static ::System::Func_2<::MoleMole::Timeline::LookAtBoneSetup*, ::System::String*>** StaticGet___9__26_2()
		{
			return (::System::Func_2<::MoleMole::Timeline::LookAtBoneSetup*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LookAtTrack___c_TypeDefinitionIndex)->GetStaticField(0x41D58);
		}
		static ::System::Func_2<::MoleMole::Timeline::LookAtBoneSetup*, ::System::Boolean>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::MoleMole::Timeline::LookAtBoneSetup*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LookAtTrack___c_TypeDefinitionIndex)->GetStaticField(0x41D60);
		}
		static ::System::Func_2<::MoleMole::Timeline::LookAtBoneSetup*, ::System::String*>** StaticGet___9__26_1()
		{
			return (::System::Func_2<::MoleMole::Timeline::LookAtBoneSetup*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LookAtTrack___c_TypeDefinitionIndex)->GetStaticField(0x41D68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK___C__CTOR_OFFSET))(this);
		}

		::System::Boolean FLFDIDHMHAI(::MoleMole::Timeline::LookAtBoneSetup* EBFCACIEKBC)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::LookAtBoneSetup*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK___C_FLFDIDHMHAI_OFFSET))(this, EBFCACIEKBC);
		}

		::System::String* AEPEBBGNJNB(::MoleMole::Timeline::LookAtBoneSetup* EBFCACIEKBC)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::Timeline::LookAtBoneSetup*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK___C_AEPEBBGNJNB_OFFSET))(this, EBFCACIEKBC);
		}

		::System::String* LPPHANNJHPP(::MoleMole::Timeline::LookAtBoneSetup* EBFCACIEKBC)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::Timeline::LookAtBoneSetup*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK___C_LPPHANNJHPP_OFFSET))(this, EBFCACIEKBC);
		}
	};
}
