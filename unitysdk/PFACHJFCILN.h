#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PFACHJFCILN_PreloadItemState.h"
#include "unitysdk/PFACHJFCILN_PreloadType.h"
#include "unitysdk/RPG/Client/PreloadItemFlag.h"
#include "unitysdk/RPG/GameCore/PreloadGroupType.h"
#include "unitysdk/System/Object.h"
class HMPBAIAPDBE;
class PFACHJFCILN;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { class Action; }
namespace System { class String; }

#define PFACHJFCILN_BAPFJCHNHGM_OFFSET UNITYSDK_OFFSET(0xC200B90)
#define PFACHJFCILN_BBJOEEAFDCE_OFFSET UNITYSDK_OFFSET(0xC200800)
#define PFACHJFCILN_CLEAR_OFFSET UNITYSDK_OFFSET(0xC200B10)
#define PFACHJFCILN_COMPARETO_OFFSET UNITYSDK_OFFSET(0xC200D20)
#define PFACHJFCILN_CTOR_OFFSET UNITYSDK_OFFSET(0xC200E80)
#define PFACHJFCILN_DJFJJFONDCD_OFFSET UNITYSDK_OFFSET(0xC200300)
#define PFACHJFCILN_EELKBMPOBGI_OFFSET UNITYSDK_OFFSET(0xC2002F0)
#define PFACHJFCILN_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0xC200230)
#define PFACHJFCILN_LFCPHOGDDFJ_OFFSET UNITYSDK_OFFSET(0xC200E00)
#define PFACHJFCILN_ODMEKFJLKLF_OFFSET UNITYSDK_OFFSET(0xC2002E0)
#define PFACHJFCILN_OGBJHNNCFOK_OFFSET UNITYSDK_OFFSET(0xC200310)
#define PFACHJFCILN_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC200420)

	class PFACHJFCILN : public ::System::Object
	{
	public:
		::System::String* AGNDDHOLJNL; // 0x10
		::System::String* KNJEFFPKCFD; // 0x18
		::Collections::Pooled::PooledList_1<::HMPBAIAPDBE*>* NPENGFBHFJN; // 0x20
		::System::Action* DPANHIICMLD; // 0x28
		::PFACHJFCILN_PreloadItemState MEPFOEEGBEA; // 0x30
		::PFACHJFCILN_PreloadType KGJAPOONHOD; // 0x34
		::System::UInt32 AJCPOOCBNNH; // 0x38
		::RPG::GameCore::PreloadGroupType HBEDCNGOIMI; // 0x3C
		::RPG::Client::PreloadItemFlag FNPGDNFLMPC; // 0x40
		::System::Single MNAKIEOGPDK; // 0x44
		::PFACHJFCILN_PreloadType IJCGJAGCGMO; // 0x48
		// static const ::System::Object BNNKNPFADJA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFACHJFCILN_CTOR_OFFSET))(this);
		}

		::System::String* EIOMMLPIAKP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFACHJFCILN_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Boolean ODMEKFJLKLF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PFACHJFCILN_ODMEKFJLKLF_OFFSET))(this);
		}

		::System::Boolean EELKBMPOBGI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PFACHJFCILN_EELKBMPOBGI_OFFSET))(this);
		}

		::System::Boolean DJFJJFONDCD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PFACHJFCILN_DJFJJFONDCD_OFFSET))(this);
		}

		::System::String* OGBJHNNCFOK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFACHJFCILN_OGBJHNNCFOK_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFACHJFCILN_TOSTRING_OFFSET))(this);
		}

		::System::String* BBJOEEAFDCE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFACHJFCILN_BBJOEEAFDCE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFACHJFCILN_CLEAR_OFFSET))(this);
		}

		::System::Void BAPFJCHNHGM(::HMPBAIAPDBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMPBAIAPDBE*))((::PBYTE)hIl2Cpp + PFACHJFCILN_BAPFJCHNHGM_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::PFACHJFCILN* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::PFACHJFCILN*))((::PBYTE)hIl2Cpp + PFACHJFCILN_COMPARETO_OFFSET))(this, a1);
		}

		::System::Void LFCPHOGDDFJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PFACHJFCILN_LFCPHOGDDFJ_OFFSET))(this, a1);
		}

	};
