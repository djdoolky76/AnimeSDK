#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class CEEGMMCFCBG;
class FIEEBCKMKDF;
class FKNABMFHPCN;
class KCJNGDLDKFG;
namespace Sofa::Core { class SimpleCommand; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MNJKHKCHKLI_ACDNHGLFMLH_OFFSET UNITYSDK_OFFSET(0xBA07B70)
#define MNJKHKCHKLI_ADD_EXITHANDLER_OFFSET UNITYSDK_OFFSET(0xBA079F0)
#define MNJKHKCHKLI_BDEIJHFFFEM_OFFSET UNITYSDK_OFFSET(0xBA07890)
#define MNJKHKCHKLI_CTOR_OFFSET UNITYSDK_OFFSET(0xBA07D60)
#define MNJKHKCHKLI_GET_CURRENTEXAMITEM_OFFSET UNITYSDK_OFFSET(0xBA07780)
#define MNJKHKCHKLI_GET_EXAMITEMS_OFFSET UNITYSDK_OFFSET(0xBA07760)
#define MNJKHKCHKLI_GGMDOHCNMOC_OFFSET UNITYSDK_OFFSET(0xBA07AB0)
#define MNJKHKCHKLI_KLDGDIIJOOH_OFFSET UNITYSDK_OFFSET(0xBA07C90)
#define MNJKHKCHKLI_LCHCCIGGIAD_OFFSET UNITYSDK_OFFSET(0xBA077F0)
#define MNJKHKCHKLI_MLNBJHAPFML_OFFSET UNITYSDK_OFFSET(0xBA077A0)
#define MNJKHKCHKLI_NLKEPPLHHLP_OFFSET UNITYSDK_OFFSET(0xBA07C30)
#define MNJKHKCHKLI_PNLLINHJDJF_OFFSET UNITYSDK_OFFSET(0xBA07940)
#define MNJKHKCHKLI_REMOVE_EXITHANDLER_OFFSET UNITYSDK_OFFSET(0xBA07A50)
#define MNJKHKCHKLI_SET_CURRENTEXAMITEM_OFFSET UNITYSDK_OFFSET(0xBA07790)
#define MNJKHKCHKLI_SET_EXAMITEMS_OFFSET UNITYSDK_OFFSET(0xBA07770)

inline static constexpr unsigned int MNJKHKCHKLI_TypeDefinitionIndex = 79644;

	class MNJKHKCHKLI : public ::System::Object
	{
	public:
		::Sofa::Core::SimpleCommand* MAFCFNIHMFH; // 0x10
		::System::Action* ExitHandler; // 0x18
		::KCJNGDLDKFG* FFILMBCHEIM; // 0x20
		::FKNABMFHPCN* _CurrentExamItem_k__BackingField; // 0x28
		::System::Collections::Generic::IReadOnlyList_1<::FKNABMFHPCN*>* _ExamItems_k__BackingField; // 0x30
		::Sofa::Core::SimpleCommand* KNOPHJEEPGJ; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJKHKCHKLI_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::FKNABMFHPCN*>* get_ExamItems()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::FKNABMFHPCN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJKHKCHKLI_GET_EXAMITEMS_OFFSET))(this);
		}

		::System::Void set_ExamItems(::System::Collections::Generic::IReadOnlyList_1<::FKNABMFHPCN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::FKNABMFHPCN*>*))((::PBYTE)hIl2Cpp + MNJKHKCHKLI_SET_EXAMITEMS_OFFSET))(this, a1);
		}

		::FKNABMFHPCN* get_CurrentExamItem()
		{
			return ((::FKNABMFHPCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJKHKCHKLI_GET_CURRENTEXAMITEM_OFFSET))(this);
		}

		::System::Void set_CurrentExamItem(::FKNABMFHPCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKNABMFHPCN*))((::PBYTE)hIl2Cpp + MNJKHKCHKLI_SET_CURRENTEXAMITEM_OFFSET))(this, a1);
		}

		::FIEEBCKMKDF* MLNBJHAPFML()
		{
			return ((::FIEEBCKMKDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJKHKCHKLI_MLNBJHAPFML_OFFSET))(this);
		}

		::System::String* LCHCCIGGIAD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJKHKCHKLI_LCHCCIGGIAD_OFFSET))(this);
		}

		::RPG::Client::TextID BDEIJHFFFEM()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJKHKCHKLI_BDEIJHFFFEM_OFFSET))(this);
		}

		::RPG::Client::TextID PNLLINHJDJF()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJKHKCHKLI_PNLLINHJDJF_OFFSET))(this);
		}

		::System::Void add_ExitHandler(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MNJKHKCHKLI_ADD_EXITHANDLER_OFFSET))(this, a1);
		}

		::System::Void remove_ExitHandler(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MNJKHKCHKLI_REMOVE_EXITHANDLER_OFFSET))(this, a1);
		}

		::CEEGMMCFCBG* GGMDOHCNMOC()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJKHKCHKLI_GGMDOHCNMOC_OFFSET))(this);
		}

		::CEEGMMCFCBG* ACDNHGLFMLH()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJKHKCHKLI_ACDNHGLFMLH_OFFSET))(this);
		}

		::System::Void NLKEPPLHHLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJKHKCHKLI_NLKEPPLHHLP_OFFSET))(this);
		}

		::System::Void KLDGDIIJOOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJKHKCHKLI_KLDGDIIJOOH_OFFSET))(this);
		}

	};
