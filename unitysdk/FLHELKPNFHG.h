#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLHELKPNFHG_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x156C4ED0)
#define FLHELKPNFHG_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x156C53A0)
#define FLHELKPNFHG_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x156C5480)
#define FLHELKPNFHG_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x156C4E40)
#define FLHELKPNFHG_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x156C53E0)
#define FLHELKPNFHG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x156C4C20)
#define FLHELKPNFHG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x156C4D40)
#define FLHELKPNFHG__CCTOR_OFFSET UNITYSDK_OFFSET(0x156C4DC0)
#define FLHELKPNFHG__CTOR_OFFSET UNITYSDK_OFFSET(0x156C4E30)

inline static constexpr unsigned int FLHELKPNFHG_TypeDefinitionIndex = 60942;

class FLHELKPNFHG : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x75; // 0x0
	::System::Collections::Generic::HashSet_1<::System::String*>* BOBNGJGOEFG; // 0x20
	::System::Collections::Generic::HashSet_1<::System::String*>* IBOENBONEEJ; // 0x28
	::System::UInt32 ODFBINHBGDC; // 0x30
	::System::Boolean NNJEHEEBMHP; // 0x34

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLHELKPNFHG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHELKPNFHG__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHELKPNFHG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHELKPNFHG_TOSTRING_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHELKPNFHG_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Boolean ACHJHKIHBJE, ::System::UInt32 BGCKIJNALOE, ::System::Collections::Generic::List_1<::System::String*>* CJECHAOAJPM, ::System::Collections::Generic::List_1<::System::String*>* EPKIKNJHFLF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + FLHELKPNFHG_CNHBDOMKKDE_OFFSET))(this, ACHJHKIHBJE, BGCKIJNALOE, CJECHAOAJPM, EPKIKNJHFLF);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHELKPNFHG_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHELKPNFHG_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHELKPNFHG_FIGPAOKNJLN_OFFSET))(this);
	}
};
