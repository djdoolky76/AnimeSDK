#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GGBFMMDGBLG_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0x20050AB0)
#define GGBFMMDGBLG_DKJCBOGHDGB_OFFSET UNITYSDK_OFFSET(0x20050E90)
#define GGBFMMDGBLG_FLHNGDLANDC_OFFSET UNITYSDK_OFFSET(0x20051020)
#define GGBFMMDGBLG_FMOFHPMJACN_OFFSET UNITYSDK_OFFSET(0x20051190)
#define GGBFMMDGBLG_JDNPCKLELCO_OFFSET UNITYSDK_OFFSET(0x20050C40)
#define GGBFMMDGBLG_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x20051150)
#define GGBFMMDGBLG__CCTOR_OFFSET UNITYSDK_OFFSET(0x20050A20)
#define GGBFMMDGBLG__CTOR_OFFSET UNITYSDK_OFFSET(0x20050930)

inline static constexpr unsigned int GGBFMMDGBLG_TypeDefinitionIndex = 17990;

class GGBFMMDGBLG : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_LDJFNPLGOHF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GGBFMMDGBLG_TypeDefinitionIndex)->GetStaticField(0x40E0);
	}
	::System::EventArgs* MHAMKIHPKFL; // 0x10
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Action_1<::System::EventArgs*>*, ::System::Boolean>>* NKLFNPNIIKK; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Action_1<::System::EventArgs*>*>* PGBDJGGPCCO; // 0x20
	::System::Collections::Generic::LinkedList_1<::System::Action_1<::System::EventArgs*>*>* KAOGGDEIJDD; // 0x28
	::System::Boolean LNGDDCBJFII; // 0x30
	::System::Boolean DBLKNIDIMLG; // 0x31
	::System::Byte _padding0[0x2];
	::System::Int32 IDLHFIIJPEM; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBFMMDGBLG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGBFMMDGBLG__CCTOR_OFFSET))();
	}

	::System::Void ANPBCLAFCJB(::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + GGBFMMDGBLG_ANPBCLAFCJB_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Boolean DKJCBOGHDGB(::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + GGBFMMDGBLG_DKJCBOGHDGB_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Void FLHNGDLANDC(::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + GGBFMMDGBLG_FLHNGDLANDC_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Boolean JDNPCKLELCO(::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA, ::System::Boolean GPCHIMBGNJO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::System::EventArgs*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GGBFMMDGBLG_JDNPCKLELCO_OFFSET))(this, PHHDHIBOCKA, GPCHIMBGNJO);
	}

	::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBFMMDGBLG_NGFKBKCFPLK_OFFSET))(this);
	}

	::System::Void FMOFHPMJACN(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GGBFMMDGBLG_FMOFHPMJACN_OFFSET))(this, KOIBHLHLMFC);
	}
};
