#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MLJGMELKNCC_KCKGMDBGMDB;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14CBCAF0)
#define MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14CBCB30)
#define MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__SETCONTACTUSERLIST_B__6_0_OFFSET UNITYSDK_OFFSET(0x14CBCB40)

namespace MoleMole
{
	inline static constexpr unsigned int UIPrivateMessagePopWindowController___c_TypeDefinitionIndex = 70160;

	class UIPrivateMessagePopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIPrivateMessagePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3F240);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIPrivateMessagePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3F248);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SetContactUserList_b__6_0(::MLJGMELKNCC_KCKGMDBGMDB* l, ::MLJGMELKNCC_KCKGMDBGMDB* r)
		{
			return ((::System::Int32(*)(::PVOID, ::MLJGMELKNCC_KCKGMDBGMDB*, ::MLJGMELKNCC_KCKGMDBGMDB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__SETCONTACTUSERLIST_B__6_0_OFFSET))(this, l, r);
		}
	};
}
