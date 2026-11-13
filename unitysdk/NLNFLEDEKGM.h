#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABOFJEIMLLJ;
class KJAMNOGFAMJ;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueBuffData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NLNFLEDEKGM_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0x1A436430)
#define NLNFLEDEKGM_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x1A436270)
#define NLNFLEDEKGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1A435920)
#define NLNFLEDEKGM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A435930)
#define NLNFLEDEKGM_EGFCFCBHJJP_1_OFFSET UNITYSDK_OFFSET(0x1A436110)
#define NLNFLEDEKGM_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0x1A435FB0)
#define NLNFLEDEKGM_GET_BUFFLIST_OFFSET UNITYSDK_OFFSET(0x1A436600)
#define NLNFLEDEKGM_HCDEOKNIGKG_OFFSET UNITYSDK_OFFSET(0x1A4365B0)
#define NLNFLEDEKGM_HGAOOOICFBK_1_OFFSET UNITYSDK_OFFSET(0x1A436340)
#define NLNFLEDEKGM_HGAOOOICFBK_OFFSET UNITYSDK_OFFSET(0x1A436180)
#define NLNFLEDEKGM_JCGHIHFPDIE_1_OFFSET UNITYSDK_OFFSET(0x1A435E60)
#define NLNFLEDEKGM_JCGHIHFPDIE_OFFSET UNITYSDK_OFFSET(0x1A435BD0)
#define NLNFLEDEKGM_KFBOFBMLBBP_OFFSET UNITYSDK_OFFSET(0x1A436020)
#define NLNFLEDEKGM_LJBCDJNNBJH_1_OFFSET UNITYSDK_OFFSET(0x1A435C30)
#define NLNFLEDEKGM_LJBCDJNNBJH_2_OFFSET UNITYSDK_OFFSET(0x1A435EC0)
#define NLNFLEDEKGM_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x1A4359A0)
#define NLNFLEDEKGM_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1A436530)
#define NLNFLEDEKGM_SET_BUFFLIST_OFFSET UNITYSDK_OFFSET(0x1A436610)

inline static constexpr unsigned int NLNFLEDEKGM_TypeDefinitionIndex = 69134;

	class NLNFLEDEKGM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* _BuffList_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNFLEDEKGM_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNFLEDEKGM_DISPOSE_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH(::Google::Protobuf::Collections::RepeatedField_1<::ABOFJEIMLLJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::ABOFJEIMLLJ*>*))((::PBYTE)hIl2Cpp + NLNFLEDEKGM_LJBCDJNNBJH_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH_1(::Google::Protobuf::Collections::RepeatedField_1<::KJAMNOGFAMJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::KJAMNOGFAMJ*>*))((::PBYTE)hIl2Cpp + NLNFLEDEKGM_LJBCDJNNBJH_1_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH_2(::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*))((::PBYTE)hIl2Cpp + NLNFLEDEKGM_LJBCDJNNBJH_2_OFFSET))(this, a1);
		}

		::System::Void EGFCFCBHJJP(::ABOFJEIMLLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABOFJEIMLLJ*))((::PBYTE)hIl2Cpp + NLNFLEDEKGM_EGFCFCBHJJP_OFFSET))(this, a1);
		}

		::System::Void EGFCFCBHJJP_1(::KJAMNOGFAMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJAMNOGFAMJ*))((::PBYTE)hIl2Cpp + NLNFLEDEKGM_EGFCFCBHJJP_1_OFFSET))(this, a1);
		}

		::System::Void HGAOOOICFBK(::ABOFJEIMLLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABOFJEIMLLJ*))((::PBYTE)hIl2Cpp + NLNFLEDEKGM_HGAOOOICFBK_OFFSET))(this, a1);
		}

		::System::Void HGAOOOICFBK_1(::KJAMNOGFAMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJAMNOGFAMJ*))((::PBYTE)hIl2Cpp + NLNFLEDEKGM_HGAOOOICFBK_1_OFFSET))(this, a1);
		}

		::System::Void AALCFBOGFKP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NLNFLEDEKGM_AALCFBOGFKP_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNFLEDEKGM_PJPFIHFAHGO_OFFSET))(this);
		}

		::RPG::Client::RogueBuffData* ACMKLFOMPFC(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueBuffData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NLNFLEDEKGM_ACMKLFOMPFC_OFFSET))(this, a1);
		}

		::System::Int32 HCDEOKNIGKG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNFLEDEKGM_HCDEOKNIGKG_OFFSET))(this);
		}

		::RPG::Client::RogueBuffData* JCGHIHFPDIE(::ABOFJEIMLLJ* a1)
		{
			return ((::RPG::Client::RogueBuffData*(*)(::PVOID, ::ABOFJEIMLLJ*))((::PBYTE)hIl2Cpp + NLNFLEDEKGM_JCGHIHFPDIE_OFFSET))(this, a1);
		}

		::RPG::Client::RogueBuffData* JCGHIHFPDIE_1(::KJAMNOGFAMJ* a1)
		{
			return ((::RPG::Client::RogueBuffData*(*)(::PVOID, ::KJAMNOGFAMJ*))((::PBYTE)hIl2Cpp + NLNFLEDEKGM_JCGHIHFPDIE_1_OFFSET))(this, a1);
		}

		::System::Void KFBOFBMLBBP(::RPG::Client::RogueBuffData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + NLNFLEDEKGM_KFBOFBMLBBP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* get_BuffList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNFLEDEKGM_GET_BUFFLIST_OFFSET))(this);
		}

		::System::Void set_BuffList(::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*))((::PBYTE)hIl2Cpp + NLNFLEDEKGM_SET_BUFFLIST_OFFSET))(this, a1);
		}

	};
