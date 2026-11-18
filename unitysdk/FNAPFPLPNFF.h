#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/SGF/SEvent/DelegateEx.h"

class GAAHPPHMFDO;
class GKPONAJCNJM;
class HHMKCBFMIGN;
class KJFIDPJBIND;
class NGJPBIDNNPK;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define FNAPFPLPNFF_AFLNHOGBLJG_OFFSET UNITYSDK_OFFSET(0x1CE903F0)
#define FNAPFPLPNFF_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x1CE86280)
#define FNAPFPLPNFF_CEGKPPKJIIK_OFFSET UNITYSDK_OFFSET(0x1CE8FF20)
#define FNAPFPLPNFF_IFCKLKEIFLI_3_OFFSET UNITYSDK_OFFSET(0x1CE87540)
#define FNAPFPLPNFF_IFKCLGDHPAA_OFFSET UNITYSDK_OFFSET(0x1CE90690)
#define FNAPFPLPNFF_JIACEDKJMLP_OFFSET UNITYSDK_OFFSET(0x1CE8FC40)
#define FNAPFPLPNFF_NOKHDIBCBPN_OFFSET UNITYSDK_OFFSET(0x1CE90A50)
#define FNAPFPLPNFF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE8FBB0)

inline static constexpr unsigned int FNAPFPLPNFF_TypeDefinitionIndex = 34717;

class FNAPFPLPNFF : public ::System::Object
{
public:
	static ::GAAHPPHMFDO** StaticGet_COKMLPMDGML()
	{
		return (::GAAHPPHMFDO**)Il2CppClass::FromTypeDefinitionIndex(FNAPFPLPNFF_TypeDefinitionIndex)->GetStaticField(0x2A620);
	}
	static ::System::Collections::Generic::Stack_1<::GAAHPPHMFDO*>** StaticGet_JCCGPGCBOBJ()
	{
		return (::System::Collections::Generic::Stack_1<::GAAHPPHMFDO*>**)Il2CppClass::FromTypeDefinitionIndex(FNAPFPLPNFF_TypeDefinitionIndex)->GetStaticField(0x2A628);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNAPFPLPNFF__CCTOR_OFFSET))();
	}

	static ::SGF::SEvent::DelegateEx JIACEDKJMLP(::HHMKCBFMIGN* LIJGNLDHECF)
	{
		return ((::SGF::SEvent::DelegateEx(*)(::HHMKCBFMIGN*))((::PBYTE)hIl2Cpp + FNAPFPLPNFF_JIACEDKJMLP_OFFSET))(LIJGNLDHECF);
	}

	static ::System::Void CEGKPPKJIIK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNAPFPLPNFF_CEGKPPKJIIK_OFFSET))();
	}

	static ::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNAPFPLPNFF_BJANDJKKNCD_OFFSET))();
	}

	static ::System::Void AFLNHOGBLJG()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNAPFPLPNFF_AFLNHOGBLJG_OFFSET))();
	}

	static ::System::Boolean IFKCLGDHPAA(::GKPONAJCNJM* CIEELBEKAOG, ::KJFIDPJBIND* FFPKAPKPPHL, ::System::Collections::Generic::HashSet_1<::KJFIDPJBIND*>* GMLOLIIOPIL, ::System::Collections::Generic::List_1<::KJFIDPJBIND*>* JMIGCJCHPLG)
	{
		return ((::System::Boolean(*)(::GKPONAJCNJM*, ::KJFIDPJBIND*, ::System::Collections::Generic::HashSet_1<::KJFIDPJBIND*>*, ::System::Collections::Generic::List_1<::KJFIDPJBIND*>*))((::PBYTE)hIl2Cpp + FNAPFPLPNFF_IFKCLGDHPAA_OFFSET))(CIEELBEKAOG, FFPKAPKPPHL, GMLOLIIOPIL, JMIGCJCHPLG);
	}

	static ::System::Boolean NOKHDIBCBPN(::GKPONAJCNJM* CIEELBEKAOG, ::System::Collections::Generic::HashSet_1<::KJFIDPJBIND*>* GMLOLIIOPIL, ::System::Collections::Generic::List_1<::KJFIDPJBIND*>* JMIGCJCHPLG, ::System::Collections::Generic::IEnumerable_1<::KJFIDPJBIND*>* OAFICIGICOI)
	{
		return ((::System::Boolean(*)(::GKPONAJCNJM*, ::System::Collections::Generic::HashSet_1<::KJFIDPJBIND*>*, ::System::Collections::Generic::List_1<::KJFIDPJBIND*>*, ::System::Collections::Generic::IEnumerable_1<::KJFIDPJBIND*>*))((::PBYTE)hIl2Cpp + FNAPFPLPNFF_NOKHDIBCBPN_OFFSET))(CIEELBEKAOG, GMLOLIIOPIL, JMIGCJCHPLG, OAFICIGICOI);
	}

	static ::System::Void IFCKLKEIFLI_3(::NGJPBIDNNPK* BGJOPBCCMOC)
	{
		return ((::System::Void(*)(::NGJPBIDNNPK*))((::PBYTE)hIl2Cpp + FNAPFPLPNFF_IFCKLKEIFLI_3_OFFSET))(BGJOPBCCMOC);
	}
};
