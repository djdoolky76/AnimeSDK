#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class GEIHCPAOKKK;
class INDBDBPBFHB;
namespace MoleMole { class OverlayOutlineRenderer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BMFDCALHGGN_GNELFIHDFCH_OFFSET UNITYSDK_OFFSET(0x139830D0)
#define BMFDCALHGGN_INKNFNOMBDJ_OFFSET UNITYSDK_OFFSET(0x139838F0)
#define BMFDCALHGGN_NELBGMOMFHM_OFFSET UNITYSDK_OFFSET(0x13983680)
#define BMFDCALHGGN__CCTOR_OFFSET UNITYSDK_OFFSET(0x13983040)

inline static constexpr unsigned int BMFDCALHGGN_TypeDefinitionIndex = 89310;

class BMFDCALHGGN : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::MoleMole::OverlayOutlineRenderer*>** StaticGet_MLOKEILPLAN()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::OverlayOutlineRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(BMFDCALHGGN_TypeDefinitionIndex)->GetStaticField(0x4F260);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMFDCALHGGN__CCTOR_OFFSET))();
	}

	static ::System::Boolean GNELFIHDFCH(::MoleMole::EntityHandle KECKGDFIALJ, ::GEIHCPAOKKK* OHPJHPEOFLD, ::System::String* HLDBBGGLNKP, ::MoleMole::OverlayOutlineRenderer*& OCFHGOGFGPE)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle, ::GEIHCPAOKKK*, ::System::String*, ::MoleMole::OverlayOutlineRenderer*&))((::PBYTE)hIl2Cpp + BMFDCALHGGN_GNELFIHDFCH_OFFSET))(KECKGDFIALJ, OHPJHPEOFLD, HLDBBGGLNKP, OCFHGOGFGPE);
	}

	static ::INDBDBPBFHB* NELBGMOMFHM(::MoleMole::EntityHandle KECKGDFIALJ)
	{
		return ((::INDBDBPBFHB*(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + BMFDCALHGGN_NELBGMOMFHM_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean INKNFNOMBDJ(::GEIHCPAOKKK* OHPJHPEOFLD, ::MoleMole::OverlayOutlineRenderer*& OCFHGOGFGPE)
	{
		return ((::System::Boolean(*)(::GEIHCPAOKKK*, ::MoleMole::OverlayOutlineRenderer*&))((::PBYTE)hIl2Cpp + BMFDCALHGGN_INKNFNOMBDJ_OFFSET))(OHPJHPEOFLD, OCFHGOGFGPE);
	}
};
