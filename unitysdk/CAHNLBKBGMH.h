#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRichTextNodeCompiler.h"
class CAHNLBKBGMH;
class CLFABOEKMJI;
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CAHNLBKBGMH_COMPILE_OFFSET UNITYSDK_OFFSET(0xCB6B850)
#define CAHNLBKBGMH_CTOR_OFFSET UNITYSDK_OFFSET(0xCB6C3B0)
#define CAHNLBKBGMH_DOEDJLANCGH_OFFSET UNITYSDK_OFFSET(0xCB6BB50)
#define CAHNLBKBGMH_FALKOFKEKCM_OFFSET UNITYSDK_OFFSET(0xCB6C360)
#define CAHNLBKBGMH_GET_TAG_OFFSET UNITYSDK_OFFSET(0xCB6B510)
#define CAHNLBKBGMH_GLEFNFJPLMM_OFFSET UNITYSDK_OFFSET(0xCB6C310)
#define CAHNLBKBGMH_ODALLOCGAFF_OFFSET UNITYSDK_OFFSET(0xCB6B5E0)
#define CAHNLBKBGMH_PFHJBAMGNPO_OFFSET UNITYSDK_OFFSET(0xCB6B800)
#define CAHNLBKBGMH_PLODAFJKDJP_OFFSET UNITYSDK_OFFSET(0xCB6B580)

inline static constexpr unsigned int CAHNLBKBGMH_TypeDefinitionIndex = 67033;

	class CAHNLBKBGMH : public ::RPG::Client::GridFightRichTextNodeCompiler
	{
	public:
		::CLFABOEKMJI* JDGJCGMFEGK; // 0x10
		::System::Boolean OBPOPPJEEEO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAHNLBKBGMH_CTOR_OFFSET))(this);
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAHNLBKBGMH_GET_TAG_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::UInt32>* PLODAFJKDJP()
		{
			return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAHNLBKBGMH_PLODAFJKDJP_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::UInt32>* ODALLOCGAFF()
		{
			return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAHNLBKBGMH_ODALLOCGAFF_OFFSET))(this);
		}

		::CAHNLBKBGMH* PFHJBAMGNPO(::CLFABOEKMJI* a1)
		{
			return ((::CAHNLBKBGMH*(*)(::PVOID, ::CLFABOEKMJI*))((::PBYTE)hIl2Cpp + CAHNLBKBGMH_PFHJBAMGNPO_OFFSET))(this, a1);
		}

		::System::String* Compile(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + CAHNLBKBGMH_COMPILE_OFFSET))(this, a1, a2);
		}

		::System::String* DOEDJLANCGH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAHNLBKBGMH_DOEDJLANCGH_OFFSET))(this);
		}

		::CAHNLBKBGMH* GLEFNFJPLMM()
		{
			return ((::CAHNLBKBGMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAHNLBKBGMH_GLEFNFJPLMM_OFFSET))(this);
		}

		::CAHNLBKBGMH* FALKOFKEKCM()
		{
			return ((::CAHNLBKBGMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAHNLBKBGMH_FALKOFKEKCM_OFFSET))(this);
		}

	};
